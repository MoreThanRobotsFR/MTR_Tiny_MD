#include <Arduino.h>
#include <SimpleFOC.h>
#include <SimpleFOCDrivers.h>
#include "drivers/drv8316/drv8316.h"
#include <Adafruit_NeoPixel.h>
#include "Tiny_MD_Params.h"

#define TARGET_RP2040
#define SIMPLEFOC_DRV8316

// Prototype for the function
void printDRV8316Status();

// NeoPixel
Adafruit_NeoPixel pixels(NUMPIXELS, WS2812B_PIN, NEO_GRB + NEO_KHZ800);

// magnetic sensor instance - MagneticSensorI2C
MagneticSensorI2C sensor = MagneticSensorI2C(AS5600_I2C);

// BLDC motor & driver instance
BLDCMotor motor = BLDCMotor(11);
DRV8316Driver6PWM driver = DRV8316Driver6PWM(DRV8316_INH_A, DRV8316_INL_A, DRV8316_INH_B, DRV8316_INL_B, DRV8316_INH_C, DRV8316_INL_C, DRV8316_SPI_CS, false, DRV8316_DRV_OFF, DRV8316_nFAULT);

// velocity set point variable
float target_velocity = 0;
// instantiate the commander
Commander command = Commander(Serial);
void doTarget(char *cmd) { command.scalar(&target_velocity, cmd); }

void setup()
{

	// initialise magnetic sensor hardware
	sensor.init();
	// link the motor to the sensor
	motor.linkSensor(&sensor);

	// driver config
	// power supply voltage [V]
	driver.voltage_power_supply = 12;
	driver.init();
	// link the motor and the driver
	motor.linkDriver(&driver);

	// set motion control loop to be used
	motor.controller = MotionControlType::velocity;

	// contoller configuration
	// default parameters in defaults.h

	// velocity PI controller parameters
	motor.PID_velocity.P = 0.2f;
	motor.PID_velocity.I = 20;
	motor.PID_velocity.D = 0;
	// default voltage_power_supply
	motor.voltage_limit = 6;
	// jerk control using voltage voltage ramp
	// default value is 300 volts per sec  ~ 0.3V per millisecond
	motor.PID_velocity.output_ramp = 1000;

	// velocity low pass filtering
	// default 5ms - try different values to see what is the best.
	// the lower the less filtered
	motor.LPF_velocity.Tf = 0.01f;

	// use monitoring with serial
	Serial.begin(115200);

	// comment out if not needed
	motor.useMonitoring(Serial);

	// initialize motor
	motor.init();
	// align sensor and start FOC
	motor.initFOC();

	// add target command T
	command.add('T', doTarget, "target velocity");

	Serial.println(F("Motor ready."));
	Serial.println(F("Set the target velocity using serial terminal:"));
	_delay(1000);
	pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)

	printDRV8316Status();
}

void loop()
{
	Red		= random(0, 255);
	Green	= random(0, 255);
	Blue	= random(0, 255);
	pixels.clear(); // Set all pixel colors to 'off'
	pixels.setPixelColor(0, pixels.Color(Red, Green, Blue));
 	pixels.show();   // Send the updated pixel colors to the hardware.

	// Sensor update
	sensor.update();

	// main FOC algorithm function
	motor.loopFOC();

	// Motion control function
	motor.move(target_velocity);

	// function intended to be used with serial plotter to monitor motor variables
	motor.monitor();

	// user communication
	command.run();

}

void printDRV8316Status()
{
	DRV8316Status status = driver.getStatus();
	Serial.println("DRV8316 Status:");
	Serial.print("Fault: ");
	Serial.println(status.isFault());
	Serial.print("Buck Error: ");
	Serial.print(status.isBuckError());
	Serial.print("  Undervoltage: ");
	Serial.print(status.isBuckUnderVoltage());
	Serial.print("  OverCurrent: ");
	Serial.println(status.isBuckOverCurrent());
	Serial.print("Charge Pump UnderVoltage: ");
	Serial.println(status.isChargePumpUnderVoltage());
	Serial.print("OTP Error: ");
	Serial.println(status.isOneTimeProgrammingError());
	Serial.print("OverCurrent: ");
	Serial.print(status.isOverCurrent());
	Serial.print("  Ah: ");
	Serial.print(status.isOverCurrent_Ah());
	Serial.print("  Al: ");
	Serial.print(status.isOverCurrent_Al());
	Serial.print("  Bh: ");
	Serial.print(status.isOverCurrent_Bh());
	Serial.print("  Bl: ");
	Serial.print(status.isOverCurrent_Bl());
	Serial.print("  Ch: ");
	Serial.print(status.isOverCurrent_Ch());
	Serial.print("  Cl: ");
	Serial.println(status.isOverCurrent_Cl());
	Serial.print("OverTemperature: ");
	Serial.print(status.isOverTemperature());
	Serial.print("  Shutdown: ");
	Serial.print(status.isOverTemperatureShutdown());
	Serial.print("  Warning: ");
	Serial.println(status.isOverTemperatureWarning());
	Serial.print("OverVoltage: ");
	Serial.println(status.isOverVoltage());
	Serial.print("PowerOnReset: ");
	Serial.println(status.isPowerOnReset());
	Serial.print("SPI Error: ");
	Serial.print(status.isSPIError());
	Serial.print("  Address: ");
	Serial.print(status.isSPIAddressError());
	Serial.print("  Clock: ");
	Serial.print(status.isSPIClockFramingError());
	Serial.print("  Parity: ");
	Serial.println(status.isSPIParityError());
	if (status.isFault())
		driver.clearFault();
	delayMicroseconds(1); // ensure 400ns delay
	DRV8316_PWMMode val = driver.getPWMMode();
	Serial.print("PWM Mode: ");
	Serial.println(val);
	delayMicroseconds(1); // ensure 400ns delay
	bool lock = driver.isRegistersLocked();
	Serial.print("Lock: ");
	Serial.println(lock);
}