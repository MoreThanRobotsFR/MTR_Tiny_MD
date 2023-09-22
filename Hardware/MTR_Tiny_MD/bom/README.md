<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Interactive BOM for KiCAD</title>
  <style type="text/css">
:root {
  --pcb-edge-color: black;
  --pad-color: #878787;
  --pad-hole-color: #CCCCCC;
  --pad-color-highlight: #D04040;
  --pad-color-highlight-both: #D0D040;
  --pad-color-highlight-marked: #44a344;
  --pin1-outline-color: #ffb629;
  --pin1-outline-color-highlight: #ffb629;
  --pin1-outline-color-highlight-both: #fcbb39;
  --pin1-outline-color-highlight-marked: #fdbe41;
  --silkscreen-edge-color: #aa4;
  --silkscreen-polygon-color: #4aa;
  --silkscreen-text-color: #4aa;
  --fabrication-edge-color: #907651;
  --fabrication-polygon-color: #907651;
  --fabrication-text-color: #a27c24;
  --track-color: #def5f1;
  --track-color-highlight: #D04040;
  --zone-color: #def5f1;
  --zone-color-highlight: #d0404080;
}

html,
body {
  margin: 0px;
  height: 100%;
  font-family: Verdana, sans-serif;
}

.dark.topmostdiv {
  --pcb-edge-color: #eee;
  --pad-color: #808080;
  --pin1-outline-color: #ffa800;
  --pin1-outline-color-highlight: #ccff00;
  --track-color: #42524f;
  --zone-color: #42524f;
  background-color: #252c30;
  color: #eee;
}

button {
  background-color: #eee;
  border: 1px solid #888;
  color: black;
  height: 44px;
  width: 44px;
  text-align: center;
  text-decoration: none;
  display: inline-block;
  font-size: 14px;
  font-weight: bolder;
}

.dark button {
  /* This will be inverted */
  background-color: #c3b7b5;
}

button.depressed {
  background-color: #0a0;
  color: white;
}

.dark button.depressed {
  /* This will be inverted */
  background-color: #b3b;
}

button:focus {
  outline: 0;
}

button#tb-btn {
  background-image: url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 8.47 8.47'%3E%3Crect transform='translate(0 -288.53)' ry='1.17' y='288.8' x='.27' height='7.94' width='7.94' fill='%23f9f9f9'/%3E%3Cg transform='translate(0 -288.53)'%3E%3Crect width='7.94' height='7.94' x='.27' y='288.8' ry='1.17' fill='none' stroke='%23000' stroke-width='.4' stroke-linejoin='round'/%3E%3Cpath d='M1.32 290.12h5.82M1.32 291.45h5.82' fill='none' stroke='%23000' stroke-width='.4'/%3E%3Cpath d='M4.37 292.5v4.23M.26 292.63H8.2' fill='none' stroke='%23000' stroke-width='.3'/%3E%3Ctext font-weight='700' font-size='3.17' font-family='sans-serif'%3E%3Ctspan x='1.35' y='295.73'%3EF%3C/tspan%3E%3Ctspan x='5.03' y='295.68'%3EB%3C/tspan%3E%3C/text%3E%3C/g%3E%3C/svg%3E%0A");
}

button#lr-btn {
  background-image: url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 8.47 8.47'%3E%3Crect transform='translate(0 -288.53)' ry='1.17' y='288.8' x='.27' height='7.94' width='7.94' fill='%23f9f9f9'/%3E%3Cg transform='translate(0 -288.53)'%3E%3Crect width='7.94' height='7.94' x='.27' y='288.8' ry='1.17' fill='none' stroke='%23000' stroke-width='.4' stroke-linejoin='round'/%3E%3Cpath d='M1.06 290.12H3.7m-2.64 1.33H3.7m-2.64 1.32H3.7m-2.64 1.3H3.7m-2.64 1.33H3.7' fill='none' stroke='%23000' stroke-width='.4'/%3E%3Cpath d='M4.37 288.8v7.94m0-4.11h3.96' fill='none' stroke='%23000' stroke-width='.3'/%3E%3Ctext font-weight='700' font-size='3.17' font-family='sans-serif'%3E%3Ctspan x='5.11' y='291.96'%3EF%3C/tspan%3E%3Ctspan x='5.03' y='295.68'%3EB%3C/tspan%3E%3C/text%3E%3C/g%3E%3C/svg%3E%0A");
}

button#bom-btn {
  background-image: url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 8.47 8.47'%3E%3Crect transform='translate(0 -288.53)' ry='1.17' y='288.8' x='.27' height='7.94' width='7.94' fill='%23f9f9f9'/%3E%3Cg transform='translate(0 -288.53)' fill='none' stroke='%23000' stroke-width='.4'%3E%3Crect width='7.94' height='7.94' x='.27' y='288.8' ry='1.17' stroke-linejoin='round'/%3E%3Cpath d='M1.59 290.12h5.29M1.59 291.45h5.33M1.59 292.75h5.33M1.59 294.09h5.33M1.59 295.41h5.33'/%3E%3C/g%3E%3C/svg%3E");
}

button#bom-grouped-btn {
  background-image: url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' width='32' height='32'%3E%3Cg stroke='%23000' stroke-linejoin='round' class='layer'%3E%3Crect width='29' height='29' x='1.5' y='1.5' stroke-width='2' fill='%23fff' rx='5' ry='5'/%3E%3Cpath stroke-linecap='square' stroke-width='2' d='M6 10h4m4 0h5m4 0h3M6.1 22h3m3.9 0h5m4 0h4m-16-8h4m4 0h4'/%3E%3Cpath stroke-linecap='null' d='M5 17.5h22M5 26.6h22M5 5.5h22'/%3E%3C/g%3E%3C/svg%3E");
}

button#bom-ungrouped-btn {
  background-image: url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' width='32' height='32'%3E%3Cg stroke='%23000' stroke-linejoin='round' class='layer'%3E%3Crect width='29' height='29' x='1.5' y='1.5' stroke-width='2' fill='%23fff' rx='5' ry='5'/%3E%3Cpath stroke-linecap='square' stroke-width='2' d='M6 10h4m-4 8h3m-3 8h4'/%3E%3Cpath stroke-linecap='null' d='M5 13.5h22m-22 8h22M5 5.5h22'/%3E%3C/g%3E%3C/svg%3E");
}

button#bom-netlist-btn {
  background-image: url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' width='32' height='32'%3E%3Cg fill='none' stroke='%23000' class='layer'%3E%3Crect width='29' height='29' x='1.5' y='1.5' stroke-width='2' fill='%23fff' rx='5' ry='5'/%3E%3Cpath stroke-width='2' d='M6 26l6-6v-8m13.8-6.3l-6 6v8'/%3E%3Ccircle cx='11.8' cy='9.5' r='2.8' stroke-width='2'/%3E%3Ccircle cx='19.8' cy='22.8' r='2.8' stroke-width='2'/%3E%3C/g%3E%3C/svg%3E");
}

button#copy {
  background-image: url("data:image/svg+xml,%3Csvg height='48' viewBox='0 0 48 48' width='48' xmlns='http://www.w3.org/2000/svg'%3E%3Cpath d='M0 0h48v48h-48z' fill='none'/%3E%3Cpath d='M32 2h-24c-2.21 0-4 1.79-4 4v28h4v-28h24v-4zm6 8h-22c-2.21 0-4 1.79-4 4v28c0 2.21 1.79 4 4 4h22c2.21 0 4-1.79 4-4v-28c0-2.21-1.79-4-4-4zm0 32h-22v-28h22v28z'/%3E%3C/svg%3E");
  background-position: 6px 6px;
  background-repeat: no-repeat;
  background-size: 26px 26px;
  border-radius: 6px;
  height: 40px;
  width: 40px;
  margin: 10px 5px;
}

button#copy:active {
  box-shadow: inset 0px 0px 5px #6c6c6c;
}

textarea.clipboard-temp {
  position: fixed;
  top: 0;
  left: 0;
  width: 2em;
  height: 2em;
  padding: 0;
  border: None;
  outline: None;
  box-shadow: None;
  background: transparent;
}

.left-most-button {
  border-right: 0;
  border-top-left-radius: 6px;
  border-bottom-left-radius: 6px;
}

.middle-button {
  border-right: 0;
}

.right-most-button {
  border-top-right-radius: 6px;
  border-bottom-right-radius: 6px;
}

.button-container {
  font-size: 0;
  margin: 10px 10px 10px 0px;
}

.dark .button-container {
  filter: invert(1);
}

.button-container button {
  background-size: 32px 32px;
  background-position: 5px 5px;
  background-repeat: no-repeat;
}

@media print {
  .hideonprint {
    display: none;
  }
}

canvas {
  cursor: crosshair;
}

canvas:active {
  cursor: grabbing;
}

.fileinfo {
  width: 100%;
  max-width: 1000px;
  border: none;
  padding: 5px;
}

.fileinfo .title {
  font-size: 20pt;
  font-weight: bold;
}

.fileinfo td {
  overflow: hidden;
  white-space: nowrap;
  max-width: 1px;
  width: 50%;
  text-overflow: ellipsis;
}

.bom {
  border-collapse: collapse;
  font-family: Consolas, "DejaVu Sans Mono", Monaco, monospace;
  font-size: 10pt;
  table-layout: fixed;
  width: 100%;
  margin-top: 1px;
  position: relative;
}

.bom th,
.bom td {
  border: 1px solid black;
  padding: 5px;
  word-wrap: break-word;
  text-align: center;
  position: relative;
}

.dark .bom th,
.dark .bom td {
  border: 1px solid #777;
}

.bom th {
  background-color: #CCCCCC;
  background-clip: padding-box;
}

.dark .bom th {
  background-color: #3b4749;
}

.bom tr.highlighted:nth-child(n) {
  background-color: #cfc;
}

.dark .bom tr.highlighted:nth-child(n) {
  background-color: #226022;
}

.bom tr:nth-child(even) {
  background-color: #f2f2f2;
}

.dark .bom tr:nth-child(even) {
  background-color: #313b40;
}

.bom tr.checked {
  color: #1cb53d;
}

.dark .bom tr.checked {
  color: #2cce54;
}

.bom tr {
  transition: background-color 0.2s;
}

.bom .numCol {
  width: 30px;
}

.bom .value {
  width: 15%;
}

.bom .quantity {
  width: 65px;
}

.bom th .sortmark {
  position: absolute;
  right: 1px;
  top: 1px;
  margin-top: -5px;
  border-width: 5px;
  border-style: solid;
  border-color: transparent transparent #221 transparent;
  transform-origin: 50% 85%;
  transition: opacity 0.2s, transform 0.4s;
}

.dark .bom th .sortmark {
  filter: invert(1);
}

.bom th .sortmark.none {
  opacity: 0;
}

.bom th .sortmark.desc {
  transform: rotate(180deg);
}

.bom th:hover .sortmark.none {
  opacity: 0.5;
}

.bom .bom-checkbox {
  width: 30px;
  position: relative;
  user-select: none;
  -moz-user-select: none;
}

.bom .bom-checkbox:before {
  content: "";
  position: absolute;
  border-width: 15px;
  border-style: solid;
  border-color: #51829f transparent transparent transparent;
  visibility: hidden;
  top: -15px;
}

.bom .bom-checkbox:after {
  content: "Double click to set/unset all";
  position: absolute;
  color: white;
  top: -35px;
  left: -26px;
  background: #51829f;
  padding: 5px 15px;
  border-radius: 8px;
  white-space: nowrap;
  visibility: hidden;
}

.bom .bom-checkbox:hover:before,
.bom .bom-checkbox:hover:after {
  visibility: visible;
  transition: visibility 0.2s linear 1s;
}

.split {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
  overflow-y: auto;
  overflow-x: hidden;
  background-color: inherit;
}

.split.split-horizontal,
.gutter.gutter-horizontal {
  height: 100%;
  float: left;
}

.gutter {
  background-color: #ddd;
  background-repeat: no-repeat;
  background-position: 50%;
  transition: background-color 0.3s;
}

.dark .gutter {
  background-color: #777;
}

.gutter.gutter-horizontal {
  background-image: url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAeCAYAAADkftS9AAAAIklEQVQoU2M4c+bMfxAGAgYYmwGrIIiDjrELjpo5aiZeMwF+yNnOs5KSvgAAAABJRU5ErkJggg==');
  cursor: ew-resize;
  width: 5px;
}

.gutter.gutter-vertical {
  background-image: url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAB4AAAAFAQMAAABo7865AAAABlBMVEVHcEzMzMzyAv2sAAAAAXRSTlMAQObYZgAAABBJREFUeF5jOAMEEAIEEFwAn3kMwcB6I2AAAAAASUVORK5CYII=');
  cursor: ns-resize;
  height: 5px;
}

.searchbox {
  float: left;
  height: 40px;
  margin: 10px 5px;
  padding: 12px 32px;
  font-family: Consolas, "DejaVu Sans Mono", Monaco, monospace;
  font-size: 18px;
  box-sizing: border-box;
  border: 1px solid #888;
  border-radius: 6px;
  outline: none;
  background-color: #eee;
  transition: background-color 0.2s, border 0.2s;
  background-image: url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAABNklEQVQ4T8XSMUvDQBQH8P/LElFa/AIZHcTBQSz0I/gFstTBRR2KUC4ldDxw7h0Bl3RRUATxi4iiODgoiLNrbQYp5J6cpJJqomkX33Z37/14d/dIa33MzDuYI4johOI4XhyNRteO46zNYjDzAxE1yBZprVeZ+QbAUhXEGJMA2Ox2u4+fQIa0mPmsCgCgJYQ4t7lfgF0opQYAdv9ABkKI/UnOFCClXKjX61cA1osQY8x9kiRNKeV7IWA3oyhaSdP0FkAtjxhj3hzH2RBCPOf3pzqYHCilfAAX+URm9oMguPzeWSGQvUcMYC8rOBJCHBRdqxTo9/vbRHRqi8bj8XKv1xvODbiuW2u32/bvf0SlDv4XYOY7z/Mavu+nM1+BmQ+NMc0wDF/LprP0DbTWW0T00ul0nn4b7Q87+X4Qmfiq2wAAAABJRU5ErkJggg==');
  background-position: 10px 10px;
  background-repeat: no-repeat;
}

.dark .searchbox {
  background-color: #111;
  color: #eee;
}

.searchbox::placeholder {
  color: #ccc;
}

.dark .searchbox::placeholder {
  color: #666;
}

.filter {
  width: calc(60% - 64px);
}

.reflookup {
  width: calc(40% - 10px);
}

input[type=text]:focus {
  background-color: white;
  border: 1px solid #333;
}

.dark input[type=text]:focus {
  background-color: #333;
  border: 1px solid #ccc;
}

mark.highlight {
  background-color: #5050ff;
  color: #fff;
  padding: 2px;
  border-radius: 6px;
}

.dark mark.highlight {
  background-color: #76a6da;
  color: #111;
}

.menubtn {
  background-color: white;
  border: none;
  background-image: url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' width='36' height='36' viewBox='0 0 20 20'%3E%3Cpath fill='none' d='M0 0h20v20H0V0z'/%3E%3Cpath d='M15.95 10.78c.03-.25.05-.51.05-.78s-.02-.53-.06-.78l1.69-1.32c.15-.12.19-.34.1-.51l-1.6-2.77c-.1-.18-.31-.24-.49-.18l-1.99.8c-.42-.32-.86-.58-1.35-.78L12 2.34c-.03-.2-.2-.34-.4-.34H8.4c-.2 0-.36.14-.39.34l-.3 2.12c-.49.2-.94.47-1.35.78l-1.99-.8c-.18-.07-.39 0-.49.18l-1.6 2.77c-.1.18-.06.39.1.51l1.69 1.32c-.04.25-.07.52-.07.78s.02.53.06.78L2.37 12.1c-.15.12-.19.34-.1.51l1.6 2.77c.1.18.31.24.49.18l1.99-.8c.42.32.86.58 1.35.78l.3 2.12c.04.2.2.34.4.34h3.2c.2 0 .37-.14.39-.34l.3-2.12c.49-.2.94-.47 1.35-.78l1.99.8c.18.07.39 0 .49-.18l1.6-2.77c.1-.18.06-.39-.1-.51l-1.67-1.32zM10 13c-1.65 0-3-1.35-3-3s1.35-3 3-3 3 1.35 3 3-1.35 3-3 3z'/%3E%3C/svg%3E%0A");
  background-position: center;
  background-repeat: no-repeat;
}

.statsbtn {
  background-color: white;
  border: none;
  background-image: url("data:image/svg+xml,%3Csvg width='36' height='36' xmlns='http://www.w3.org/2000/svg'%3E%3Cpath d='M4 6h28v24H4V6zm0 8h28v8H4m9-16v24h10V5.8' fill='none' stroke='%23000' stroke-width='2'/%3E%3C/svg%3E");
  background-position: center;
  background-repeat: no-repeat;
}

.iobtn {
  background-color: white;
  border: none;
  background-image: url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' width='36' height='36'%3E%3Cpath fill='none' stroke='%23000' stroke-width='2' d='M3 33v-7l6.8-7h16.5l6.7 7v7H3zM3.2 26H33M21 9l5-5.9 5 6h-2.5V15h-5V9H21zm-4.9 0l-5 6-5-6h2.5V3h5v6h2.5z'/%3E%3Cpath fill='none' stroke='%23000' d='M6.1 29.5H10'/%3E%3C/svg%3E");
  background-position: center;
  background-repeat: no-repeat;
}

.visbtn {
  background-image: url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' width='24' height='24'%3E%3Cpath fill='none' stroke='%23333' d='M2.5 4.5h5v15h-5zM9.5 4.5h5v15h-5zM16.5 4.5h5v15h-5z'/%3E%3C/svg%3E");
  background-position: center;
  background-repeat: no-repeat;
  padding: 15px;
}

#vismenu-content {
  left: 0px;
  font-family: Verdana, sans-serif;
}

.dark .statsbtn,
.dark .savebtn,
.dark .menubtn,
.dark .iobtn,
.dark .visbtn {
  filter: invert(1);
}

.flexbox {
  display: flex;
  align-items: center;
  justify-content: space-between;
  width: 100%;
}

.savebtn {
  background-color: #d6d6d6;
  width: auto;
  height: 30px;
  flex-grow: 1;
  margin: 5px;
  border-radius: 4px;
}

.savebtn:active {
  background-color: #0a0;
  color: white;
}

.dark .savebtn:active {
  /* This will be inverted */
  background-color: #b3b;
}

.stats {
  border-collapse: collapse;
  font-size: 12pt;
  table-layout: fixed;
  width: 100%;
  min-width: 450px;
}

.dark .stats td {
  border: 1px solid #bbb;
}

.stats td {
  border: 1px solid black;
  padding: 5px;
  word-wrap: break-word;
  text-align: center;
  position: relative;
}

#checkbox-stats div {
  position: absolute;
  left: 0;
  top: 0;
  height: 100%;
  width: 100%;
  display: flex;
  align-items: center;
  justify-content: center;
}

#checkbox-stats .bar {
  background-color: rgba(28, 251, 0, 0.6);
}

.menu {
  position: relative;
  display: inline-block;
  margin: 10px 10px 10px 0px;
}

.menu-content {
  font-size: 12pt !important;
  text-align: left !important;
  font-weight: normal !important;
  display: none;
  position: absolute;
  background-color: white;
  right: 0;
  min-width: 300px;
  box-shadow: 0px 8px 16px 0px rgba(0, 0, 0, 0.2);
  z-index: 100;
  padding: 8px;
}

.dark .menu-content {
  background-color: #111;
}

.menu:hover .menu-content {
  display: block;
}

.menu:hover .menubtn,
.menu:hover .iobtn,
.menu:hover .statsbtn {
  background-color: #eee;
}

.menu-label {
  display: inline-block;
  padding: 8px;
  border: 1px solid #ccc;
  border-top: 0;
  width: calc(100% - 18px);
}

.menu-label-top {
  border-top: 1px solid #ccc;
}

.menu-textbox {
  float: left;
  height: 24px;
  margin: 10px 5px;
  padding: 5px 5px;
  font-family: Consolas, "DejaVu Sans Mono", Monaco, monospace;
  font-size: 14px;
  box-sizing: border-box;
  border: 1px solid #888;
  border-radius: 4px;
  outline: none;
  background-color: #eee;
  transition: background-color 0.2s, border 0.2s;
  width: calc(100% - 10px);
}

.menu-textbox.invalid,
.dark .menu-textbox.invalid {
  color: red;
}

.dark .menu-textbox {
  background-color: #222;
  color: #eee;
}

.radio-container {
  margin: 4px;
}

.topmostdiv {
  width: 100%;
  height: 100%;
  background-color: white;
  transition: background-color 0.3s;
}

#top {
  height: 78px;
  border-bottom: 2px solid black;
}

.dark #top {
  border-bottom: 2px solid #ccc;
}

#dbg {
  display: block;
}

::-webkit-scrollbar {
  width: 8px;
}

::-webkit-scrollbar-track {
  background: #aaa;
}

::-webkit-scrollbar-thumb {
  background: #666;
  border-radius: 3px;
}

::-webkit-scrollbar-thumb:hover {
  background: #555;
}

.slider {
  -webkit-appearance: none;
  width: 100%;
  margin: 3px 0;
  padding: 0;
  outline: none;
  opacity: 0.7;
  -webkit-transition: .2s;
  transition: opacity .2s;
  border-radius: 3px;
}

.slider:hover {
  opacity: 1;
}

.slider:focus {
  outline: none;
}

.slider::-webkit-slider-runnable-track {
  -webkit-appearance: none;
  width: 100%;
  height: 8px;
  background: #d3d3d3;
  border-radius: 3px;
  border: none;
}

.slider::-webkit-slider-thumb {
  -webkit-appearance: none;
  width: 15px;
  height: 15px;
  border-radius: 50%;
  background: #0a0;
  cursor: pointer;
  margin-top: -4px;
}

.dark .slider::-webkit-slider-thumb {
  background: #3d3;
}

.slider::-moz-range-thumb {
  width: 15px;
  height: 15px;
  border-radius: 50%;
  background: #0a0;
  cursor: pointer;
}

.slider::-moz-range-track {
  height: 8px;
  background: #d3d3d3;
  border-radius: 3px;
}

.dark .slider::-moz-range-thumb {
  background: #3d3;
}

.slider::-ms-track {
  width: 100%;
  height: 8px;
  border-width: 3px 0;
  background: transparent;
  border-color: transparent;
  color: transparent;
  transition: opacity .2s;
}

.slider::-ms-fill-lower {
  background: #d3d3d3;
  border: none;
  border-radius: 3px;
}

.slider::-ms-fill-upper {
  background: #d3d3d3;
  border: none;
  border-radius: 3px;
}

.slider::-ms-thumb {
  width: 15px;
  height: 15px;
  border-radius: 50%;
  background: #0a0;
  cursor: pointer;
  margin: 0;
}

.shameless-plug {
  font-size: 0.8em;
  text-align: center;
  display: block;
}

a {
  color: #0278a4;
}

.dark a {
  color: #00b9fd;
}

#frontcanvas,
#backcanvas {
  touch-action: none;
}

.placeholder {
  border: 1px dashed #9f9fda !important;
  background-color: #edf2f7 !important;
}

.dragging {
  z-index: 999;
}

.dark .dragging>table>tbody>tr {
  background-color: #252c30;
}

.dark .placeholder {
  filter: invert(1);
}

.column-spacer {
  top: 0;
  left: 0;
  width: calc(100% - 4px);
  position: absolute;
  cursor: pointer;
  user-select: none;
  height: 100%;
}

.column-width-handle {
  top: 0;
  right: 0;
  width: 4px;
  position: absolute;
  cursor: col-resize;
  user-select: none;
  height: 100%;
}

.column-width-handle:hover {
  background-color: #4f99bd;
}

.help-link {
  border: 1px solid #0278a4;
  padding-inline: 0.3rem;
  border-radius: 3px;
  cursor: pointer;
}

.dark .help-link {
  border: 1px solid #00b9fd;
}

.bom-color {
  width: 20%;
}

.color-column input {
  width: 1.6rem;
  height: 1rem;
  border: 1px solid black;
  cursor: pointer;
  padding: 0;
}

/* removes default styling from input color element */
::-webkit-color-swatch {
  border: none;
}

::-webkit-color-swatch-wrapper {
  padding: 0;
}

::-moz-color-swatch,
::-moz-focus-inner {
  border: none;
}

::-moz-focus-inner {
  padding: 0;
}

  </style>
  <script type="text/javascript" >
///////////////////////////////////////////////
/*
  Split.js - v1.3.5
  MIT License
  https://github.com/nathancahill/Split.js
*/
!function(e,t){"object"==typeof exports&&"undefined"!=typeof module?module.exports=t():"function"==typeof define&&define.amd?define(t):e.Split=t()}(this,function(){"use strict";var e=window,t=e.document,n="addEventListener",i="removeEventListener",r="getBoundingClientRect",s=function(){return!1},o=e.attachEvent&&!e[n],a=["","-webkit-","-moz-","-o-"].filter(function(e){var n=t.createElement("div");return n.style.cssText="width:"+e+"calc(9px)",!!n.style.length}).shift()+"calc",l=function(e){return"string"==typeof e||e instanceof String?t.querySelector(e):e};return function(u,c){function z(e,t,n){var i=A(y,t,n);Object.keys(i).forEach(function(t){return e.style[t]=i[t]})}function h(e,t){var n=B(y,t);Object.keys(n).forEach(function(t){return e.style[t]=n[t]})}function f(e){var t=E[this.a],n=E[this.b],i=t.size+n.size;t.size=e/this.size*i,n.size=i-e/this.size*i,z(t.element,t.size,this.aGutterSize),z(n.element,n.size,this.bGutterSize)}function m(e){var t;this.dragging&&((t="touches"in e?e.touches[0][b]-this.start:e[b]-this.start)<=E[this.a].minSize+M+this.aGutterSize?t=E[this.a].minSize+this.aGutterSize:t>=this.size-(E[this.b].minSize+M+this.bGutterSize)&&(t=this.size-(E[this.b].minSize+this.bGutterSize)),f.call(this,t),c.onDrag&&c.onDrag())}function g(){var e=E[this.a].element,t=E[this.b].element;this.size=e[r]()[y]+t[r]()[y]+this.aGutterSize+this.bGutterSize,this.start=e[r]()[G]}function d(){var t=this,n=E[t.a].element,r=E[t.b].element;t.dragging&&c.onDragEnd&&c.onDragEnd(),t.dragging=!1,e[i]("mouseup",t.stop),e[i]("touchend",t.stop),e[i]("touchcancel",t.stop),t.parent[i]("mousemove",t.move),t.parent[i]("touchmove",t.move),delete t.stop,delete t.move,n[i]("selectstart",s),n[i]("dragstart",s),r[i]("selectstart",s),r[i]("dragstart",s),n.style.userSelect="",n.style.webkitUserSelect="",n.style.MozUserSelect="",n.style.pointerEvents="",r.style.userSelect="",r.style.webkitUserSelect="",r.style.MozUserSelect="",r.style.pointerEvents="",t.gutter.style.cursor="",t.parent.style.cursor=""}function S(t){var i=this,r=E[i.a].element,o=E[i.b].element;!i.dragging&&c.onDragStart&&c.onDragStart(),t.preventDefault(),i.dragging=!0,i.move=m.bind(i),i.stop=d.bind(i),e[n]("mouseup",i.stop),e[n]("touchend",i.stop),e[n]("touchcancel",i.stop),i.parent[n]("mousemove",i.move),i.parent[n]("touchmove",i.move),r[n]("selectstart",s),r[n]("dragstart",s),o[n]("selectstart",s),o[n]("dragstart",s),r.style.userSelect="none",r.style.webkitUserSelect="none",r.style.MozUserSelect="none",r.style.pointerEvents="none",o.style.userSelect="none",o.style.webkitUserSelect="none",o.style.MozUserSelect="none",o.style.pointerEvents="none",i.gutter.style.cursor=j,i.parent.style.cursor=j,g.call(i)}function v(e){e.forEach(function(t,n){if(n>0){var i=F[n-1],r=E[i.a],s=E[i.b];r.size=e[n-1],s.size=t,z(r.element,r.size,i.aGutterSize),z(s.element,s.size,i.bGutterSize)}})}function p(){F.forEach(function(e){e.parent.removeChild(e.gutter),E[e.a].element.style[y]="",E[e.b].element.style[y]=""})}void 0===c&&(c={});var y,b,G,E,w=l(u[0]).parentNode,D=e.getComputedStyle(w).flexDirection,U=c.sizes||u.map(function(){return 100/u.length}),k=void 0!==c.minSize?c.minSize:100,x=Array.isArray(k)?k:u.map(function(){return k}),L=void 0!==c.gutterSize?c.gutterSize:10,M=void 0!==c.snapOffset?c.snapOffset:30,O=c.direction||"horizontal",j=c.cursor||("horizontal"===O?"ew-resize":"ns-resize"),C=c.gutter||function(e,n){var i=t.createElement("div");return i.className="gutter gutter-"+n,i},A=c.elementStyle||function(e,t,n){var i={};return"string"==typeof t||t instanceof String?i[e]=t:i[e]=o?t+"%":a+"("+t+"% - "+n+"px)",i},B=c.gutterStyle||function(e,t){return n={},n[e]=t+"px",n;var n};"horizontal"===O?(y="width","clientWidth",b="clientX",G="left","paddingLeft"):"vertical"===O&&(y="height","clientHeight",b="clientY",G="top","paddingTop");var F=[];return E=u.map(function(e,t){var i,s={element:l(e),size:U[t],minSize:x[t]};if(t>0&&(i={a:t-1,b:t,dragging:!1,isFirst:1===t,isLast:t===u.length-1,direction:O,parent:w},i.aGutterSize=L,i.bGutterSize=L,i.isFirst&&(i.aGutterSize=L/2),i.isLast&&(i.bGutterSize=L/2),"row-reverse"===D||"column-reverse"===D)){var a=i.a;i.a=i.b,i.b=a}if(!o&&t>0){var c=C(t,O);h(c,L),c[n]("mousedown",S.bind(i)),c[n]("touchstart",S.bind(i)),w.insertBefore(c,s.element),i.gutter=c}0===t||t===u.length-1?z(s.element,s.size,L/2):z(s.element,s.size,L);var f=s.element[r]()[y];return f<s.minSize&&(s.minSize=f),t>0&&F.push(i),s}),o?{setSizes:v,destroy:p}:{setSizes:v,getSizes:function(){return E.map(function(e){return e.size})},collapse:function(e){if(e===F.length){var t=F[e-1];g.call(t),o||f.call(t,t.size-t.bGutterSize)}else{var n=F[e];g.call(n),o||f.call(n,n.aGutterSize)}},destroy:p}}});

///////////////////////////////////////////////

///////////////////////////////////////////////
// Copyright (c) 2013 Pieroxy <pieroxy@pieroxy.net>
// This work is free. You can redistribute it and/or modify it
// under the terms of the WTFPL, Version 2
// For more information see LICENSE.txt or http://www.wtfpl.net/
//
// For more information, the home page:
// http://pieroxy.net/blog/pages/lz-string/testing.html
//
// LZ-based compression algorithm, version 1.4.4
var LZString=function(){var o=String.fromCharCode,i={};var n={decompressFromBase64:function(o){return null==o?"":""==o?null:n._decompress(o.length,32,function(n){return function(o,n){if(!i[o]){i[o]={};for(var t=0;t<o.length;t++)i[o][o.charAt(t)]=t}return i[o][n]}("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=",o.charAt(n))})},_decompress:function(i,n,t){var r,e,a,s,p,u,l,f=[],c=4,d=4,h=3,v="",g=[],m={val:t(0),position:n,index:1};for(r=0;r<3;r+=1)f[r]=r;for(a=0,p=Math.pow(2,2),u=1;u!=p;)s=m.val&m.position,m.position>>=1,0==m.position&&(m.position=n,m.val=t(m.index++)),a|=(s>0?1:0)*u,u<<=1;switch(a){case 0:for(a=0,p=Math.pow(2,8),u=1;u!=p;)s=m.val&m.position,m.position>>=1,0==m.position&&(m.position=n,m.val=t(m.index++)),a|=(s>0?1:0)*u,u<<=1;l=o(a);break;case 1:for(a=0,p=Math.pow(2,16),u=1;u!=p;)s=m.val&m.position,m.position>>=1,0==m.position&&(m.position=n,m.val=t(m.index++)),a|=(s>0?1:0)*u,u<<=1;l=o(a);break;case 2:return""}for(f[3]=l,e=l,g.push(l);;){if(m.index>i)return"";for(a=0,p=Math.pow(2,h),u=1;u!=p;)s=m.val&m.position,m.position>>=1,0==m.position&&(m.position=n,m.val=t(m.index++)),a|=(s>0?1:0)*u,u<<=1;switch(l=a){case 0:for(a=0,p=Math.pow(2,8),u=1;u!=p;)s=m.val&m.position,m.position>>=1,0==m.position&&(m.position=n,m.val=t(m.index++)),a|=(s>0?1:0)*u,u<<=1;f[d++]=o(a),l=d-1,c--;break;case 1:for(a=0,p=Math.pow(2,16),u=1;u!=p;)s=m.val&m.position,m.position>>=1,0==m.position&&(m.position=n,m.val=t(m.index++)),a|=(s>0?1:0)*u,u<<=1;f[d++]=o(a),l=d-1,c--;break;case 2:return g.join("")}if(0==c&&(c=Math.pow(2,h),h++),f[l])v=f[l];else{if(l!==d)return null;v=e+e.charAt(0)}g.push(v),f[d++]=e+v.charAt(0),e=v,0==--c&&(c=Math.pow(2,h),h++)}}};return n}();"function"==typeof define&&define.amd?define(function(){return LZString}):"undefined"!=typeof module&&null!=module?module.exports=LZString:"undefined"!=typeof angular&&null!=angular&&angular.module("LZString",[]).factory("LZString",function(){return LZString});
///////////////////////////////////////////////

///////////////////////////////////////////////
/*!
 * PEP v0.4.3 | https://github.com/jquery/PEP
 * Copyright jQuery Foundation and other contributors | http://jquery.org/license
 */
!function(a,b){"object"==typeof exports&&"undefined"!=typeof module?module.exports=b():"function"==typeof define&&define.amd?define(b):a.PointerEventsPolyfill=b()}(this,function(){"use strict";function a(a,b){b=b||Object.create(null);var c=document.createEvent("Event");c.initEvent(a,b.bubbles||!1,b.cancelable||!1);
for(var d,e=2;e<m.length;e++)d=m[e],c[d]=b[d]||n[e];c.buttons=b.buttons||0;
var f=0;return f=b.pressure&&c.buttons?b.pressure:c.buttons?.5:0,c.x=c.clientX,c.y=c.clientY,c.pointerId=b.pointerId||0,c.width=b.width||0,c.height=b.height||0,c.pressure=f,c.tiltX=b.tiltX||0,c.tiltY=b.tiltY||0,c.twist=b.twist||0,c.tangentialPressure=b.tangentialPressure||0,c.pointerType=b.pointerType||"",c.hwTimestamp=b.hwTimestamp||0,c.isPrimary=b.isPrimary||!1,c}function b(){this.array=[],this.size=0}function c(a,b,c,d){this.addCallback=a.bind(d),this.removeCallback=b.bind(d),this.changedCallback=c.bind(d),A&&(this.observer=new A(this.mutationWatcher.bind(this)))}function d(a){return"body /shadow-deep/ "+e(a)}function e(a){return'[touch-action="'+a+'"]'}function f(a){return"{ -ms-touch-action: "+a+"; touch-action: "+a+"; }"}function g(){if(F){D.forEach(function(a){String(a)===a?(E+=e(a)+f(a)+"\n",G&&(E+=d(a)+f(a)+"\n")):(E+=a.selectors.map(e)+f(a.rule)+"\n",G&&(E+=a.selectors.map(d)+f(a.rule)+"\n"))});var a=document.createElement("style");a.textContent=E,document.head.appendChild(a)}}function h(){if(!window.PointerEvent){if(window.PointerEvent=a,window.navigator.msPointerEnabled){var b=window.navigator.msMaxTouchPoints;Object.defineProperty(window.navigator,"maxTouchPoints",{value:b,enumerable:!0}),u.registerSource("ms",_)}else Object.defineProperty(window.navigator,"maxTouchPoints",{value:0,enumerable:!0}),u.registerSource("mouse",N),void 0!==window.ontouchstart&&u.registerSource("touch",V);u.register(document)}}function i(a){if(!u.pointermap.has(a)){var b=new Error("InvalidPointerId");throw b.name="InvalidPointerId",b}}function j(a){for(var b=a.parentNode;b&&b!==a.ownerDocument;)b=b.parentNode;if(!b){var c=new Error("InvalidStateError");throw c.name="InvalidStateError",c}}function k(a){var b=u.pointermap.get(a);return 0!==b.buttons}function l(){window.Element&&!Element.prototype.setPointerCapture&&Object.defineProperties(Element.prototype,{setPointerCapture:{value:W},releasePointerCapture:{value:X},hasPointerCapture:{value:Y}})}
var m=["bubbles","cancelable","view","detail","screenX","screenY","clientX","clientY","ctrlKey","altKey","shiftKey","metaKey","button","relatedTarget","pageX","pageY"],n=[!1,!1,null,null,0,0,0,0,!1,!1,!1,!1,0,null,0,0],o=window.Map&&window.Map.prototype.forEach,p=o?Map:b;b.prototype={set:function(a,b){return void 0===b?this["delete"](a):(this.has(a)||this.size++,void(this.array[a]=b))},has:function(a){return void 0!==this.array[a]},"delete":function(a){this.has(a)&&(delete this.array[a],this.size--)},get:function(a){return this.array[a]},clear:function(){this.array.length=0,this.size=0},forEach:function(a,b){return this.array.forEach(function(c,d){a.call(b,c,d,this)},this)}};var q=["bubbles","cancelable","view","detail","screenX","screenY","clientX","clientY","ctrlKey","altKey","shiftKey","metaKey","button","relatedTarget","buttons","pointerId","width","height","pressure","tiltX","tiltY","pointerType","hwTimestamp","isPrimary","type","target","currentTarget","which","pageX","pageY","timeStamp"],r=[!1,!1,null,null,0,0,0,0,!1,!1,!1,!1,0,null,0,0,0,0,0,0,0,"",0,!1,"",null,null,0,0,0,0],s={pointerover:1,pointerout:1,pointerenter:1,pointerleave:1},t="undefined"!=typeof SVGElementInstance,u={pointermap:new p,eventMap:Object.create(null),captureInfo:Object.create(null),eventSources:Object.create(null),eventSourceList:[],registerSource:function(a,b){var c=b,d=c.events;d&&(d.forEach(function(a){c[a]&&(this.eventMap[a]=c[a].bind(c))},this),this.eventSources[a]=c,this.eventSourceList.push(c))},register:function(a){for(var b,c=this.eventSourceList.length,d=0;d<c&&(b=this.eventSourceList[d]);d++)
b.register.call(b,a)},unregister:function(a){for(var b,c=this.eventSourceList.length,d=0;d<c&&(b=this.eventSourceList[d]);d++)
b.unregister.call(b,a)},contains:function(a,b){try{return a.contains(b)}catch(c){return!1}},down:function(a){a.bubbles=!0,this.fireEvent("pointerdown",a)},move:function(a){a.bubbles=!0,this.fireEvent("pointermove",a)},up:function(a){a.bubbles=!0,this.fireEvent("pointerup",a)},enter:function(a){a.bubbles=!1,this.fireEvent("pointerenter",a)},leave:function(a){a.bubbles=!1,this.fireEvent("pointerleave",a)},over:function(a){a.bubbles=!0,this.fireEvent("pointerover",a)},out:function(a){a.bubbles=!0,this.fireEvent("pointerout",a)},cancel:function(a){a.bubbles=!0,this.fireEvent("pointercancel",a)},leaveOut:function(a){this.out(a),this.propagate(a,this.leave,!1)},enterOver:function(a){this.over(a),this.propagate(a,this.enter,!0)},eventHandler:function(a){if(!a._handledByPE){var b=a.type,c=this.eventMap&&this.eventMap[b];c&&c(a),a._handledByPE=!0}},listen:function(a,b){b.forEach(function(b){this.addEvent(a,b)},this)},unlisten:function(a,b){b.forEach(function(b){this.removeEvent(a,b)},this)},addEvent:function(a,b){a.addEventListener(b,this.boundHandler)},removeEvent:function(a,b){a.removeEventListener(b,this.boundHandler)},makeEvent:function(b,c){this.captureInfo[c.pointerId]&&(c.relatedTarget=null);var d=new a(b,c);return c.preventDefault&&(d.preventDefault=c.preventDefault),d._target=d._target||c.target,d},fireEvent:function(a,b){var c=this.makeEvent(a,b);return this.dispatchEvent(c)},cloneEvent:function(a){for(var b,c=Object.create(null),d=0;d<q.length;d++)b=q[d],c[b]=a[b]||r[d],!t||"target"!==b&&"relatedTarget"!==b||c[b]instanceof SVGElementInstance&&(c[b]=c[b].correspondingUseElement);return a.preventDefault&&(c.preventDefault=function(){a.preventDefault()}),c},getTarget:function(a){var b=this.captureInfo[a.pointerId];return b?a._target!==b&&a.type in s?void 0:b:a._target},propagate:function(a,b,c){for(var d=a.target,e=[];d!==document&&!d.contains(a.relatedTarget);) if(e.push(d),d=d.parentNode,!d)return;c&&e.reverse(),e.forEach(function(c){a.target=c,b.call(this,a)},this)},setCapture:function(b,c,d){this.captureInfo[b]&&this.releaseCapture(b,d),this.captureInfo[b]=c,this.implicitRelease=this.releaseCapture.bind(this,b,d),document.addEventListener("pointerup",this.implicitRelease),document.addEventListener("pointercancel",this.implicitRelease);var e=new a("gotpointercapture");e.pointerId=b,e._target=c,d||this.asyncDispatchEvent(e)},releaseCapture:function(b,c){var d=this.captureInfo[b];if(d){this.captureInfo[b]=void 0,document.removeEventListener("pointerup",this.implicitRelease),document.removeEventListener("pointercancel",this.implicitRelease);var e=new a("lostpointercapture");e.pointerId=b,e._target=d,c||this.asyncDispatchEvent(e)}},dispatchEvent:/*scope.external.dispatchEvent || */function(a){var b=this.getTarget(a);if(b)return b.dispatchEvent(a)},asyncDispatchEvent:function(a){requestAnimationFrame(this.dispatchEvent.bind(this,a))}};u.boundHandler=u.eventHandler.bind(u);var v={shadow:function(a){if(a)return a.shadowRoot||a.webkitShadowRoot},canTarget:function(a){return a&&Boolean(a.elementFromPoint)},targetingShadow:function(a){var b=this.shadow(a);if(this.canTarget(b))return b},olderShadow:function(a){var b=a.olderShadowRoot;if(!b){var c=a.querySelector("shadow");c&&(b=c.olderShadowRoot)}return b},allShadows:function(a){for(var b=[],c=this.shadow(a);c;)b.push(c),c=this.olderShadow(c);return b},searchRoot:function(a,b,c){if(a){var d,e,f=a.elementFromPoint(b,c);for(e=this.targetingShadow(f);e;){if(d=e.elementFromPoint(b,c)){var g=this.targetingShadow(d);return this.searchRoot(g,b,c)||d} e=this.olderShadow(e)} return f}},owner:function(a){
for(var b=a;b.parentNode;)b=b.parentNode;
return b.nodeType!==Node.DOCUMENT_NODE&&b.nodeType!==Node.DOCUMENT_FRAGMENT_NODE&&(b=document),b},findTarget:function(a){var b=a.clientX,c=a.clientY,d=this.owner(a.target);
return d.elementFromPoint(b,c)||(d=document),this.searchRoot(d,b,c)}},w=Array.prototype.forEach.call.bind(Array.prototype.forEach),x=Array.prototype.map.call.bind(Array.prototype.map),y=Array.prototype.slice.call.bind(Array.prototype.slice),z=Array.prototype.filter.call.bind(Array.prototype.filter),A=window.MutationObserver||window.WebKitMutationObserver,B="[touch-action]",C={subtree:!0,childList:!0,attributes:!0,attributeOldValue:!0,attributeFilter:["touch-action"]};c.prototype={watchSubtree:function(a){
//
this.observer&&v.canTarget(a)&&this.observer.observe(a,C)},enableOnSubtree:function(a){this.watchSubtree(a),a===document&&"complete"!==document.readyState?this.installOnLoad():this.installNewSubtree(a)},installNewSubtree:function(a){w(this.findElements(a),this.addElement,this)},findElements:function(a){return a.querySelectorAll?a.querySelectorAll(B):[]},removeElement:function(a){this.removeCallback(a)},addElement:function(a){this.addCallback(a)},elementChanged:function(a,b){this.changedCallback(a,b)},concatLists:function(a,b){return a.concat(y(b))},
installOnLoad:function(){document.addEventListener("readystatechange",function(){"complete"===document.readyState&&this.installNewSubtree(document)}.bind(this))},isElement:function(a){return a.nodeType===Node.ELEMENT_NODE},flattenMutationTree:function(a){
var b=x(a,this.findElements,this);
return b.push(z(a,this.isElement)),b.reduce(this.concatLists,[])},mutationWatcher:function(a){a.forEach(this.mutationHandler,this)},mutationHandler:function(a){if("childList"===a.type){var b=this.flattenMutationTree(a.addedNodes);b.forEach(this.addElement,this);var c=this.flattenMutationTree(a.removedNodes);c.forEach(this.removeElement,this)}else"attributes"===a.type&&this.elementChanged(a.target,a.oldValue)}};var D=["none","auto","pan-x","pan-y",{rule:"pan-x pan-y",selectors:["pan-x pan-y","pan-y pan-x"]}],E="",F=window.PointerEvent||window.MSPointerEvent,G=!window.ShadowDOMPolyfill&&document.head.createShadowRoot,H=u.pointermap,I=25,J=[1,4,2,8,16],K=!1;try{K=1===new MouseEvent("test",{buttons:1}).buttons}catch(L){}
var M,N={POINTER_ID:1,POINTER_TYPE:"mouse",events:["mousedown","mousemove","mouseup","mouseover","mouseout"],register:function(a){u.listen(a,this.events)},unregister:function(a){u.unlisten(a,this.events)},lastTouches:[],
isEventSimulatedFromTouch:function(a){for(var b,c=this.lastTouches,d=a.clientX,e=a.clientY,f=0,g=c.length;f<g&&(b=c[f]);f++){
var h=Math.abs(d-b.x),i=Math.abs(e-b.y);if(h<=I&&i<=I)return!0}},prepareEvent:function(a){var b=u.cloneEvent(a),c=b.preventDefault;return b.preventDefault=function(){a.preventDefault(),c()},b.pointerId=this.POINTER_ID,b.isPrimary=!0,b.pointerType=this.POINTER_TYPE,b},prepareButtonsForMove:function(a,b){var c=H.get(this.POINTER_ID);
0!==b.which&&c?a.buttons=c.buttons:a.buttons=0,b.buttons=a.buttons},mousedown:function(a){if(!this.isEventSimulatedFromTouch(a)){var b=H.get(this.POINTER_ID),c=this.prepareEvent(a);K||(c.buttons=J[c.button],b&&(c.buttons|=b.buttons),a.buttons=c.buttons),H.set(this.POINTER_ID,a),b&&0!==b.buttons?u.move(c):u.down(c)}},mousemove:function(a){if(!this.isEventSimulatedFromTouch(a)){var b=this.prepareEvent(a);K||this.prepareButtonsForMove(b,a),b.button=-1,H.set(this.POINTER_ID,a),u.move(b)}},mouseup:function(a){if(!this.isEventSimulatedFromTouch(a)){var b=H.get(this.POINTER_ID),c=this.prepareEvent(a);if(!K){var d=J[c.button];
c.buttons=b?b.buttons&~d:0,a.buttons=c.buttons}H.set(this.POINTER_ID,a),
c.buttons&=~J[c.button],0===c.buttons?u.up(c):u.move(c)}},mouseover:function(a){if(!this.isEventSimulatedFromTouch(a)){var b=this.prepareEvent(a);K||this.prepareButtonsForMove(b,a),b.button=-1,H.set(this.POINTER_ID,a),u.enterOver(b)}},mouseout:function(a){if(!this.isEventSimulatedFromTouch(a)){var b=this.prepareEvent(a);K||this.prepareButtonsForMove(b,a),b.button=-1,u.leaveOut(b)}},cancel:function(a){var b=this.prepareEvent(a);u.cancel(b),this.deactivateMouse()},deactivateMouse:function(){H["delete"](this.POINTER_ID)}},O=u.captureInfo,P=v.findTarget.bind(v),Q=v.allShadows.bind(v),R=u.pointermap,S=2500,T=200,U="touch-action",V={events:["touchstart","touchmove","touchend","touchcancel"],register:function(a){M.enableOnSubtree(a)},unregister:function(){},elementAdded:function(a){var b=a.getAttribute(U),c=this.touchActionToScrollType(b);c&&(a._scrollType=c,u.listen(a,this.events),
Q(a).forEach(function(a){a._scrollType=c,u.listen(a,this.events)},this))},elementRemoved:function(a){a._scrollType=void 0,u.unlisten(a,this.events),
Q(a).forEach(function(a){a._scrollType=void 0,u.unlisten(a,this.events)},this)},elementChanged:function(a,b){var c=a.getAttribute(U),d=this.touchActionToScrollType(c),e=this.touchActionToScrollType(b);
d&&e?(a._scrollType=d,Q(a).forEach(function(a){a._scrollType=d},this)):e?this.elementRemoved(a):d&&this.elementAdded(a)},scrollTypes:{EMITTER:"none",XSCROLLER:"pan-x",YSCROLLER:"pan-y",SCROLLER:/^(?:pan-x pan-y)|(?:pan-y pan-x)|auto$/},touchActionToScrollType:function(a){var b=a,c=this.scrollTypes;return"none"===b?"none":b===c.XSCROLLER?"X":b===c.YSCROLLER?"Y":c.SCROLLER.exec(b)?"XY":void 0},POINTER_TYPE:"touch",firstTouch:null,isPrimaryTouch:function(a){return this.firstTouch===a.identifier},setPrimaryTouch:function(a){
(0===R.size||1===R.size&&R.has(1))&&(this.firstTouch=a.identifier,this.firstXY={X:a.clientX,Y:a.clientY},this.scrolling=!1,this.cancelResetClickCount())},removePrimaryPointer:function(a){a.isPrimary&&(this.firstTouch=null,this.firstXY=null,this.resetClickCount())},clickCount:0,resetId:null,resetClickCount:function(){var a=function(){this.clickCount=0,this.resetId=null}.bind(this);this.resetId=setTimeout(a,T)},cancelResetClickCount:function(){this.resetId&&clearTimeout(this.resetId)},typeToButtons:function(a){var b=0;return"touchstart"!==a&&"touchmove"!==a||(b=1),b},touchToPointer:function(a){var b=this.currentTouchEvent,c=u.cloneEvent(a),d=c.pointerId=a.identifier+2;c.target=O[d]||P(c),c.bubbles=!0,c.cancelable=!0,c.detail=this.clickCount,c.button=0,c.buttons=this.typeToButtons(b.type),c.width=2*(a.radiusX||a.webkitRadiusX||0),c.height=2*(a.radiusY||a.webkitRadiusY||0),c.pressure=a.force||a.webkitForce||.5,c.isPrimary=this.isPrimaryTouch(a),c.pointerType=this.POINTER_TYPE,
c.altKey=b.altKey,c.ctrlKey=b.ctrlKey,c.metaKey=b.metaKey,c.shiftKey=b.shiftKey;
var e=this;return c.preventDefault=function(){e.scrolling=!1,e.firstXY=null,b.preventDefault()},c},processTouches:function(a,b){var c=a.changedTouches;this.currentTouchEvent=a;for(var d,e=0;e<c.length;e++)d=c[e],b.call(this,this.touchToPointer(d))},
shouldScroll:function(a){if(this.firstXY){var b,c=a.currentTarget._scrollType;if("none"===c)
b=!1;else if("XY"===c)
b=!0;else{var d=a.changedTouches[0],e=c,f="Y"===c?"X":"Y",g=Math.abs(d["client"+e]-this.firstXY[e]),h=Math.abs(d["client"+f]-this.firstXY[f]);
b=g>=h}return this.firstXY=null,b}},findTouch:function(a,b){for(var c,d=0,e=a.length;d<e&&(c=a[d]);d++)if(c.identifier===b)return!0},
vacuumTouches:function(a){var b=a.touches;
if(R.size>=b.length){var c=[];R.forEach(function(a,d){
if(1!==d&&!this.findTouch(b,d-2)){var e=a.out;c.push(e)}},this),c.forEach(this.cancelOut,this)}},touchstart:function(a){this.vacuumTouches(a),this.setPrimaryTouch(a.changedTouches[0]),this.dedupSynthMouse(a),this.scrolling||(this.clickCount++,this.processTouches(a,this.overDown))},overDown:function(a){R.set(a.pointerId,{target:a.target,out:a,outTarget:a.target}),u.enterOver(a),u.down(a)},touchmove:function(a){this.scrolling||(this.shouldScroll(a)?(this.scrolling=!0,this.touchcancel(a)):(a.preventDefault(),this.processTouches(a,this.moveOverOut)))},moveOverOut:function(a){var b=a,c=R.get(b.pointerId);
if(c){var d=c.out,e=c.outTarget;u.move(b),d&&e!==b.target&&(d.relatedTarget=b.target,b.relatedTarget=e,
d.target=e,b.target?(u.leaveOut(d),u.enterOver(b)):(
b.target=e,b.relatedTarget=null,this.cancelOut(b))),c.out=b,c.outTarget=b.target}},touchend:function(a){this.dedupSynthMouse(a),this.processTouches(a,this.upOut)},upOut:function(a){this.scrolling||(u.up(a),u.leaveOut(a)),this.cleanUpPointer(a)},touchcancel:function(a){this.processTouches(a,this.cancelOut)},cancelOut:function(a){u.cancel(a),u.leaveOut(a),this.cleanUpPointer(a)},cleanUpPointer:function(a){R["delete"](a.pointerId),this.removePrimaryPointer(a)},
dedupSynthMouse:function(a){var b=N.lastTouches,c=a.changedTouches[0];
if(this.isPrimaryTouch(c)){
var d={x:c.clientX,y:c.clientY};b.push(d);var e=function(a,b){var c=a.indexOf(b);c>-1&&a.splice(c,1)}.bind(null,b,d);setTimeout(e,S)}}};M=new c(V.elementAdded,V.elementRemoved,V.elementChanged,V);var W,X,Y,Z=u.pointermap,$=window.MSPointerEvent&&"number"==typeof window.MSPointerEvent.MSPOINTER_TYPE_MOUSE,_={events:["MSPointerDown","MSPointerMove","MSPointerUp","MSPointerOut","MSPointerOver","MSPointerCancel","MSGotPointerCapture","MSLostPointerCapture"],register:function(a){u.listen(a,this.events)},unregister:function(a){u.unlisten(a,this.events)},POINTER_TYPES:["","unavailable","touch","pen","mouse"],prepareEvent:function(a){var b=a;return $&&(b=u.cloneEvent(a),b.pointerType=this.POINTER_TYPES[a.pointerType]),b},cleanup:function(a){Z["delete"](a)},MSPointerDown:function(a){Z.set(a.pointerId,a);var b=this.prepareEvent(a);u.down(b)},MSPointerMove:function(a){var b=this.prepareEvent(a);u.move(b)},MSPointerUp:function(a){var b=this.prepareEvent(a);u.up(b),this.cleanup(a.pointerId)},MSPointerOut:function(a){var b=this.prepareEvent(a);u.leaveOut(b)},MSPointerOver:function(a){var b=this.prepareEvent(a);u.enterOver(b)},MSPointerCancel:function(a){var b=this.prepareEvent(a);u.cancel(b),this.cleanup(a.pointerId)},MSLostPointerCapture:function(a){var b=u.makeEvent("lostpointercapture",a);u.dispatchEvent(b)},MSGotPointerCapture:function(a){var b=u.makeEvent("gotpointercapture",a);u.dispatchEvent(b)}},aa=window.navigator;aa.msPointerEnabled?(W=function(a){i(a),j(this),k(a)&&(u.setCapture(a,this,!0),this.msSetPointerCapture(a))},X=function(a){i(a),u.releaseCapture(a,!0),this.msReleasePointerCapture(a)}):(W=function(a){i(a),j(this),k(a)&&u.setCapture(a,this)},X=function(a){i(a),u.releaseCapture(a)}),Y=function(a){return!!u.captureInfo[a]},g(),h(),l();var ba={dispatcher:u,Installer:c,PointerEvent:a,PointerMap:p,targetFinding:v};return ba});

///////////////////////////////////////////////

///////////////////////////////////////////////
var config = {"dark_mode": true, "show_pads": true, "show_fabrication": false, "show_silkscreen": true, "highlight_pin1": "none", "redraw_on_drag": true, "board_rotation": 0, "checkboxes": "Sourced,Placed", "bom_view": "left-right", "layer_view": "FB", "offset_back_rotation": false, "kicad_text_formatting": true, "fields": ["Value", "Footprint"]}
///////////////////////////////////////////////

///////////////////////////////////////////////
var pcbdata = JSON.parse(LZString.decompressFromBase64("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"))
///////////////////////////////////////////////

///////////////////////////////////////////////
/* Utility functions */

var storagePrefix = 'KiCad_HTML_BOM__' + pcbdata.metadata.title + '__' +
  pcbdata.metadata.revision + '__#';
var storage;

function initStorage(key) {
  try {
    window.localStorage.getItem("blank");
    storage = window.localStorage;
  } catch (e) {
    // localStorage not available
  }
  if (!storage) {
    try {
      window.sessionStorage.getItem("blank");
      storage = window.sessionStorage;
    } catch (e) {
      // sessionStorage also not available
    }
  }
}

function readStorage(key) {
  if (storage) {
    return storage.getItem(storagePrefix + key);
  } else {
    return null;
  }
}

function writeStorage(key, value) {
  if (storage) {
    storage.setItem(storagePrefix + key, value);
  }
}

function fancyDblClickHandler(el, onsingle, ondouble) {
  return function () {
    if (el.getAttribute("data-dblclick") == null) {
      el.setAttribute("data-dblclick", 1);
      setTimeout(function () {
        if (el.getAttribute("data-dblclick") == 1) {
          onsingle();
        }
        el.removeAttribute("data-dblclick");
      }, 200);
    } else {
      el.removeAttribute("data-dblclick");
      ondouble();
    }
  }
}

function smoothScrollToRow(rowid) {
  document.getElementById(rowid).scrollIntoView({
    behavior: "smooth",
    block: "center",
    inline: "nearest"
  });
}

function focusInputField(input) {
  input.scrollIntoView(false);
  input.focus();
  input.select();
}

function saveBomTable(output) {
  var text = '';
  for (var node of bomhead.childNodes[0].childNodes) {
    if (node.firstChild) {
      text += (output == 'csv' ? `"${node.firstChild.nodeValue}"` : node.firstChild.nodeValue);
    }
    if (node != bomhead.childNodes[0].lastChild) {
      text += (output == 'csv' ? ',' : '\t');
    }
  }
  text += '\n';
  for (var row of bombody.childNodes) {
    for (var cell of row.childNodes) {
      let val = '';
      for (var node of cell.childNodes) {
        if (node.nodeName == "INPUT") {
          if (node.checked) {
            val += '✓';
          }
        } else if ((node.nodeName == "MARK") || (node.nodeName == "A")) {
          val += node.firstChild.nodeValue;
        } else {
          val += node.nodeValue;
        }
      }
      if (output == 'csv') {
        val = val.replace(/\"/g, '\"\"'); // pair of double-quote characters
        if (isNumeric(val)) {
          val = +val;                     // use number
        } else {
          val = `"${val}"`;               // enclosed within double-quote
        }
      }
      text += val;
      if (cell != row.lastChild) {
        text += (output == 'csv' ? ',' : '\t');
      }
    }
    text += '\n';
  }

  if (output != 'clipboard') {
    // To file: csv or txt
    var blob = new Blob([text], {
      type: `text/${output}`
    });
    saveFile(`${pcbdata.metadata.title}.${output}`, blob);
  } else {
    // To clipboard
    var textArea = document.createElement("textarea");
    textArea.classList.add('clipboard-temp');
    textArea.value = text;

    document.body.appendChild(textArea);
    textArea.focus();
    textArea.select();

    try {
      if (document.execCommand('copy')) {
        console.log('Bom copied to clipboard.');
      }
    } catch (err) {
      console.log('Can not copy to clipboard.');
    }

    document.body.removeChild(textArea);
  }
}

function isNumeric(str) {
  /* https://stackoverflow.com/a/175787 */
  return (typeof str != "string" ? false : !isNaN(str) && !isNaN(parseFloat(str)));
}

function removeGutterNode(node) {
  for (var i = 0; i < node.childNodes.length; i++) {
    if (node.childNodes[i].classList &&
      node.childNodes[i].classList.contains("gutter")) {
      node.removeChild(node.childNodes[i]);
      break;
    }
  }
}

function cleanGutters() {
  removeGutterNode(document.getElementById("bot"));
  removeGutterNode(document.getElementById("canvasdiv"));
}

var units = {
  prefixes: {
    giga: ["G", "g", "giga", "Giga", "GIGA"],
    mega: ["M", "mega", "Mega", "MEGA"],
    kilo: ["K", "k", "kilo", "Kilo", "KILO"],
    milli: ["m", "milli", "Milli", "MILLI"],
    micro: ["U", "u", "micro", "Micro", "MICRO", "μ", "µ"], // different utf8 μ
    nano: ["N", "n", "nano", "Nano", "NANO"],
    pico: ["P", "p", "pico", "Pico", "PICO"],
  },
  unitsShort: ["R", "r", "Ω", "F", "f", "H", "h"],
  unitsLong: [
    "OHM", "Ohm", "ohm", "ohms",
    "FARAD", "Farad", "farad",
    "HENRY", "Henry", "henry"
  ],
  getMultiplier: function (s) {
    if (this.prefixes.giga.includes(s)) return 1e9;
    if (this.prefixes.mega.includes(s)) return 1e6;
    if (this.prefixes.kilo.includes(s)) return 1e3;
    if (this.prefixes.milli.includes(s)) return 1e-3;
    if (this.prefixes.micro.includes(s)) return 1e-6;
    if (this.prefixes.nano.includes(s)) return 1e-9;
    if (this.prefixes.pico.includes(s)) return 1e-12;
    return 1;
  },
  valueRegex: null,
}

function initUtils() {
  var allPrefixes = units.prefixes.giga
    .concat(units.prefixes.mega)
    .concat(units.prefixes.kilo)
    .concat(units.prefixes.milli)
    .concat(units.prefixes.micro)
    .concat(units.prefixes.nano)
    .concat(units.prefixes.pico);
  var allUnits = units.unitsShort.concat(units.unitsLong);
  units.valueRegex = new RegExp("^([0-9\.]+)" +
    "\\s*(" + allPrefixes.join("|") + ")?" +
    "(" + allUnits.join("|") + ")?" +
    "(\\b.*)?$", "");
  units.valueAltRegex = new RegExp("^([0-9]*)" +
    "(" + units.unitsShort.join("|") + ")?" +
    "([GgMmKkUuNnPp])?" +
    "([0-9]*)" +
    "(\\b.*)?$", "");
  if (config.fields.includes("Value")) {
    var index = config.fields.indexOf("Value");
    pcbdata.bom["parsedValues"] = {};
    for (var id in pcbdata.bom.fields) {
      pcbdata.bom.parsedValues[id] = parseValue(pcbdata.bom.fields[id][index])
    }
  }
}

function parseValue(val, ref) {
  var inferUnit = (unit, ref) => {
    if (unit) {
      unit = unit.toLowerCase();
      if (unit == 'Ω' || unit == "ohm" || unit == "ohms") {
        unit = 'r';
      }
      unit = unit[0];
    } else {
      ref = /^([a-z]+)\d+$/i.exec(ref);
      if (ref) {
        ref = ref[1].toLowerCase();
        if (ref == "c") unit = 'f';
        else if (ref == "l") unit = 'h';
        else if (ref == "r" || ref == "rv") unit = 'r';
        else unit = null;
      }
    }
    return unit;
  };
  val = val.replace(/,/g, "");
  var match = units.valueRegex.exec(val);
  var unit;
  if (match) {
    val = parseFloat(match[1]);
    if (match[2]) {
      val = val * units.getMultiplier(match[2]);
    }
    unit = inferUnit(match[3], ref);
    if (!unit) return null;
    else return {
      val: val,
      unit: unit,
      extra: match[4],
    }
  }
  match = units.valueAltRegex.exec(val);
  if (match && (match[1] || match[4])) {
    val = parseFloat(match[1] + "." + match[4]);
    if (match[3]) {
      val = val * units.getMultiplier(match[3]);
    }
    unit = inferUnit(match[2], ref);
    if (!unit) return null;
    else return {
      val: val,
      unit: unit,
      extra: match[5],
    }
  }
  return null;
}

function valueCompare(a, b, stra, strb) {
  if (a === null && b === null) {
    // Failed to parse both values, compare them as strings.
    if (stra != strb) return stra > strb ? 1 : -1;
    else return 0;
  } else if (a === null) {
    return 1;
  } else if (b === null) {
    return -1;
  } else {
    if (a.unit != b.unit) return a.unit > b.unit ? 1 : -1;
    else if (a.val != b.val) return a.val > b.val ? 1 : -1;
    else if (a.extra != b.extra) return a.extra > b.extra ? 1 : -1;
    else return 0;
  }
}

function validateSaveImgDimension(element) {
  var valid = false;
  var intValue = 0;
  if (/^[1-9]\d*$/.test(element.value)) {
    intValue = parseInt(element.value);
    if (intValue <= 16000) {
      valid = true;
    }
  }
  if (valid) {
    element.classList.remove("invalid");
  } else {
    element.classList.add("invalid");
  }
  return intValue;
}

function saveImage(layer) {
  var width = validateSaveImgDimension(document.getElementById("render-save-width"));
  var height = validateSaveImgDimension(document.getElementById("render-save-height"));
  var bgcolor = null;
  if (!document.getElementById("render-save-transparent").checked) {
    var style = getComputedStyle(topmostdiv);
    bgcolor = style.getPropertyValue("background-color");
  }
  if (!width || !height) return;

  // Prepare image
  var canvas = document.createElement("canvas");
  var layerdict = {
    transform: {
      x: 0,
      y: 0,
      s: 1,
      panx: 0,
      pany: 0,
      zoom: 1,
    },
    bg: canvas,
    fab: canvas,
    silk: canvas,
    highlight: canvas,
    layer: layer,
  }
  // Do the rendering
  recalcLayerScale(layerdict, width, height);
  prepareLayer(layerdict);
  clearCanvas(canvas, bgcolor);
  drawBackground(layerdict, false);
  drawHighlightsOnLayer(layerdict, false);

  // Save image
  var imgdata = canvas.toDataURL("image/png");

  var filename = pcbdata.metadata.title;
  if (pcbdata.metadata.revision) {
    filename += `.${pcbdata.metadata.revision}`;
  }
  filename += `.${layer}.png`;
  saveFile(filename, dataURLtoBlob(imgdata));
}

function saveSettings() {
  var data = {
    type: "InteractiveHtmlBom settings",
    version: 1,
    pcbmetadata: pcbdata.metadata,
    settings: settings,
  }
  var blob = new Blob([JSON.stringify(data, null, 4)], {
    type: "application/json"
  });
  saveFile(`${pcbdata.metadata.title}.settings.json`, blob);
}

function loadSettings() {
  var input = document.createElement("input");
  input.type = "file";
  input.accept = ".settings.json";
  input.onchange = function (e) {
    var file = e.target.files[0];
    var reader = new FileReader();
    reader.onload = readerEvent => {
      var content = readerEvent.target.result;
      var newSettings;
      try {
        newSettings = JSON.parse(content);
      } catch (e) {
        alert("Selected file is not InteractiveHtmlBom settings file.");
        return;
      }
      if (newSettings.type != "InteractiveHtmlBom settings") {
        alert("Selected file is not InteractiveHtmlBom settings file.");
        return;
      }
      var metadataMatches = newSettings.hasOwnProperty("pcbmetadata");
      if (metadataMatches) {
        for (var k in pcbdata.metadata) {
          if (!newSettings.pcbmetadata.hasOwnProperty(k) || newSettings.pcbmetadata[k] != pcbdata.metadata[k]) {
            metadataMatches = false;
          }
        }
      }
      if (!metadataMatches) {
        var currentMetadata = JSON.stringify(pcbdata.metadata, null, 4);
        var fileMetadata = JSON.stringify(newSettings.pcbmetadata, null, 4);
        if (!confirm(
          `Settins file metadata does not match current metadata.\n\n` +
          `Page metadata:\n${currentMetadata}\n\n` +
          `Settings file metadata:\n${fileMetadata}\n\n` +
          `Press OK if you would like to import settings anyway.`)) {
          return;
        }
      }
      overwriteSettings(newSettings.settings);
    }
    reader.readAsText(file, 'UTF-8');
  }
  input.click();
}

function resetSettings() {
  if (!confirm(
    `This will reset all checkbox states and other settings.\n\n` +
    `Press OK if you want to continue.`)) {
    return;
  }
  if (storage) {
    var keys = [];
    for (var i = 0; i < storage.length; i++) {
      var key = storage.key(i);
      if (key.startsWith(storagePrefix)) keys.push(key);
    }
    for (var key of keys) storage.removeItem(key);
  }
  location.reload();
}

function overwriteSettings(newSettings) {
  initDone = false;
  Object.assign(settings, newSettings);
  writeStorage("bomlayout", settings.bomlayout);
  writeStorage("bommode", settings.bommode);
  writeStorage("canvaslayout", settings.canvaslayout);
  writeStorage("bomCheckboxes", settings.checkboxes.join(","));
  document.getElementById("bomCheckboxes").value = settings.checkboxes.join(",");
  for (var checkbox of settings.checkboxes) {
    writeStorage("checkbox_" + checkbox, settings.checkboxStoredRefs[checkbox]);
  }
  writeStorage("markWhenChecked", settings.markWhenChecked);
  padsVisible(settings.renderPads);
  document.getElementById("padsCheckbox").checked = settings.renderPads;
  fabricationVisible(settings.renderFabrication);
  document.getElementById("fabricationCheckbox").checked = settings.renderFabrication;
  silkscreenVisible(settings.renderSilkscreen);
  document.getElementById("silkscreenCheckbox").checked = settings.renderSilkscreen;
  referencesVisible(settings.renderReferences);
  document.getElementById("referencesCheckbox").checked = settings.renderReferences;
  valuesVisible(settings.renderValues);
  document.getElementById("valuesCheckbox").checked = settings.renderValues;
  tracksVisible(settings.renderTracks);
  document.getElementById("tracksCheckbox").checked = settings.renderTracks;
  zonesVisible(settings.renderZones);
  document.getElementById("zonesCheckbox").checked = settings.renderZones;
  dnpOutline(settings.renderDnpOutline);
  document.getElementById("dnpOutlineCheckbox").checked = settings.renderDnpOutline;
  setRedrawOnDrag(settings.redrawOnDrag);
  document.getElementById("dragCheckbox").checked = settings.redrawOnDrag;
  setDarkMode(settings.darkMode);
  document.getElementById("darkmodeCheckbox").checked = settings.darkMode;
  setHighlightPin1(settings.highlightpin1);
  document.forms.highlightpin1.highlightpin1.value = settings.highlightpin1;
  writeStorage("boardRotation", settings.boardRotation);
  document.getElementById("boardRotation").value = settings.boardRotation / 5;
  document.getElementById("rotationDegree").textContent = settings.boardRotation;
  setOffsetBackRotation(settings.offsetBackRotation);
  document.getElementById("offsetBackRotationCheckbox").checked = settings.offsetBackRotation;
  initDone = true;
  prepCheckboxes();
  changeBomLayout(settings.bomlayout);
}

function saveFile(filename, blob) {
  var link = document.createElement("a");
  var objurl = URL.createObjectURL(blob);
  link.download = filename;
  link.href = objurl;
  link.click();
}

function dataURLtoBlob(dataurl) {
  var arr = dataurl.split(','),
    mime = arr[0].match(/:(.*?);/)[1],
    bstr = atob(arr[1]),
    n = bstr.length,
    u8arr = new Uint8Array(n);
  while (n--) {
    u8arr[n] = bstr.charCodeAt(n);
  }
  return new Blob([u8arr], {
    type: mime
  });
}

var settings = {
  canvaslayout: "FB",
  bomlayout: "left-right",
  bommode: "grouped",
  checkboxes: [],
  checkboxStoredRefs: {},
  darkMode: false,
  highlightpin1: "none",
  redrawOnDrag: true,
  boardRotation: 0,
  offsetBackRotation: false,
  renderPads: true,
  renderReferences: true,
  renderValues: true,
  renderSilkscreen: true,
  renderFabrication: true,
  renderDnpOutline: false,
  renderTracks: true,
  renderZones: true,
  columnOrder: [],
  hiddenColumns: [],
  netColors: {},
}

function initDefaults() {
  settings.bomlayout = readStorage("bomlayout");
  if (settings.bomlayout === null) {
    settings.bomlayout = config.bom_view;
  }
  if (!['bom-only', 'left-right', 'top-bottom'].includes(settings.bomlayout)) {
    settings.bomlayout = config.bom_view;
  }
  settings.bommode = readStorage("bommode");
  if (settings.bommode === null) {
    settings.bommode = "grouped";
  }
  if (settings.bommode == "netlist" && !pcbdata.nets) {
    settings.bommode = "grouped";
  }
  if (!["grouped", "ungrouped", "netlist"].includes(settings.bommode)) {
    settings.bommode = "grouped";
  }
  settings.canvaslayout = readStorage("canvaslayout");
  if (settings.canvaslayout === null) {
    settings.canvaslayout = config.layer_view;
  }
  var bomCheckboxes = readStorage("bomCheckboxes");
  if (bomCheckboxes === null) {
    bomCheckboxes = config.checkboxes;
  }
  settings.checkboxes = bomCheckboxes.split(",").filter((e) => e);
  document.getElementById("bomCheckboxes").value = bomCheckboxes;

  var highlightpin1 = readStorage("highlightpin1") || config.highlight_pin1;
  if (highlightpin1 === "false") highlightpin1 = "none";
  if (highlightpin1 === "true") highlightpin1 = "all";
  setHighlightPin1(highlightpin1);
  document.forms.highlightpin1.highlightpin1.value = highlightpin1;

  settings.markWhenChecked = readStorage("markWhenChecked") || "";
  populateMarkWhenCheckedOptions();

  function initBooleanSetting(storageString, def, elementId, func) {
    var b = readStorage(storageString);
    if (b === null) {
      b = def;
    } else {
      b = (b == "true");
    }
    document.getElementById(elementId).checked = b;
    func(b);
  }

  initBooleanSetting("padsVisible", config.show_pads, "padsCheckbox", padsVisible);
  initBooleanSetting("fabricationVisible", config.show_fabrication, "fabricationCheckbox", fabricationVisible);
  initBooleanSetting("silkscreenVisible", config.show_silkscreen, "silkscreenCheckbox", silkscreenVisible);
  initBooleanSetting("referencesVisible", true, "referencesCheckbox", referencesVisible);
  initBooleanSetting("valuesVisible", true, "valuesCheckbox", valuesVisible);
  if ("tracks" in pcbdata) {
    initBooleanSetting("tracksVisible", true, "tracksCheckbox", tracksVisible);
    initBooleanSetting("zonesVisible", true, "zonesCheckbox", zonesVisible);
  } else {
    document.getElementById("tracksAndZonesCheckboxes").style.display = "none";
    tracksVisible(false);
    zonesVisible(false);
  }
  initBooleanSetting("dnpOutline", false, "dnpOutlineCheckbox", dnpOutline);
  initBooleanSetting("redrawOnDrag", config.redraw_on_drag, "dragCheckbox", setRedrawOnDrag);
  initBooleanSetting("darkmode", config.dark_mode, "darkmodeCheckbox", setDarkMode);

  var fields = ["checkboxes", "References"].concat(config.fields).concat(["Quantity"]);
  var hcols = JSON.parse(readStorage("hiddenColumns"));
  if (hcols === null) {
    hcols = [];
  }
  settings.hiddenColumns = hcols.filter(e => fields.includes(e));

  var cord = JSON.parse(readStorage("columnOrder"));
  if (cord === null) {
    cord = fields;
  } else {
    cord = cord.filter(e => fields.includes(e));
    if (cord.length != fields.length)
      cord = fields;
  }
  settings.columnOrder = cord;

  settings.boardRotation = readStorage("boardRotation");
  if (settings.boardRotation === null) {
    settings.boardRotation = config.board_rotation * 5;
  } else {
    settings.boardRotation = parseInt(settings.boardRotation);
  }
  document.getElementById("boardRotation").value = settings.boardRotation / 5;
  document.getElementById("rotationDegree").textContent = settings.boardRotation;
  initBooleanSetting("offsetBackRotation", config.offset_back_rotation, "offsetBackRotationCheckbox", setOffsetBackRotation);

  settings.netColors = JSON.parse(readStorage("netColors")) || {};
}

// Helper classes for user js callbacks.

const IBOM_EVENT_TYPES = {
  ALL: "all",
  HIGHLIGHT_EVENT: "highlightEvent",
  CHECKBOX_CHANGE_EVENT: "checkboxChangeEvent",
  BOM_BODY_CHANGE_EVENT: "bomBodyChangeEvent",
}

const EventHandler = {
  callbacks: {},
  init: function () {
    for (eventType of Object.values(IBOM_EVENT_TYPES))
      this.callbacks[eventType] = [];
  },
  registerCallback: function (eventType, callback) {
    this.callbacks[eventType].push(callback);
  },
  emitEvent: function (eventType, eventArgs) {
    event = {
      eventType: eventType,
      args: eventArgs,
    }
    var callback;
    for (callback of this.callbacks[eventType])
      callback(event);
    for (callback of this.callbacks[IBOM_EVENT_TYPES.ALL])
      callback(event);
  }
}
EventHandler.init();

///////////////////////////////////////////////

///////////////////////////////////////////////
/* PCB rendering code */

var emptyContext2d = document.createElement("canvas").getContext("2d");

function deg2rad(deg) {
  return deg * Math.PI / 180;
}

function calcFontPoint(linepoint, text, offsetx, offsety, tilt) {
  var point = [
    linepoint[0] * text.width + offsetx,
    linepoint[1] * text.height + offsety
  ];
  // This approximates pcbnew behavior with how text tilts depending on horizontal justification
  point[0] -= (linepoint[1] + 0.5 * (1 + text.justify[0])) * text.height * tilt;
  return point;
}

function drawText(ctx, text, color) {
  if ("ref" in text && !settings.renderReferences) return;
  if ("val" in text && !settings.renderValues) return;
  ctx.save();
  ctx.fillStyle = color;
  ctx.strokeStyle = color;
  ctx.lineCap = "round";
  ctx.lineJoin = "round";
  ctx.lineWidth = text.thickness;
  if ("svgpath" in text) {
    ctx.stroke(new Path2D(text.svgpath));
    ctx.restore();
    return;
  }
  if ("polygons" in text) {
    ctx.fill(getPolygonsPath(text));
    ctx.restore();
    return;
  }
  ctx.translate(...text.pos);
  ctx.translate(text.thickness * 0.5, 0);
  var angle = -text.angle;
  if (text.attr.includes("mirrored")) {
    ctx.scale(-1, 1);
    angle = -angle;
  }
  var tilt = 0;
  if (text.attr.includes("italic")) {
    tilt = 0.125;
  }
  var interline = text.height * 1.5 + text.thickness;
  var txt = text.text.split("\n");
  // KiCad ignores last empty line.
  if (txt[txt.length - 1] == '') txt.pop();
  ctx.rotate(deg2rad(angle));
  var offsety = (1 - text.justify[1]) / 2 * text.height; // One line offset
  offsety -= (txt.length - 1) * (text.justify[1] + 1) / 2 * interline; // Multiline offset
  for (var i in txt) {
    var lineWidth = text.thickness + interline / 2 * tilt;
    for (var j = 0; j < txt[i].length; j++) {
      if (txt[i][j] == '\t') {
        var fourSpaces = 4 * pcbdata.font_data[' '].w * text.width;
        lineWidth += fourSpaces - lineWidth % fourSpaces;
      } else {
        if (txt[i][j] == '~') {
          j++;
          if (j == txt[i].length)
            break;
        }
        lineWidth += pcbdata.font_data[txt[i][j]].w * text.width;
      }
    }
    var offsetx = -lineWidth * (text.justify[0] + 1) / 2;
    var inOverbar = false;
    for (var j = 0; j < txt[i].length; j++) {
      if (config.kicad_text_formatting) {
        if (txt[i][j] == '\t') {
          var fourSpaces = 4 * pcbdata.font_data[' '].w * text.width;
          offsetx += fourSpaces - offsetx % fourSpaces;
          continue;
        } else if (txt[i][j] == '~') {
          j++;
          if (j == txt[i].length)
            break;
          if (txt[i][j] != '~') {
            inOverbar = !inOverbar;
          }
        }
      }
      var glyph = pcbdata.font_data[txt[i][j]];
      if (inOverbar) {
        var overbarStart = [offsetx, -text.height * 1.4 + offsety];
        var overbarEnd = [offsetx + text.width * glyph.w, overbarStart[1]];

        if (!lastHadOverbar) {
          overbarStart[0] += text.height * 1.4 * tilt;
          lastHadOverbar = true;
        }
        ctx.beginPath();
        ctx.moveTo(...overbarStart);
        ctx.lineTo(...overbarEnd);
        ctx.stroke();
      } else {
        lastHadOverbar = false;
      }
      for (var line of glyph.l) {
        ctx.beginPath();
        ctx.moveTo(...calcFontPoint(line[0], text, offsetx, offsety, tilt));
        for (var k = 1; k < line.length; k++) {
          ctx.lineTo(...calcFontPoint(line[k], text, offsetx, offsety, tilt));
        }
        ctx.stroke();
      }
      offsetx += glyph.w * text.width;
    }
    offsety += interline;
  }
  ctx.restore();
}

function drawedge(ctx, scalefactor, edge, color) {
  ctx.strokeStyle = color;
  ctx.fillStyle = color;
  ctx.lineWidth = Math.max(1 / scalefactor, edge.width);
  ctx.lineCap = "round";
  ctx.lineJoin = "round";
  if ("svgpath" in edge) {
    ctx.stroke(new Path2D(edge.svgpath));
  } else {
    ctx.beginPath();
    if (edge.type == "segment") {
      ctx.moveTo(...edge.start);
      ctx.lineTo(...edge.end);
    }
    if (edge.type == "rect") {
      ctx.moveTo(...edge.start);
      ctx.lineTo(edge.start[0], edge.end[1]);
      ctx.lineTo(...edge.end);
      ctx.lineTo(edge.end[0], edge.start[1]);
      ctx.lineTo(...edge.start);
    }
    if (edge.type == "arc") {
      ctx.arc(
        ...edge.start,
        edge.radius,
        deg2rad(edge.startangle),
        deg2rad(edge.endangle));
    }
    if (edge.type == "circle") {
      ctx.arc(
        ...edge.start,
        edge.radius,
        0, 2 * Math.PI);
      ctx.closePath();
    }
    if (edge.type == "curve") {
      ctx.moveTo(...edge.start);
      ctx.bezierCurveTo(...edge.cpa, ...edge.cpb, ...edge.end);
    }
    if("filled" in edge && edge.filled)
      ctx.fill();
    else
      ctx.stroke();
  }
}

function getChamferedRectPath(size, radius, chamfpos, chamfratio) {
  // chamfpos is a bitmask, left = 1, right = 2, bottom left = 4, bottom right = 8
  var path = new Path2D();
  var width = size[0];
  var height = size[1];
  var x = width * -0.5;
  var y = height * -0.5;
  var chamfOffset = Math.min(width, height) * chamfratio;
  path.moveTo(x, 0);
  if (chamfpos & 4) {
    path.lineTo(x, y + height - chamfOffset);
    path.lineTo(x + chamfOffset, y + height);
    path.lineTo(0, y + height);
  } else {
    path.arcTo(x, y + height, x + width, y + height, radius);
  }
  if (chamfpos & 8) {
    path.lineTo(x + width - chamfOffset, y + height);
    path.lineTo(x + width, y + height - chamfOffset);
    path.lineTo(x + width, 0);
  } else {
    path.arcTo(x + width, y + height, x + width, y, radius);
  }
  if (chamfpos & 2) {
    path.lineTo(x + width, y + chamfOffset);
    path.lineTo(x + width - chamfOffset, y);
    path.lineTo(0, y);
  } else {
    path.arcTo(x + width, y, x, y, radius);
  }
  if (chamfpos & 1) {
    path.lineTo(x + chamfOffset, y);
    path.lineTo(x, y + chamfOffset);
    path.lineTo(x, 0);
  } else {
    path.arcTo(x, y, x, y + height, radius);
  }
  path.closePath();
  return path;
}

function getOblongPath(size) {
  return getChamferedRectPath(size, Math.min(size[0], size[1]) / 2, 0, 0);
}

function getPolygonsPath(shape) {
  if (shape.path2d) {
    return shape.path2d;
  }
  if ("svgpath" in shape) {
    shape.path2d = new Path2D(shape.svgpath);
  } else {
    var path = new Path2D();
    for (var polygon of shape.polygons) {
      path.moveTo(...polygon[0]);
      for (var i = 1; i < polygon.length; i++) {
        path.lineTo(...polygon[i]);
      }
      path.closePath();
    }
    shape.path2d = path;
  }
  return shape.path2d;
}

function drawPolygonShape(ctx, scalefactor, shape, color) {
  ctx.save();
  if (!("svgpath" in shape)) {
    ctx.translate(...shape.pos);
    ctx.rotate(deg2rad(-shape.angle));
  }
  if("filled" in shape && !shape.filled) {
    ctx.strokeStyle = color;
    ctx.lineWidth = Math.max(1 / scalefactor, shape.width);
    ctx.lineCap = "round";
    ctx.lineJoin = "round";
    ctx.stroke(getPolygonsPath(shape));
  } else {
    ctx.fillStyle = color;
    ctx.fill(getPolygonsPath(shape));
  }
  ctx.restore();
}

function drawDrawing(ctx, scalefactor, drawing, color) {
  if (["segment", "arc", "circle", "curve", "rect"].includes(drawing.type)) {
    drawedge(ctx, scalefactor, drawing, color);
  } else if (drawing.type == "polygon") {
    drawPolygonShape(ctx, scalefactor, drawing, color);
  } else {
    drawText(ctx, drawing, color);
  }
}

function getCirclePath(radius) {
  var path = new Path2D();
  path.arc(0, 0, radius, 0, 2 * Math.PI);
  path.closePath();
  return path;
}

function getCachedPadPath(pad) {
  if (!pad.path2d) {
    // if path2d is not set, build one and cache it on pad object
    if (pad.shape == "rect") {
      pad.path2d = new Path2D();
      pad.path2d.rect(...pad.size.map(c => -c * 0.5), ...pad.size);
    } else if (pad.shape == "oval") {
      pad.path2d = getOblongPath(pad.size);
    } else if (pad.shape == "circle") {
      pad.path2d = getCirclePath(pad.size[0] / 2);
    } else if (pad.shape == "roundrect") {
      pad.path2d = getChamferedRectPath(pad.size, pad.radius, 0, 0);
    } else if (pad.shape == "chamfrect") {
      pad.path2d = getChamferedRectPath(pad.size, pad.radius, pad.chamfpos, pad.chamfratio)
    } else if (pad.shape == "custom") {
      pad.path2d = getPolygonsPath(pad);
    }
  }
  return pad.path2d;
}

function drawPad(ctx, pad, color, outline) {
  ctx.save();
  ctx.translate(...pad.pos);
  ctx.rotate(-deg2rad(pad.angle));
  if (pad.offset) {
    ctx.translate(...pad.offset);
  }
  ctx.fillStyle = color;
  ctx.strokeStyle = color;
  var path = getCachedPadPath(pad);
  if (outline) {
    ctx.stroke(path);
  } else {
    ctx.fill(path);
  }
  ctx.restore();
}

function drawPadHole(ctx, pad, padHoleColor) {
  if (pad.type != "th") return;
  ctx.save();
  ctx.translate(...pad.pos);
  ctx.rotate(-deg2rad(pad.angle));
  ctx.fillStyle = padHoleColor;
  if (pad.drillshape == "oblong") {
    ctx.fill(getOblongPath(pad.drillsize));
  } else {
    ctx.fill(getCirclePath(pad.drillsize[0] / 2));
  }
  ctx.restore();
}

function drawFootprint(ctx, layer, scalefactor, footprint, colors, highlight, outline) {
  if (highlight) {
    // draw bounding box
    if (footprint.layer == layer) {
      ctx.save();
      ctx.globalAlpha = 0.2;
      ctx.translate(...footprint.bbox.pos);
      ctx.rotate(deg2rad(-footprint.bbox.angle));
      ctx.translate(...footprint.bbox.relpos);
      ctx.fillStyle = colors.pad;
      ctx.fillRect(0, 0, ...footprint.bbox.size);
      ctx.globalAlpha = 1;
      ctx.strokeStyle = colors.pad;
      ctx.lineWidth = 3 / scalefactor;
      ctx.strokeRect(0, 0, ...footprint.bbox.size);
      ctx.restore();
    }
  }
  // draw drawings
  for (var drawing of footprint.drawings) {
    if (drawing.layer == layer) {
      drawDrawing(ctx, scalefactor, drawing.drawing, colors.pad);
    }
  }
  ctx.lineWidth = 3 / scalefactor;
  // draw pads
  if (settings.renderPads) {
    for (var pad of footprint.pads) {
      if (pad.layers.includes(layer)) {
        drawPad(ctx, pad, colors.pad, outline);
        if (pad.pin1 &&
          (settings.highlightpin1 == "all" ||
            settings.highlightpin1 == "selected" && highlight)) {
          drawPad(ctx, pad, colors.outline, true);
        }
      }
    }
    for (var pad of footprint.pads) {
      drawPadHole(ctx, pad, colors.padHole);
    }
  }
}

function drawEdgeCuts(canvas, scalefactor) {
  var ctx = canvas.getContext("2d");
  var edgecolor = getComputedStyle(topmostdiv).getPropertyValue('--pcb-edge-color');
  for (var edge of pcbdata.edges) {
    drawDrawing(ctx, scalefactor, edge, edgecolor);
  }
}

function drawFootprints(canvas, layer, scalefactor, highlight) {
  var ctx = canvas.getContext("2d");
  ctx.lineWidth = 3 / scalefactor;
  var style = getComputedStyle(topmostdiv);

  var colors = {
    pad: style.getPropertyValue('--pad-color'),
    padHole: style.getPropertyValue('--pad-hole-color'),
    outline: style.getPropertyValue('--pin1-outline-color'),
  }

  for (var i = 0; i < pcbdata.footprints.length; i++) {
    var mod = pcbdata.footprints[i];
    var outline = settings.renderDnpOutline && pcbdata.bom.skipped.includes(i);
    var h = highlightedFootprints.includes(i);
    var d = markedFootprints.has(i);
    if (highlight) {
      if(h && d) {
        colors.pad = style.getPropertyValue('--pad-color-highlight-both');
        colors.outline = style.getPropertyValue('--pin1-outline-color-highlight-both');
      } else if (h) {
        colors.pad = style.getPropertyValue('--pad-color-highlight');
        colors.outline = style.getPropertyValue('--pin1-outline-color-highlight');
      } else if (d) {
        colors.pad = style.getPropertyValue('--pad-color-highlight-marked');
        colors.outline = style.getPropertyValue('--pin1-outline-color-highlight-marked');
      }
    }
    if( h || d || !highlight) {
      drawFootprint(ctx, layer, scalefactor, mod, colors, highlight, outline);
    }
  }
}

function drawBgLayer(layername, canvas, layer, scalefactor, edgeColor, polygonColor, textColor) {
  var ctx = canvas.getContext("2d");
  for (var d of pcbdata.drawings[layername][layer]) {
    if (["segment", "arc", "circle", "curve", "rect"].includes(d.type)) {
      drawedge(ctx, scalefactor, d, edgeColor);
    } else if (d.type == "polygon") {
      drawPolygonShape(ctx, scalefactor, d, polygonColor);
    } else {
      drawText(ctx, d, textColor);
    }
  }
}

function drawTracks(canvas, layer, defaultColor, highlight) {
  ctx = canvas.getContext("2d");
  ctx.lineCap = "round";
  for (var track of pcbdata.tracks[layer]) {
    if (highlight && highlightedNet != track.net) continue;
    ctx.strokeStyle = highlight ? defaultColor : settings.netColors[track.net] || defaultColor;
    ctx.lineWidth = track.width;
    ctx.beginPath();
    if ('radius' in track) {
      ctx.arc(
        ...track.center,
        track.radius,
        deg2rad(track.startangle),
        deg2rad(track.endangle));
    } else {
      ctx.moveTo(...track.start);
      ctx.lineTo(...track.end);
    }
    ctx.stroke();
  }
}

function drawZones(canvas, layer, defaultColor, highlight) {
  ctx = canvas.getContext("2d");
  ctx.lineJoin = "round";
  for (var zone of pcbdata.zones[layer]) {
    if (highlight && highlightedNet != zone.net) continue;
    ctx.strokeStyle = highlight ? defaultColor : settings.netColors[zone.net] || defaultColor;
    ctx.fillStyle = highlight ? defaultColor : settings.netColors[zone.net] || defaultColor;
    if (!zone.path2d) {
      zone.path2d = getPolygonsPath(zone);
    }
    ctx.fill(zone.path2d, zone.fillrule || "nonzero");
    if (zone.width > 0) {
      ctx.lineWidth = zone.width;
      ctx.stroke(zone.path2d);
    }
  }
}

function clearCanvas(canvas, color = null) {
  var ctx = canvas.getContext("2d");
  ctx.save();
  ctx.setTransform(1, 0, 0, 1, 0, 0);
  if (color) {
    ctx.fillStyle = color;
    ctx.fillRect(0, 0, canvas.width, canvas.height);
  } else {
    if (!window.matchMedia("print").matches)
      ctx.clearRect(0, 0, canvas.width, canvas.height);
  }
  ctx.restore();
}

function drawNets(canvas, layer, highlight) {
  var style = getComputedStyle(topmostdiv);
  if (settings.renderTracks) {
    var trackColor = style.getPropertyValue(highlight ? '--track-color-highlight' : '--track-color');
    drawTracks(canvas, layer, trackColor, highlight);
  }
  if (settings.renderZones) {
    var zoneColor = style.getPropertyValue(highlight ? '--zone-color-highlight' : '--zone-color');
    drawZones(canvas, layer, zoneColor, highlight);
  }
  if (highlight && settings.renderPads) {
    var padColor = style.getPropertyValue('--pad-color-highlight');
    var padHoleColor = style.getPropertyValue('--pad-hole-color');
    var ctx = canvas.getContext("2d");
    for (var footprint of pcbdata.footprints) {
      // draw pads
      var padDrawn = false;
      for (var pad of footprint.pads) {
        if (highlightedNet != pad.net) continue;
        if (pad.layers.includes(layer)) {
          drawPad(ctx, pad, padColor, false);
          padDrawn = true;
        }
      }
      if (padDrawn) {
        // redraw all pad holes because some pads may overlap
        for (var pad of footprint.pads) {
          drawPadHole(ctx, pad, padHoleColor);
        }
      }
    }
  }
}

function drawHighlightsOnLayer(canvasdict, clear = true) {
  if (clear) {
    clearCanvas(canvasdict.highlight);
  }
  if (markedFootprints.size > 0 || highlightedFootprints.length > 0) {
    drawFootprints(canvasdict.highlight, canvasdict.layer,
      canvasdict.transform.s * canvasdict.transform.zoom, true);
  }
  if (highlightedNet !== null) {
    drawNets(canvasdict.highlight, canvasdict.layer, true);
  }
}

function drawHighlights() {
  drawHighlightsOnLayer(allcanvas.front);
  drawHighlightsOnLayer(allcanvas.back);
}

function drawBackground(canvasdict, clear = true) {
  if (clear) {
    clearCanvas(canvasdict.bg);
    clearCanvas(canvasdict.fab);
    clearCanvas(canvasdict.silk);
  }

  drawNets(canvasdict.bg, canvasdict.layer, false);
  drawFootprints(canvasdict.bg, canvasdict.layer,
    canvasdict.transform.s * canvasdict.transform.zoom, false);

  drawEdgeCuts(canvasdict.bg, canvasdict.transform.s * canvasdict.transform.zoom);

  var style = getComputedStyle(topmostdiv);
  var edgeColor = style.getPropertyValue('--silkscreen-edge-color');
  var polygonColor = style.getPropertyValue('--silkscreen-polygon-color');
  var textColor = style.getPropertyValue('--silkscreen-text-color');
  if (settings.renderSilkscreen) {
    drawBgLayer(
      "silkscreen", canvasdict.silk, canvasdict.layer,
      canvasdict.transform.s * canvasdict.transform.zoom,
      edgeColor, polygonColor, textColor);
  }
  edgeColor = style.getPropertyValue('--fabrication-edge-color');
  polygonColor = style.getPropertyValue('--fabrication-polygon-color');
  textColor = style.getPropertyValue('--fabrication-text-color');
  if (settings.renderFabrication) {
    drawBgLayer(
      "fabrication", canvasdict.fab, canvasdict.layer,
      canvasdict.transform.s * canvasdict.transform.zoom,
      edgeColor, polygonColor, textColor);
  }
}

function prepareCanvas(canvas, flip, transform) {
  var ctx = canvas.getContext("2d");
  ctx.setTransform(1, 0, 0, 1, 0, 0);
  ctx.scale(transform.zoom, transform.zoom);
  ctx.translate(transform.panx, transform.pany);
  if (flip) {
    ctx.scale(-1, 1);
  }
  ctx.translate(transform.x, transform.y);
  ctx.rotate(deg2rad(settings.boardRotation + (flip && settings.offsetBackRotation ? - 180 : 0)));
  ctx.scale(transform.s, transform.s);
}

function prepareLayer(canvasdict) {
  var flip = (canvasdict.layer === "B");
  for (var c of ["bg", "fab", "silk", "highlight"]) {
    prepareCanvas(canvasdict[c], flip, canvasdict.transform);
  }
}

function rotateVector(v, angle) {
  angle = deg2rad(angle);
  return [
    v[0] * Math.cos(angle) - v[1] * Math.sin(angle),
    v[0] * Math.sin(angle) + v[1] * Math.cos(angle)
  ];
}

function applyRotation(bbox, flip) {
  var corners = [
    [bbox.minx, bbox.miny],
    [bbox.minx, bbox.maxy],
    [bbox.maxx, bbox.miny],
    [bbox.maxx, bbox.maxy],
  ];
  corners = corners.map((v) => rotateVector(v, settings.boardRotation + (flip && settings.offsetBackRotation ? - 180 : 0)));
  return {
    minx: corners.reduce((a, v) => Math.min(a, v[0]), Infinity),
    miny: corners.reduce((a, v) => Math.min(a, v[1]), Infinity),
    maxx: corners.reduce((a, v) => Math.max(a, v[0]), -Infinity),
    maxy: corners.reduce((a, v) => Math.max(a, v[1]), -Infinity),
  }
}

function recalcLayerScale(layerdict, width, height) {
  var flip = (layerdict.layer === "B");
  var bbox = applyRotation(pcbdata.edges_bbox, flip);
  var scalefactor = 0.98 * Math.min(
    width / (bbox.maxx - bbox.minx),
    height / (bbox.maxy - bbox.miny)
  );
  if (scalefactor < 0.1) {
    scalefactor = 1;
  }
  layerdict.transform.s = scalefactor;
  if (flip) {
    layerdict.transform.x = -((bbox.maxx + bbox.minx) * scalefactor + width) * 0.5;
  } else {
    layerdict.transform.x = -((bbox.maxx + bbox.minx) * scalefactor - width) * 0.5;
  }
  layerdict.transform.y = -((bbox.maxy + bbox.miny) * scalefactor - height) * 0.5;
  for (var c of ["bg", "fab", "silk", "highlight"]) {
    canvas = layerdict[c];
    canvas.width = width;
    canvas.height = height;
    canvas.style.width = (width / devicePixelRatio) + "px";
    canvas.style.height = (height / devicePixelRatio) + "px";
  }
}

function redrawCanvas(layerdict) {
  prepareLayer(layerdict);
  drawBackground(layerdict);
  drawHighlightsOnLayer(layerdict);
}

function resizeCanvas(layerdict) {
  var canvasdivid = {
    "F": "frontcanvas",
    "B": "backcanvas"
  } [layerdict.layer];
  var width = document.getElementById(canvasdivid).clientWidth * devicePixelRatio;
  var height = document.getElementById(canvasdivid).clientHeight * devicePixelRatio;
  recalcLayerScale(layerdict, width, height);
  redrawCanvas(layerdict);
}

function resizeAll() {
  resizeCanvas(allcanvas.front);
  resizeCanvas(allcanvas.back);
}

function pointWithinDistanceToSegment(x, y, x1, y1, x2, y2, d) {
  var A = x - x1;
  var B = y - y1;
  var C = x2 - x1;
  var D = y2 - y1;

  var dot = A * C + B * D;
  var len_sq = C * C + D * D;
  var dx, dy;
  if (len_sq == 0) {
    // start and end of the segment coincide
    dx = x - x1;
    dy = y - y1;
  } else {
    var param = dot / len_sq;
    var xx, yy;
    if (param < 0) {
      xx = x1;
      yy = y1;
    } else if (param > 1) {
      xx = x2;
      yy = y2;
    } else {
      xx = x1 + param * C;
      yy = y1 + param * D;
    }
    dx = x - xx;
    dy = y - yy;
  }
  return dx * dx + dy * dy <= d * d;
}

function modulo(n, mod) {
  return ((n % mod) + mod) % mod;
}

function pointWithinDistanceToArc(x, y, xc, yc, radius, startangle, endangle, d) {
  var dx = x - xc;
  var dy = y - yc;
  var r_sq = dx * dx + dy * dy;
  var rmin = Math.max(0, radius - d);
  var rmax = radius + d;

  if (r_sq < rmin * rmin || r_sq > rmax * rmax)
    return false;

  var angle1 = modulo(deg2rad(startangle), 2 * Math.PI);
  var dx1 = xc + radius * Math.cos(angle1) - x;
  var dy1 = yc + radius * Math.sin(angle1) - y;
  if (dx1 * dx1 + dy1 * dy1 <= d * d)
    return true;

  var angle2 = modulo(deg2rad(endangle), 2 * Math.PI);
  var dx2 = xc + radius * Math.cos(angle2) - x;
  var dy2 = yc + radius * Math.sin(angle2) - y;
  if (dx2 * dx2 + dy2 * dy2 <= d * d)
    return true;

  var angle = modulo(Math.atan2(dy, dx), 2 * Math.PI);
  if (angle1 > angle2)
    return (angle >= angle2 || angle <= angle1);
  else
    return (angle >= angle1 && angle <= angle2);
}

function pointWithinPad(x, y, pad) {
  var v = [x - pad.pos[0], y - pad.pos[1]];
  v = rotateVector(v, pad.angle);
  if (pad.offset) {
    v[0] -= pad.offset[0];
    v[1] -= pad.offset[1];
  }
  return emptyContext2d.isPointInPath(getCachedPadPath(pad), ...v);
}

function netHitScan(layer, x, y) {
  // Check track segments
  if (settings.renderTracks && pcbdata.tracks) {
    for (var track of pcbdata.tracks[layer]) {
      if ('radius' in track) {
        if (pointWithinDistanceToArc(x, y, ...track.center, track.radius, track.startangle, track.endangle, track.width / 2)) {
          return track.net;
        }
      } else {
        if (pointWithinDistanceToSegment(x, y, ...track.start, ...track.end, track.width / 2)) {
          return track.net;
        }
      }
    }
  }
  // Check pads
  if (settings.renderPads) {
    for (var footprint of pcbdata.footprints) {
      for (var pad of footprint.pads) {
        if (pad.layers.includes(layer) && pointWithinPad(x, y, pad)) {
          return pad.net;
        }
      }
    }
  }
  return null;
}

function pointWithinFootprintBbox(x, y, bbox) {
  var v = [x - bbox.pos[0], y - bbox.pos[1]];
  v = rotateVector(v, bbox.angle);
  return bbox.relpos[0] <= v[0] && v[0] <= bbox.relpos[0] + bbox.size[0] &&
    bbox.relpos[1] <= v[1] && v[1] <= bbox.relpos[1] + bbox.size[1];
}

function bboxHitScan(layer, x, y) {
  var result = [];
  for (var i = 0; i < pcbdata.footprints.length; i++) {
    var footprint = pcbdata.footprints[i];
    if (footprint.layer == layer) {
      if (pointWithinFootprintBbox(x, y, footprint.bbox)) {
        result.push(i);
      }
    }
  }
  return result;
}

function handlePointerDown(e, layerdict) {
  if (e.button != 0 && e.button != 1) {
    return;
  }
  e.preventDefault();
  e.stopPropagation();

  if (!e.hasOwnProperty("offsetX")) {
    // The polyfill doesn't set this properly
    e.offsetX = e.pageX - e.currentTarget.offsetLeft;
    e.offsetY = e.pageY - e.currentTarget.offsetTop;
  }

  layerdict.pointerStates[e.pointerId] = {
    distanceTravelled: 0,
    lastX: e.offsetX,
    lastY: e.offsetY,
    downTime: Date.now(),
  };
}

function handleMouseClick(e, layerdict) {
  if (!e.hasOwnProperty("offsetX")) {
    // The polyfill doesn't set this properly
    e.offsetX = e.pageX - e.currentTarget.offsetLeft;
    e.offsetY = e.pageY - e.currentTarget.offsetTop;
  }

  var x = e.offsetX;
  var y = e.offsetY;
  var t = layerdict.transform;
  var flip = layerdict.layer === "B";
  if (flip) {
    x = (devicePixelRatio * x / t.zoom - t.panx + t.x) / -t.s;
  } else {
    x = (devicePixelRatio * x / t.zoom - t.panx - t.x) / t.s;
  }
  y = (devicePixelRatio * y / t.zoom - t.y - t.pany) / t.s;
  var v = rotateVector([x, y], -settings.boardRotation + (flip && settings.offsetBackRotation ? - 180 : 0));
  if ("nets" in pcbdata) {
    var net = netHitScan(layerdict.layer, ...v);
    if (net !== highlightedNet) {
      netClicked(net);
    }
  }
  if (highlightedNet === null) {
    var footprints = bboxHitScan(layerdict.layer, ...v);
    if (footprints.length > 0) {
      footprintsClicked(footprints);
    }
  }
}

function handlePointerLeave(e, layerdict) {
  e.preventDefault();
  e.stopPropagation();

  if (!settings.redrawOnDrag) {
    redrawCanvas(layerdict);
  }

  delete layerdict.pointerStates[e.pointerId];
}

function resetTransform(layerdict) {
  layerdict.transform.panx = 0;
  layerdict.transform.pany = 0;
  layerdict.transform.zoom = 1;
  redrawCanvas(layerdict);
}

function handlePointerUp(e, layerdict) {
  if (!e.hasOwnProperty("offsetX")) {
    // The polyfill doesn't set this properly
    e.offsetX = e.pageX - e.currentTarget.offsetLeft;
    e.offsetY = e.pageY - e.currentTarget.offsetTop;
  }

  e.preventDefault();
  e.stopPropagation();

  if (e.button == 2) {
    // Reset pan and zoom on right click.
    resetTransform(layerdict);
    layerdict.anotherPointerTapped = false;
    return;
  }

  // We haven't necessarily had a pointermove event since the interaction started, so make sure we update this now
  var ptr = layerdict.pointerStates[e.pointerId];
  ptr.distanceTravelled += Math.abs(e.offsetX - ptr.lastX) + Math.abs(e.offsetY - ptr.lastY);

  if (e.button == 0 && ptr.distanceTravelled < 10 && Date.now() - ptr.downTime <= 500) {
    if (Object.keys(layerdict.pointerStates).length == 1) {
      if (layerdict.anotherPointerTapped) {
        // This is the second pointer coming off of a two-finger tap
        resetTransform(layerdict);
      } else {
        // This is just a regular tap
        handleMouseClick(e, layerdict);
      }
      layerdict.anotherPointerTapped = false;
    } else {
      // This is the first finger coming off of what could become a two-finger tap
      layerdict.anotherPointerTapped = true;
    }
  } else {
    if (!settings.redrawOnDrag) {
      redrawCanvas(layerdict);
    }
    layerdict.anotherPointerTapped = false;
  }

  delete layerdict.pointerStates[e.pointerId];
}

function handlePointerMove(e, layerdict) {
  if (!layerdict.pointerStates.hasOwnProperty(e.pointerId)) {
    return;
  }
  e.preventDefault();
  e.stopPropagation();

  if (!e.hasOwnProperty("offsetX")) {
    // The polyfill doesn't set this properly
    e.offsetX = e.pageX - e.currentTarget.offsetLeft;
    e.offsetY = e.pageY - e.currentTarget.offsetTop;
  }

  var thisPtr = layerdict.pointerStates[e.pointerId];

  var dx = e.offsetX - thisPtr.lastX;
  var dy = e.offsetY - thisPtr.lastY;

  // If this number is low on pointer up, we count the action as a click
  thisPtr.distanceTravelled += Math.abs(dx) + Math.abs(dy);

  if (Object.keys(layerdict.pointerStates).length == 1) {
    // This is a simple drag
    layerdict.transform.panx += devicePixelRatio * dx / layerdict.transform.zoom;
    layerdict.transform.pany += devicePixelRatio * dy / layerdict.transform.zoom;
  } else if (Object.keys(layerdict.pointerStates).length == 2) {
    var otherPtr = Object.values(layerdict.pointerStates).filter((ptr) => ptr != thisPtr)[0];

    var oldDist = Math.sqrt(Math.pow(thisPtr.lastX - otherPtr.lastX, 2) + Math.pow(thisPtr.lastY - otherPtr.lastY, 2));
    var newDist = Math.sqrt(Math.pow(e.offsetX - otherPtr.lastX, 2) + Math.pow(e.offsetY - otherPtr.lastY, 2));

    var scaleFactor = newDist / oldDist;

    if (scaleFactor != NaN) {
      layerdict.transform.zoom *= scaleFactor;

      var zoomd = (1 - scaleFactor) / layerdict.transform.zoom;
      layerdict.transform.panx += devicePixelRatio * otherPtr.lastX * zoomd;
      layerdict.transform.pany += devicePixelRatio * otherPtr.lastY * zoomd;
    }
  }

  thisPtr.lastX = e.offsetX;
  thisPtr.lastY = e.offsetY;

  if (settings.redrawOnDrag) {
    redrawCanvas(layerdict);
  }
}

function handleMouseWheel(e, layerdict) {
  e.preventDefault();
  e.stopPropagation();
  var t = layerdict.transform;
  var wheeldelta = e.deltaY;
  if (e.deltaMode == 1) {
    // FF only, scroll by lines
    wheeldelta *= 30;
  } else if (e.deltaMode == 2) {
    wheeldelta *= 300;
  }
  var m = Math.pow(1.1, -wheeldelta / 40);
  // Limit amount of zoom per tick.
  if (m > 2) {
    m = 2;
  } else if (m < 0.5) {
    m = 0.5;
  }
  t.zoom *= m;
  var zoomd = (1 - m) / t.zoom;
  t.panx += devicePixelRatio * e.offsetX * zoomd;
  t.pany += devicePixelRatio * e.offsetY * zoomd;
  redrawCanvas(layerdict);
}

function addMouseHandlers(div, layerdict) {
  div.addEventListener("pointerdown", function(e) {
    handlePointerDown(e, layerdict);
  });
  div.addEventListener("pointermove", function(e) {
    handlePointerMove(e, layerdict);
  });
  div.addEventListener("pointerup", function(e) {
    handlePointerUp(e, layerdict);
  });
  var pointerleave = function(e) {
    handlePointerLeave(e, layerdict);
  }
  div.addEventListener("pointercancel", pointerleave);
  div.addEventListener("pointerleave", pointerleave);
  div.addEventListener("pointerout", pointerleave);

  div.onwheel = function(e) {
    handleMouseWheel(e, layerdict);
  }
  for (var element of [div, layerdict.bg, layerdict.fab, layerdict.silk, layerdict.highlight]) {
    element.addEventListener("contextmenu", function(e) {
      e.preventDefault();
    }, false);
  }
}

function setRedrawOnDrag(value) {
  settings.redrawOnDrag = value;
  writeStorage("redrawOnDrag", value);
}

function setBoardRotation(value) {
  settings.boardRotation = value * 5;
  writeStorage("boardRotation", settings.boardRotation);
  document.getElementById("rotationDegree").textContent = settings.boardRotation;
  resizeAll();
}

function setOffsetBackRotation(value) {
  settings.offsetBackRotation = value;
  writeStorage("offsetBackRotation", value);
  resizeAll();
}

function initRender() {
  allcanvas = {
    front: {
      transform: {
        x: 0,
        y: 0,
        s: 1,
        panx: 0,
        pany: 0,
        zoom: 1,
      },
      pointerStates: {},
      anotherPointerTapped: false,
      bg: document.getElementById("F_bg"),
      fab: document.getElementById("F_fab"),
      silk: document.getElementById("F_slk"),
      highlight: document.getElementById("F_hl"),
      layer: "F",
    },
    back: {
      transform: {
        x: 0,
        y: 0,
        s: 1,
        panx: 0,
        pany: 0,
        zoom: 1,
      },
      pointerStates: {},
      anotherPointerTapped: false,
      bg: document.getElementById("B_bg"),
      fab: document.getElementById("B_fab"),
      silk: document.getElementById("B_slk"),
      highlight: document.getElementById("B_hl"),
      layer: "B",
    }
  };
  addMouseHandlers(document.getElementById("frontcanvas"), allcanvas.front);
  addMouseHandlers(document.getElementById("backcanvas"), allcanvas.back);
}

///////////////////////////////////////////////

///////////////////////////////////////////////
/*
 * Table reordering via Drag'n'Drop
 * Inspired by: https://htmldom.dev/drag-and-drop-table-column
 */

function setBomHandlers() {

  const bom = document.getElementById('bomtable');

  let dragName;
  let placeHolderElements;
  let draggingElement;
  let forcePopulation;
  let xOffset;
  let yOffset;
  let wasDragged;

  const mouseUpHandler = function(e) {
    // Delete dragging element
    draggingElement.remove();

    // Make BOM selectable again
    bom.style.removeProperty("userSelect");

    // Remove listeners
    document.removeEventListener('mousemove', mouseMoveHandler);
    document.removeEventListener('mouseup', mouseUpHandler);

    if (wasDragged) {
      // Redraw whole BOM
      populateBomTable();
    }
  }

  const mouseMoveHandler = function(e) {
    // Notice the dragging
    wasDragged = true;

    // Make the dragged element visible
    draggingElement.style.removeProperty("display");

    // Set elements position to mouse position
    draggingElement.style.left = `${e.screenX - xOffset}px`;
    draggingElement.style.top = `${e.screenY - yOffset}px`;

    // Forced redrawing of BOM table
    if (forcePopulation) {
      forcePopulation = false;
      // Copy array
      phe = Array.from(placeHolderElements);
      // populate BOM table again
      populateBomHeader(dragName, phe);
      populateBomBody(dragName, phe);
    }

    // Set up array of hidden columns
    var hiddenColumns = Array.from(settings.hiddenColumns);
    // In the ungrouped mode, quantity don't exist
    if (settings.bommode === "ungrouped")
      hiddenColumns.push("Quantity");
    // If no checkbox fields can be found, we consider them hidden
    if (settings.checkboxes.length == 0)
      hiddenColumns.push("checkboxes");

    // Get table headers and group them into checkboxes, extrafields and normal headers
    const bh = document.getElementById("bomhead");
    headers = Array.from(bh.querySelectorAll("th"))
    headers.shift() // numCol is not part of the columnOrder
    headerGroups = []
    lastCompoundClass = null;
    for (i = 0; i < settings.columnOrder.length; i++) {
      cElem = settings.columnOrder[i];
      if (hiddenColumns.includes(cElem)) {
        // Hidden columns appear as a dummy element
        headerGroups.push([]);
        continue;
      }
      elem = headers.filter(e => getColumnOrderName(e) === cElem)[0];
      if (elem.classList.contains("bom-checkbox")) {
        if (lastCompoundClass === "bom-checkbox") {
          cbGroup = headerGroups.pop();
          cbGroup.push(elem);
          headerGroups.push(cbGroup);
        } else {
          lastCompoundClass = "bom-checkbox";
          headerGroups.push([elem])
        }
      } else {
        headerGroups.push([elem])
      }
    }

    // Copy settings.columnOrder
    var columns = Array.from(settings.columnOrder)

    // Set up array with indices of hidden columns
    var hiddenIndices = hiddenColumns.map(e => settings.columnOrder.indexOf(e));
    var dragIndex = columns.indexOf(dragName);
    var swapIndex = dragIndex;
    var swapDone = false;

    // Check if the current dragged element is swapable with the left or right element
    if (dragIndex > 0) {
      // Get left headers boundingbox
      swapIndex = dragIndex - 1;
      while (hiddenIndices.includes(swapIndex) && swapIndex > 0)
        swapIndex--;
      if (!hiddenIndices.includes(swapIndex)) {
        box = getBoundingClientRectFromMultiple(headerGroups[swapIndex]);
        if (e.clientX < box.left + window.scrollX + (box.width / 2)) {
          swapElement = columns[dragIndex];
          columns.splice(dragIndex, 1);
          columns.splice(swapIndex, 0, swapElement);
          forcePopulation = true;
          swapDone = true;
        }
      }
    }
    if ((!swapDone) && dragIndex < headerGroups.length - 1) {
      // Get right headers boundingbox
      swapIndex = dragIndex + 1;
      while (hiddenIndices.includes(swapIndex))
        swapIndex++;
      if (swapIndex < headerGroups.length) {
        box = getBoundingClientRectFromMultiple(headerGroups[swapIndex]);
        if (e.clientX > box.left + window.scrollX + (box.width / 2)) {
          swapElement = columns[dragIndex];
          columns.splice(dragIndex, 1);
          columns.splice(swapIndex, 0, swapElement);
          forcePopulation = true;
          swapDone = true;
        }
      }
    }

    // Write back change to storage
    if (swapDone) {
      settings.columnOrder = columns
      writeStorage("columnOrder", JSON.stringify(columns));
    }

  }

  const mouseDownHandler = function(e) {
    var target = e.target;
    if (target.tagName.toLowerCase() != "td")
      target = target.parentElement;

    // Used to check if a dragging has ever happened
    wasDragged = false;

    // Create new element which will be displayed as the dragged column
    draggingElement = document.createElement("div")
    draggingElement.classList.add("dragging");
    draggingElement.style.display = "none";
    draggingElement.style.position = "absolute";
    draggingElement.style.overflow = "hidden";

    // Get bomhead and bombody elements
    const bh = document.getElementById("bomhead");
    const bb = document.getElementById("bombody");

    // Get all compound headers for the current column
    var compoundHeaders;
    if (target.classList.contains("bom-checkbox")) {
      compoundHeaders = Array.from(bh.querySelectorAll("th.bom-checkbox"));
    } else {
      compoundHeaders = [target];
    }

    // Create new table which will display the column
    var newTable = document.createElement("table");
    newTable.classList.add("bom");
    newTable.style.background = "white";
    draggingElement.append(newTable);

    // Create new header element
    var newHeader = document.createElement("thead");
    newTable.append(newHeader);

    // Set up array for storing all placeholder elements
    placeHolderElements = [];

    // Add all compound headers to the new thead element and placeholders
    compoundHeaders.forEach(function(h) {
      clone = cloneElementWithDimensions(h);
      newHeader.append(clone);
      placeHolderElements.push(clone);
    });

    // Create new body element
    var newBody = document.createElement("tbody");
    newTable.append(newBody);

    // Get indices for compound headers
    var idxs = compoundHeaders.map(e => getBomTableHeaderIndex(e));

    // For each row in the BOM body...
    var rows = bb.querySelectorAll("tr");
    rows.forEach(function(row) {
      // ..get the cells for the compound column
      const tds = row.querySelectorAll("td");
      var copytds = idxs.map(i => tds[i]);
      // Add them to the new element and the placeholders
      var newRow = document.createElement("tr");
      copytds.forEach(function(td) {
        clone = cloneElementWithDimensions(td);
        newRow.append(clone);
        placeHolderElements.push(clone);
      });
      newBody.append(newRow);
    });

    // Compute width for compound header
    var width = compoundHeaders.reduce((acc, x) => acc + x.clientWidth, 0);
    draggingElement.style.width = `${width}px`;

    // Insert the new dragging element and disable selection on BOM
    bom.insertBefore(draggingElement, null);
    bom.style.userSelect = "none";

    // Determine the mouse position offset
    xOffset = e.screenX - compoundHeaders.reduce((acc, x) => Math.min(acc, x.offsetLeft), compoundHeaders[0].offsetLeft);
    yOffset = e.screenY - compoundHeaders[0].offsetTop;

    // Get name for the column in settings.columnOrder
    dragName = getColumnOrderName(target);

    // Change text and class for placeholder elements
    placeHolderElements = placeHolderElements.map(function(e) {
      newElem = cloneElementWithDimensions(e);
      newElem.textContent = "";
      newElem.classList.add("placeholder");
      return newElem;
    });

    // On next mouse move, the whole BOM needs to be redrawn to show the placeholders
    forcePopulation = true;

    // Add listeners for move and up on mouse
    document.addEventListener('mousemove', mouseMoveHandler);
    document.addEventListener('mouseup', mouseUpHandler);
  }

  // In netlist mode, there is nothing to reorder
  if (settings.bommode === "netlist")
    return;

  // Add mouseDownHandler to every column except the numCol
  bom.querySelectorAll("th")
    .forEach(function(head) {
      if (!head.classList.contains("numCol")) {
        head.onmousedown = mouseDownHandler;
      }
    });

}

function getBoundingClientRectFromMultiple(elements) {
  var elems = Array.from(elements);

  if (elems.length == 0)
    return null;

  var box = elems.shift()
    .getBoundingClientRect();

  elems.forEach(function(elem) {
    var elembox = elem.getBoundingClientRect();
    box.left = Math.min(elembox.left, box.left);
    box.top = Math.min(elembox.top, box.top);
    box.width += elembox.width;
    box.height = Math.max(elembox.height, box.height);
  });

  return box;
}

function cloneElementWithDimensions(elem) {
  var newElem = elem.cloneNode(true);
  newElem.style.height = window.getComputedStyle(elem).height;
  newElem.style.width = window.getComputedStyle(elem).width;
  return newElem;
}

function getBomTableHeaderIndex(elem) {
  const bh = document.getElementById('bomhead');
  const ths = Array.from(bh.querySelectorAll("th"));
  return ths.indexOf(elem);
}

function getColumnOrderName(elem) {
  var cname = elem.getAttribute("col_name");
  if (cname === "bom-checkbox")
    return "checkboxes";
  else
    return cname;
}

function resizableGrid(tablehead) {
  var cols = tablehead.firstElementChild.children;
  var rowWidth = tablehead.offsetWidth;

  for (var i = 1; i < cols.length; i++) {
    if (cols[i].classList.contains("bom-checkbox"))
      continue;
    cols[i].style.width = ((cols[i].clientWidth - paddingDiff(cols[i])) * 100 / rowWidth) + '%';
  }

  for (var i = 1; i < cols.length - 1; i++) {
    var div = document.createElement('div');
    div.className = "column-width-handle";
    cols[i].appendChild(div);
    setListeners(div);
  }

  function setListeners(div) {
    var startX, curCol, nxtCol, curColWidth, nxtColWidth, rowWidth;

    div.addEventListener('mousedown', function(e) {
      e.preventDefault();
      e.stopPropagation();

      curCol = e.target.parentElement;
      nxtCol = curCol.nextElementSibling;
      startX = e.pageX;

      var padding = paddingDiff(curCol);

      rowWidth = curCol.parentElement.offsetWidth;
      curColWidth = curCol.clientWidth - padding;
      nxtColWidth = nxtCol.clientWidth - padding;
    });

    document.addEventListener('mousemove', function(e) {
      if (startX) {
        var diffX = e.pageX - startX;
        diffX = -Math.min(-diffX, curColWidth - 20);
        diffX = Math.min(diffX, nxtColWidth - 20);

        curCol.style.width = ((curColWidth + diffX) * 100 / rowWidth) + '%';
        nxtCol.style.width = ((nxtColWidth - diffX) * 100 / rowWidth) + '%';
        console.log(`${curColWidth + nxtColWidth} ${(curColWidth + diffX) * 100 / rowWidth + (nxtColWidth - diffX) * 100 / rowWidth}`);
      }
    });

    document.addEventListener('mouseup', function(e) {
      curCol = undefined;
      nxtCol = undefined;
      startX = undefined;
      nxtColWidth = undefined;
      curColWidth = undefined
    });
  }

  function paddingDiff(col) {

    if (getStyleVal(col, 'box-sizing') == 'border-box') {
      return 0;
    }

    var padLeft = getStyleVal(col, 'padding-left');
    var padRight = getStyleVal(col, 'padding-right');
    return (parseInt(padLeft) + parseInt(padRight));

  }

  function getStyleVal(elm, css) {
    return (window.getComputedStyle(elm, null).getPropertyValue(css))
  }
}

///////////////////////////////////////////////

///////////////////////////////////////////////
/* DOM manipulation and misc code */

var bomsplit;
var canvassplit;
var initDone = false;
var bomSortFunction = null;
var currentSortColumn = null;
var currentSortOrder = null;
var currentHighlightedRowId;
var highlightHandlers = [];
var footprintIndexToHandler = {};
var netsToHandler = {};
var markedFootprints = new Set();
var highlightedFootprints = [];
var highlightedNet = null;
var lastClicked;

function dbg(html) {
  dbgdiv.innerHTML = html;
}

function redrawIfInitDone() {
  if (initDone) {
    redrawCanvas(allcanvas.front);
    redrawCanvas(allcanvas.back);
  }
}

function padsVisible(value) {
  writeStorage("padsVisible", value);
  settings.renderPads = value;
  redrawIfInitDone();
}

function referencesVisible(value) {
  writeStorage("referencesVisible", value);
  settings.renderReferences = value;
  redrawIfInitDone();
}

function valuesVisible(value) {
  writeStorage("valuesVisible", value);
  settings.renderValues = value;
  redrawIfInitDone();
}

function tracksVisible(value) {
  writeStorage("tracksVisible", value);
  settings.renderTracks = value;
  redrawIfInitDone();
}

function zonesVisible(value) {
  writeStorage("zonesVisible", value);
  settings.renderZones = value;
  redrawIfInitDone();
}

function dnpOutline(value) {
  writeStorage("dnpOutline", value);
  settings.renderDnpOutline = value;
  redrawIfInitDone();
}

function setDarkMode(value) {
  if (value) {
    topmostdiv.classList.add("dark");
  } else {
    topmostdiv.classList.remove("dark");
  }
  writeStorage("darkmode", value);
  settings.darkMode = value;
  redrawIfInitDone();
  if (initDone) {
    populateBomTable();
  }
}

function setShowBOMColumn(field, value) {
  if (field === "references") {
    var rl = document.getElementById("reflookup");
    rl.disabled = !value;
    if (!value) {
      rl.value = "";
      updateRefLookup("");
    }
  }

  var n = settings.hiddenColumns.indexOf(field);
  if (value) {
    if (n != -1) {
      settings.hiddenColumns.splice(n, 1);
    }
  } else {
    if (n == -1) {
      settings.hiddenColumns.push(field);
    }
  }

  writeStorage("hiddenColumns", JSON.stringify(settings.hiddenColumns));

  if (initDone) {
    populateBomTable();
  }

  redrawIfInitDone();
}


function setFullscreen(value) {
  if (value) {
    document.documentElement.requestFullscreen();
  } else {
    document.exitFullscreen();
  }
}

function fabricationVisible(value) {
  writeStorage("fabricationVisible", value);
  settings.renderFabrication = value;
  redrawIfInitDone();
}

function silkscreenVisible(value) {
  writeStorage("silkscreenVisible", value);
  settings.renderSilkscreen = value;
  redrawIfInitDone();
}

function setHighlightPin1(value) {
  writeStorage("highlightpin1", value);
  settings.highlightpin1 = value;
  redrawIfInitDone();
}

function getStoredCheckboxRefs(checkbox) {
  function convert(ref) {
    var intref = parseInt(ref);
    if (isNaN(intref)) {
      for (var i = 0; i < pcbdata.footprints.length; i++) {
        if (pcbdata.footprints[i].ref == ref) {
          return i;
        }
      }
      return -1;
    } else {
      return intref;
    }
  }
  if (!(checkbox in settings.checkboxStoredRefs)) {
    var val = readStorage("checkbox_" + checkbox);
    settings.checkboxStoredRefs[checkbox] = val ? val : "";
  }
  if (!settings.checkboxStoredRefs[checkbox]) {
    return new Set();
  } else {
    return new Set(settings.checkboxStoredRefs[checkbox].split(",").map(r => convert(r)).filter(a => a >= 0));
  }
}

function getCheckboxState(checkbox, references) {
  var storedRefsSet = getStoredCheckboxRefs(checkbox);
  var currentRefsSet = new Set(references.map(r => r[1]));
  // Get difference of current - stored
  var difference = new Set(currentRefsSet);
  for (ref of storedRefsSet) {
    difference.delete(ref);
  }
  if (difference.size == 0) {
    // All the current refs are stored
    return "checked";
  } else if (difference.size == currentRefsSet.size) {
    // None of the current refs are stored
    return "unchecked";
  } else {
    // Some of the refs are stored
    return "indeterminate";
  }
}

function setBomCheckboxState(checkbox, element, references) {
  var state = getCheckboxState(checkbox, references);
  element.checked = (state == "checked");
  element.indeterminate = (state == "indeterminate");
}

function createCheckboxChangeHandler(checkbox, references, row) {
  return function () {
    refsSet = getStoredCheckboxRefs(checkbox);
    var markWhenChecked = settings.markWhenChecked == checkbox;
    eventArgs = {
      checkbox: checkbox,
      refs: references,
    }
    if (this.checked) {
      // checkbox ticked
      for (var ref of references) {
        refsSet.add(ref[1]);
      }
      if (markWhenChecked) {
        row.classList.add("checked");
        for (var ref of references) {
          markedFootprints.add(ref[1]);
        }
        drawHighlights();
      }
      eventArgs.state = 'checked';
    } else {
      // checkbox unticked
      for (var ref of references) {
        refsSet.delete(ref[1]);
      }
      if (markWhenChecked) {
        row.classList.remove("checked");
        for (var ref of references) {
          markedFootprints.delete(ref[1]);
        }
        drawHighlights();
      }
      eventArgs.state = 'unchecked';
    }
    settings.checkboxStoredRefs[checkbox] = [...refsSet].join(",");
    writeStorage("checkbox_" + checkbox, settings.checkboxStoredRefs[checkbox]);
    updateCheckboxStats(checkbox);
    EventHandler.emitEvent(IBOM_EVENT_TYPES.CHECKBOX_CHANGE_EVENT, eventArgs);
  }
}

function clearHighlightedFootprints() {
  if (currentHighlightedRowId) {
    document.getElementById(currentHighlightedRowId).classList.remove("highlighted");
    currentHighlightedRowId = null;
    highlightedFootprints = [];
    highlightedNet = null;
  }
}

function createRowHighlightHandler(rowid, refs, net) {
  return function () {
    if (currentHighlightedRowId) {
      if (currentHighlightedRowId == rowid) {
        return;
      }
      document.getElementById(currentHighlightedRowId).classList.remove("highlighted");
    }
    document.getElementById(rowid).classList.add("highlighted");
    currentHighlightedRowId = rowid;
    highlightedFootprints = refs ? refs.map(r => r[1]) : [];
    highlightedNet = net;
    drawHighlights();
    EventHandler.emitEvent(
      IBOM_EVENT_TYPES.HIGHLIGHT_EVENT, {
      rowid: rowid,
      refs: refs,
      net: net
    });
  }
}

function updateNetColors() {
  writeStorage("netColors", JSON.stringify(settings.netColors));
  redrawIfInitDone();
}

function netColorChangeHandler(net) {
  return (event) => {
    settings.netColors[net] = event.target.value;
    updateNetColors();
  }
}

function netColorRightClick(net) {
  return (event) => {
    if(event.button == 2) {
      event.preventDefault();
      event.stopPropagation();

      var style = getComputedStyle(topmostdiv);
      var defaultNetColor = style.getPropertyValue('--track-color').trim();
      event.target.value = defaultNetColor;
      delete settings.netColors[net];
      updateNetColors();
    }
  }
}

function entryMatches(entry) {
  if (settings.bommode == "netlist") {
    // entry is just a net name
    return entry.toLowerCase().indexOf(filter) >= 0;
  }
  // check refs
  if (!settings.hiddenColumns.includes("references")) {
    for (var ref of entry) {
      if (ref[0].toLowerCase().indexOf(filter) >= 0) {
        return true;
      }
    }
  }
  // check fields
  for (var i in config.fields) {
    var f = config.fields[i];
    if (!settings.hiddenColumns.includes(f)) {
      for (var ref of entry) {
        if (String(pcbdata.bom.fields[ref[1]][i]).toLowerCase().indexOf(filter) >= 0) {
          return true;
        }
      }
    }
  }
  return false;
}

function findRefInEntry(entry) {
  return entry.filter(r => r[0].toLowerCase() == reflookup);
}

function highlightFilter(s) {
  if (!filter) {
    return s;
  }
  var parts = s.toLowerCase().split(filter);
  if (parts.length == 1) {
    return s;
  }
  var r = "";
  var pos = 0;
  for (var i in parts) {
    if (i > 0) {
      r += '<mark class="highlight">' +
        s.substring(pos, pos + filter.length) +
        '</mark>';
      pos += filter.length;
    }
    r += s.substring(pos, pos + parts[i].length);
    pos += parts[i].length;
  }
  return r;
}

function checkboxSetUnsetAllHandler(checkboxname) {
  return function () {
    var checkboxnum = 0;
    while (checkboxnum < settings.checkboxes.length &&
      settings.checkboxes[checkboxnum].toLowerCase() != checkboxname.toLowerCase()) {
      checkboxnum++;
    }
    if (checkboxnum >= settings.checkboxes.length) {
      return;
    }
    var allset = true;
    var checkbox;
    var row;
    for (row of bombody.childNodes) {
      checkbox = row.childNodes[checkboxnum + 1].childNodes[0];
      if (!checkbox.checked || checkbox.indeterminate) {
        allset = false;
        break;
      }
    }
    for (row of bombody.childNodes) {
      checkbox = row.childNodes[checkboxnum + 1].childNodes[0];
      checkbox.checked = !allset;
      checkbox.indeterminate = false;
      checkbox.onchange();
    }
  }
}

function createColumnHeader(name, cls, comparator, is_checkbox = false) {
  var th = document.createElement("TH");
  th.innerHTML = name;
  th.classList.add(cls);
  if (is_checkbox)
    th.setAttribute("col_name", "bom-checkbox");
  else
    th.setAttribute("col_name", name);
  var span = document.createElement("SPAN");
  span.classList.add("sortmark");
  span.classList.add("none");
  th.appendChild(span);
  var spacer = document.createElement("div");
  spacer.className = "column-spacer";
  th.appendChild(spacer);
  spacer.onclick = function () {
    if (currentSortColumn && th !== currentSortColumn) {
      // Currently sorted by another column
      currentSortColumn.childNodes[1].classList.remove(currentSortOrder);
      currentSortColumn.childNodes[1].classList.add("none");
      currentSortColumn = null;
      currentSortOrder = null;
    }
    if (currentSortColumn && th === currentSortColumn) {
      // Already sorted by this column
      if (currentSortOrder == "asc") {
        // Sort by this column, descending order
        bomSortFunction = function (a, b) {
          return -comparator(a, b);
        }
        currentSortColumn.childNodes[1].classList.remove("asc");
        currentSortColumn.childNodes[1].classList.add("desc");
        currentSortOrder = "desc";
      } else {
        // Unsort
        bomSortFunction = null;
        currentSortColumn.childNodes[1].classList.remove("desc");
        currentSortColumn.childNodes[1].classList.add("none");
        currentSortColumn = null;
        currentSortOrder = null;
      }
    } else {
      // Sort by this column, ascending order
      bomSortFunction = comparator;
      currentSortColumn = th;
      currentSortColumn.childNodes[1].classList.remove("none");
      currentSortColumn.childNodes[1].classList.add("asc");
      currentSortOrder = "asc";
    }
    populateBomBody();
  }
  if (is_checkbox) {
    spacer.onclick = fancyDblClickHandler(
      spacer, spacer.onclick, checkboxSetUnsetAllHandler(name));
  }
  return th;
}

function populateBomHeader(placeHolderColumn = null, placeHolderElements = null) {
  while (bomhead.firstChild) {
    bomhead.removeChild(bomhead.firstChild);
  }
  var tr = document.createElement("TR");
  var th = document.createElement("TH");
  th.classList.add("numCol");

  var vismenu = document.createElement("div");
  vismenu.id = "vismenu";
  vismenu.classList.add("menu");

  var visbutton = document.createElement("div");
  visbutton.classList.add("visbtn");
  visbutton.classList.add("hideonprint");

  var viscontent = document.createElement("div");
  viscontent.classList.add("menu-content");
  viscontent.id = "vismenu-content";

  settings.columnOrder.forEach(column => {
    if (typeof column !== "string")
      return;

    // Skip empty columns
    if (column === "checkboxes" && settings.checkboxes.length == 0)
      return;
    else if (column === "Quantity" && settings.bommode == "ungrouped")
      return;

    var label = document.createElement("label");
    label.classList.add("menu-label");

    var input = document.createElement("input");
    input.classList.add("visibility_checkbox");
    input.type = "checkbox";
    input.onchange = function (e) {
      setShowBOMColumn(column, e.target.checked)
    };
    input.checked = !(settings.hiddenColumns.includes(column));

    label.appendChild(input);
    if (column.length > 0)
      label.append(column[0].toUpperCase() + column.slice(1));

    viscontent.appendChild(label);
  });

  viscontent.childNodes[0].classList.add("menu-label-top");

  vismenu.appendChild(visbutton);
  if (settings.bommode != "netlist") {
    vismenu.appendChild(viscontent);
    th.appendChild(vismenu);
  }
  tr.appendChild(th);

  var checkboxCompareClosure = function (checkbox) {
    return (a, b) => {
      var stateA = getCheckboxState(checkbox, a);
      var stateB = getCheckboxState(checkbox, b);
      if (stateA > stateB) return -1;
      if (stateA < stateB) return 1;
      return 0;
    }
  }
  var stringFieldCompareClosure = function (fieldIndex) {
    return (a, b) => {
      var fa = pcbdata.bom.fields[a[0][1]][fieldIndex];
      var fb = pcbdata.bom.fields[b[0][1]][fieldIndex];
      if (fa != fb) return fa > fb ? 1 : -1;
      else return 0;
    }
  }
  var referenceRegex = /(?<prefix>[^0-9]+)(?<number>[0-9]+)/;
  var compareRefs = (a, b) => {
    var ra = referenceRegex.exec(a);
    var rb = referenceRegex.exec(b);
    if (ra === null || rb === null) {
      if (a != b) return a > b ? 1 : -1;
      return 0;
    } else {
      if (ra.groups.prefix != rb.groups.prefix) {
        return ra.groups.prefix > rb.groups.prefix ? 1 : -1;
      }
      if (ra.groups.number != rb.groups.number) {
        return parseInt(ra.groups.number) > parseInt(rb.groups.number) ? 1 : -1;
      }
      return 0;
    }
  }
  if (settings.bommode == "netlist") {
    tr.appendChild(createColumnHeader("Net name", "bom-netname", (a, b) => {
      if (a > b) return -1;
      if (a < b) return 1;
      return 0;
    }));
    tr.appendChild(createColumnHeader("Color", "bom-color", (a, b) => {
      return 0;
    }));
  } else {
    // Filter hidden columns
    var columns = settings.columnOrder.filter(e => !settings.hiddenColumns.includes(e));
    var valueIndex = config.fields.indexOf("Value");
    var footprintIndex = config.fields.indexOf("Footprint");
    columns.forEach((column) => {
      if (column === placeHolderColumn) {
        var n = 1;
        if (column === "checkboxes")
          n = settings.checkboxes.length;
        for (i = 0; i < n; i++) {
          td = placeHolderElements.shift();
          tr.appendChild(td);
        }
        return;
      } else if (column === "checkboxes") {
        for (var checkbox of settings.checkboxes) {
          th = createColumnHeader(
            checkbox, "bom-checkbox", checkboxCompareClosure(checkbox), true);
          tr.appendChild(th);
        }
      } else if (column === "References") {
        tr.appendChild(createColumnHeader("References", "references", (a, b) => {
          var i = 0;
          while (i < a.length && i < b.length) {
            if (a[i] != b[i]) return compareRefs(a[i][0], b[i][0]);
            i++;
          }
          return a.length - b.length;
        }));
      } else if (column === "Value") {
        tr.appendChild(createColumnHeader("Value", "value", (a, b) => {
          var ra = a[0][1], rb = b[0][1];
          return valueCompare(
            pcbdata.bom.parsedValues[ra], pcbdata.bom.parsedValues[rb],
            pcbdata.bom.fields[ra][valueIndex], pcbdata.bom.fields[rb][valueIndex]);
        }));
        return;
      } else if (column === "Footprint") {
        tr.appendChild(createColumnHeader(
          "Footprint", "footprint", stringFieldCompareClosure(footprintIndex)));
      } else if (column === "Quantity" && settings.bommode == "grouped") {
        tr.appendChild(createColumnHeader("Quantity", "quantity", (a, b) => {
          return a.length - b.length;
        }));
      } else {
        // Other fields
        var i = config.fields.indexOf(column);
        if (i < 0)
          return;
        tr.appendChild(createColumnHeader(
          column, `field${i + 1}`, stringFieldCompareClosure(i)));
      }
    });
  }
  bomhead.appendChild(tr);
}

function populateBomBody(placeholderColumn = null, placeHolderElements = null) {
  const urlRegex = /^(https?:\/\/[^\s\/$.?#][^\s]*|file:\/\/([a-zA-Z]:|\/)[^\x00]+)$/;
  while (bom.firstChild) {
    bom.removeChild(bom.firstChild);
  }
  highlightHandlers = [];
  footprintIndexToHandler = {};
  netsToHandler = {};
  currentHighlightedRowId = null;
  var first = true;
  var style = getComputedStyle(topmostdiv);
  var defaultNetColor = style.getPropertyValue('--track-color').trim();
  if (settings.bommode == "netlist") {
    bomtable = pcbdata.nets.slice();
  } else {
    switch (settings.canvaslayout) {
      case 'F':
        bomtable = pcbdata.bom.F.slice();
        break;
      case 'FB':
        bomtable = pcbdata.bom.both.slice();
        break;
      case 'B':
        bomtable = pcbdata.bom.B.slice();
        break;
    }
    if (settings.bommode == "ungrouped") {
      // expand bom table
      expandedTable = []
      for (var bomentry of bomtable) {
        for (var ref of bomentry) {
          expandedTable.push([ref]);
        }
      }
      bomtable = expandedTable;
    }
  }
  if (bomSortFunction) {
    bomtable = bomtable.sort(bomSortFunction);
  }
  for (var i in bomtable) {
    var bomentry = bomtable[i];
    if (filter && !entryMatches(bomentry)) {
      continue;
    }
    var references = null;
    var netname = null;
    var tr = document.createElement("TR");
    var td = document.createElement("TD");
    var rownum = +i + 1;
    tr.id = "bomrow" + rownum;
    td.textContent = rownum;
    tr.appendChild(td);
    if (settings.bommode == "netlist") {
      netname = bomentry;
      td = document.createElement("TD");
      td.innerHTML = highlightFilter(netname ? netname : "&lt;no net&gt;");
      tr.appendChild(td);
      var color = settings.netColors[netname] || defaultNetColor;
      td = document.createElement("TD");
      var colorBox = document.createElement("INPUT");
      colorBox.type = "color";
      colorBox.value = color;
      colorBox.onchange = netColorChangeHandler(netname);
      colorBox.onmouseup = netColorRightClick(netname);
      colorBox.oncontextmenu = (e) => e.preventDefault();
      td.appendChild(colorBox);
      td.classList.add("color-column");
      tr.appendChild(td);
    } else {
      if (reflookup) {
        references = findRefInEntry(bomentry);
        if (references.length == 0) {
          continue;
        }
      } else {
        references = bomentry;
      }
      // Filter hidden columns
      var columns = settings.columnOrder.filter(e => !settings.hiddenColumns.includes(e));
      columns.forEach((column) => {
        if (column === placeholderColumn) {
          var n = 1;
          if (column === "checkboxes")
            n = settings.checkboxes.length;
          for (i = 0; i < n; i++) {
            td = placeHolderElements.shift();
            tr.appendChild(td);
          }
          return;
        } else if (column === "checkboxes") {
          for (var checkbox of settings.checkboxes) {
            if (checkbox) {
              td = document.createElement("TD");
              var input = document.createElement("input");
              input.type = "checkbox";
              input.onchange = createCheckboxChangeHandler(checkbox, references, tr);
              setBomCheckboxState(checkbox, input, references);
              if (input.checked && settings.markWhenChecked == checkbox) {
                tr.classList.add("checked");
              }
              td.appendChild(input);
              tr.appendChild(td);
            }
          }
        } else if (column === "References") {
          td = document.createElement("TD");
          td.innerHTML = highlightFilter(references.map(r => r[0]).join(", "));
          tr.appendChild(td);
        } else if (column === "Quantity" && settings.bommode == "grouped") {
          // Quantity
          td = document.createElement("TD");
          td.textContent = references.length;
          tr.appendChild(td);
        } else {
          // All the other fields
          var field_index = config.fields.indexOf(column)
          if (field_index < 0)
            return;
          var valueSet = new Set();
          references.map(r => r[1]).forEach((id) => valueSet.add(pcbdata.bom.fields[id][field_index]));
          td = document.createElement("TD");
          var output = new Array();
          for (let item of valueSet) {
            const visible = highlightFilter(String(item));
            if (typeof item === 'string' && item.match(urlRegex)) {
              output.push(`<a href="${item}" target="_blank">${visible}</a>`);
            } else {
              output.push(visible);
            }
          }
          td.innerHTML = output.join(", ");
          tr.appendChild(td);
        }
      });
    }
    bom.appendChild(tr);
    var handler = createRowHighlightHandler(tr.id, references, netname);
    tr.onmousemove = handler;
    highlightHandlers.push({
      id: tr.id,
      handler: handler,
    });
    if (references !== null) {
      for (var refIndex of references.map(r => r[1])) {
        footprintIndexToHandler[refIndex] = handler;
      }
    }
    if (netname !== null) {
      netsToHandler[netname] = handler;
    }
    if ((filter || reflookup) && first) {
      handler();
      first = false;
    }
  }
  EventHandler.emitEvent(
    IBOM_EVENT_TYPES.BOM_BODY_CHANGE_EVENT, {
    filter: filter,
    reflookup: reflookup,
    checkboxes: settings.checkboxes,
    bommode: settings.bommode,
  });
}

function highlightPreviousRow() {
  if (!currentHighlightedRowId) {
    highlightHandlers[highlightHandlers.length - 1].handler();
  } else {
    if (highlightHandlers.length > 1 &&
      highlightHandlers[0].id == currentHighlightedRowId) {
      highlightHandlers[highlightHandlers.length - 1].handler();
    } else {
      for (var i = 0; i < highlightHandlers.length - 1; i++) {
        if (highlightHandlers[i + 1].id == currentHighlightedRowId) {
          highlightHandlers[i].handler();
          break;
        }
      }
    }
  }
  smoothScrollToRow(currentHighlightedRowId);
}

function highlightNextRow() {
  if (!currentHighlightedRowId) {
    highlightHandlers[0].handler();
  } else {
    if (highlightHandlers.length > 1 &&
      highlightHandlers[highlightHandlers.length - 1].id == currentHighlightedRowId) {
      highlightHandlers[0].handler();
    } else {
      for (var i = 1; i < highlightHandlers.length; i++) {
        if (highlightHandlers[i - 1].id == currentHighlightedRowId) {
          highlightHandlers[i].handler();
          break;
        }
      }
    }
  }
  smoothScrollToRow(currentHighlightedRowId);
}

function populateBomTable() {
  populateBomHeader();
  populateBomBody();
  setBomHandlers();
  resizableGrid(bomhead);
}

function footprintsClicked(footprintIndexes) {
  var lastClickedIndex = footprintIndexes.indexOf(lastClicked);
  for (var i = 1; i <= footprintIndexes.length; i++) {
    var refIndex = footprintIndexes[(lastClickedIndex + i) % footprintIndexes.length];
    if (refIndex in footprintIndexToHandler) {
      lastClicked = refIndex;
      footprintIndexToHandler[refIndex]();
      smoothScrollToRow(currentHighlightedRowId);
      break;
    }
  }
}

function netClicked(net) {
  if (net in netsToHandler) {
    netsToHandler[net]();
    smoothScrollToRow(currentHighlightedRowId);
  } else {
    clearHighlightedFootprints();
    highlightedNet = net;
    drawHighlights();
  }
}

function updateFilter(input) {
  filter = input.toLowerCase();
  populateBomTable();
}

function updateRefLookup(input) {
  reflookup = input.toLowerCase();
  populateBomTable();
}

function changeCanvasLayout(layout) {
  document.getElementById("fl-btn").classList.remove("depressed");
  document.getElementById("fb-btn").classList.remove("depressed");
  document.getElementById("bl-btn").classList.remove("depressed");
  switch (layout) {
    case 'F':
      document.getElementById("fl-btn").classList.add("depressed");
      if (settings.bomlayout != "bom-only") {
        canvassplit.collapse(1);
      }
      break;
    case 'B':
      document.getElementById("bl-btn").classList.add("depressed");
      if (settings.bomlayout != "bom-only") {
        canvassplit.collapse(0);
      }
      break;
    default:
      document.getElementById("fb-btn").classList.add("depressed");
      if (settings.bomlayout != "bom-only") {
        canvassplit.setSizes([50, 50]);
      }
  }
  settings.canvaslayout = layout;
  writeStorage("canvaslayout", layout);
  resizeAll();
  changeBomMode(settings.bommode);
}

function populateMetadata() {
  document.getElementById("title").innerHTML = pcbdata.metadata.title;
  document.getElementById("revision").innerHTML = "Rev: " + pcbdata.metadata.revision;
  document.getElementById("company").innerHTML = pcbdata.metadata.company;
  document.getElementById("filedate").innerHTML = pcbdata.metadata.date;
  if (pcbdata.metadata.title != "") {
    document.title = pcbdata.metadata.title + " BOM";
  }
  // Calculate board stats
  var fp_f = 0,
    fp_b = 0,
    pads_f = 0,
    pads_b = 0,
    pads_th = 0;
  for (var i = 0; i < pcbdata.footprints.length; i++) {
    if (pcbdata.bom.skipped.includes(i)) continue;
    var mod = pcbdata.footprints[i];
    if (mod.layer == "F") {
      fp_f++;
    } else {
      fp_b++;
    }
    for (var pad of mod.pads) {
      if (pad.type == "th") {
        pads_th++;
      } else {
        if (pad.layers.includes("F")) {
          pads_f++;
        }
        if (pad.layers.includes("B")) {
          pads_b++;
        }
      }
    }
  }
  document.getElementById("stats-components-front").innerHTML = fp_f;
  document.getElementById("stats-components-back").innerHTML = fp_b;
  document.getElementById("stats-components-total").innerHTML = fp_f + fp_b;
  document.getElementById("stats-groups-front").innerHTML = pcbdata.bom.F.length;
  document.getElementById("stats-groups-back").innerHTML = pcbdata.bom.B.length;
  document.getElementById("stats-groups-total").innerHTML = pcbdata.bom.both.length;
  document.getElementById("stats-smd-pads-front").innerHTML = pads_f;
  document.getElementById("stats-smd-pads-back").innerHTML = pads_b;
  document.getElementById("stats-smd-pads-total").innerHTML = pads_f + pads_b;
  document.getElementById("stats-th-pads").innerHTML = pads_th;
  // Update version string
  document.getElementById("github-link").innerHTML = "InteractiveHtmlBom&nbsp;" +
    /^v\d+\.\d+/.exec(pcbdata.ibom_version)[0];
}

function changeBomLayout(layout) {
  document.getElementById("bom-btn").classList.remove("depressed");
  document.getElementById("lr-btn").classList.remove("depressed");
  document.getElementById("tb-btn").classList.remove("depressed");
  switch (layout) {
    case 'bom-only':
      document.getElementById("bom-btn").classList.add("depressed");
      if (bomsplit) {
        bomsplit.destroy();
        bomsplit = null;
        canvassplit.destroy();
        canvassplit = null;
      }
      document.getElementById("frontcanvas").style.display = "none";
      document.getElementById("backcanvas").style.display = "none";
      document.getElementById("bot").style.height = "";
      break;
    case 'top-bottom':
      document.getElementById("tb-btn").classList.add("depressed");
      document.getElementById("frontcanvas").style.display = "";
      document.getElementById("backcanvas").style.display = "";
      document.getElementById("bot").style.height = "calc(100% - 80px)";
      document.getElementById("bomdiv").classList.remove("split-horizontal");
      document.getElementById("canvasdiv").classList.remove("split-horizontal");
      document.getElementById("frontcanvas").classList.add("split-horizontal");
      document.getElementById("backcanvas").classList.add("split-horizontal");
      if (bomsplit) {
        bomsplit.destroy();
        bomsplit = null;
        canvassplit.destroy();
        canvassplit = null;
      }
      bomsplit = Split(['#bomdiv', '#canvasdiv'], {
        sizes: [50, 50],
        onDragEnd: resizeAll,
        direction: "vertical",
        gutterSize: 5
      });
      canvassplit = Split(['#frontcanvas', '#backcanvas'], {
        sizes: [50, 50],
        gutterSize: 5,
        onDragEnd: resizeAll
      });
      break;
    case 'left-right':
      document.getElementById("lr-btn").classList.add("depressed");
      document.getElementById("frontcanvas").style.display = "";
      document.getElementById("backcanvas").style.display = "";
      document.getElementById("bot").style.height = "calc(100% - 80px)";
      document.getElementById("bomdiv").classList.add("split-horizontal");
      document.getElementById("canvasdiv").classList.add("split-horizontal");
      document.getElementById("frontcanvas").classList.remove("split-horizontal");
      document.getElementById("backcanvas").classList.remove("split-horizontal");
      if (bomsplit) {
        bomsplit.destroy();
        bomsplit = null;
        canvassplit.destroy();
        canvassplit = null;
      }
      bomsplit = Split(['#bomdiv', '#canvasdiv'], {
        sizes: [50, 50],
        onDragEnd: resizeAll,
        gutterSize: 5
      });
      canvassplit = Split(['#frontcanvas', '#backcanvas'], {
        sizes: [50, 50],
        gutterSize: 5,
        direction: "vertical",
        onDragEnd: resizeAll
      });
  }
  settings.bomlayout = layout;
  writeStorage("bomlayout", layout);
  changeCanvasLayout(settings.canvaslayout);
}

function changeBomMode(mode) {
  document.getElementById("bom-grouped-btn").classList.remove("depressed");
  document.getElementById("bom-ungrouped-btn").classList.remove("depressed");
  document.getElementById("bom-netlist-btn").classList.remove("depressed");
  var chkbxs = document.getElementsByClassName("visibility_checkbox");

  switch (mode) {
    case 'grouped':
      document.getElementById("bom-grouped-btn").classList.add("depressed");
      for (var i = 0; i < chkbxs.length; i++) {
        chkbxs[i].disabled = false;
      }
      break;
    case 'ungrouped':
      document.getElementById("bom-ungrouped-btn").classList.add("depressed");
      for (var i = 0; i < chkbxs.length; i++) {
        chkbxs[i].disabled = false;
      }
      break;
    case 'netlist':
      document.getElementById("bom-netlist-btn").classList.add("depressed");
      for (var i = 0; i < chkbxs.length; i++) {
        chkbxs[i].disabled = true;
      }
  }

  writeStorage("bommode", mode);
  if (mode != settings.bommode) {
    settings.bommode = mode;
    bomSortFunction = null;
    currentSortColumn = null;
    currentSortOrder = null;
    clearHighlightedFootprints();
  }
  populateBomTable();
}

function focusFilterField() {
  focusInputField(document.getElementById("filter"));
}

function focusRefLookupField() {
  focusInputField(document.getElementById("reflookup"));
}

function toggleBomCheckbox(bomrowid, checkboxnum) {
  if (!bomrowid || checkboxnum > settings.checkboxes.length) {
    return;
  }
  var bomrow = document.getElementById(bomrowid);
  var checkbox = bomrow.childNodes[checkboxnum].childNodes[0];
  checkbox.checked = !checkbox.checked;
  checkbox.indeterminate = false;
  checkbox.onchange();
}

function checkBomCheckbox(bomrowid, checkboxname) {
  var checkboxnum = 0;
  while (checkboxnum < settings.checkboxes.length &&
    settings.checkboxes[checkboxnum].toLowerCase() != checkboxname.toLowerCase()) {
    checkboxnum++;
  }
  if (!bomrowid || checkboxnum >= settings.checkboxes.length) {
    return;
  }
  var bomrow = document.getElementById(bomrowid);
  var checkbox = bomrow.childNodes[checkboxnum + 1].childNodes[0];
  checkbox.checked = true;
  checkbox.indeterminate = false;
  checkbox.onchange();
}

function setBomCheckboxes(value) {
  writeStorage("bomCheckboxes", value);
  settings.checkboxes = value.split(",").map((e) => e.trim()).filter((e) => e);
  prepCheckboxes();
  populateMarkWhenCheckedOptions();
  setMarkWhenChecked(settings.markWhenChecked);
}

function setMarkWhenChecked(value) {
  writeStorage("markWhenChecked", value);
  settings.markWhenChecked = value;
  markedFootprints.clear();
  for (var ref of (value ? getStoredCheckboxRefs(value) : [])) {
    markedFootprints.add(ref);
  }
  populateBomTable();
  drawHighlights();
}

function prepCheckboxes() {
  var table = document.getElementById("checkbox-stats");
  while (table.childElementCount > 1) {
    table.removeChild(table.lastChild);
  }
  if (settings.checkboxes.length) {
    table.style.display = "";
  } else {
    table.style.display = "none";
  }
  for (var checkbox of settings.checkboxes) {
    var tr = document.createElement("TR");
    var td = document.createElement("TD");
    td.innerHTML = checkbox;
    tr.appendChild(td);
    td = document.createElement("TD");
    td.id = "checkbox-stats-" + checkbox;
    var progressbar = document.createElement("div");
    progressbar.classList.add("bar");
    td.appendChild(progressbar);
    var text = document.createElement("div");
    text.classList.add("text");
    td.appendChild(text);
    tr.appendChild(td);
    table.appendChild(tr);
    updateCheckboxStats(checkbox);
  }
}

function populateMarkWhenCheckedOptions() {
  var container = document.getElementById("markWhenCheckedContainer");

  if (settings.checkboxes.length == 0) {
    container.parentElement.style.display = "none";
    return;
  }

  container.innerHTML = '';
  container.parentElement.style.display = "inline-block";

  function createOption(name, displayName) {
    var id = "markWhenChecked-" + name;

    var div = document.createElement("div");
    div.classList.add("radio-container");

    var input = document.createElement("input");
    input.type = "radio";
    input.name = "markWhenChecked";
    input.value = name;
    input.id = id;
    input.onchange = () => setMarkWhenChecked(name);
    div.appendChild(input);

    // Preserve the selected element when the checkboxes change
    if (name == settings.markWhenChecked) {
      input.checked = true;
    }

    var label = document.createElement("label");
    label.innerHTML = displayName;
    label.htmlFor = id;
    div.appendChild(label);

    container.appendChild(div);
  }
  createOption("", "None");
  for (var checkbox of settings.checkboxes) {
    createOption(checkbox, checkbox);
  }
}

function updateCheckboxStats(checkbox) {
  var checked = getStoredCheckboxRefs(checkbox).size;
  var total = pcbdata.footprints.length - pcbdata.bom.skipped.length;
  var percent = checked * 100.0 / total;
  var td = document.getElementById("checkbox-stats-" + checkbox);
  td.firstChild.style.width = percent + "%";
  td.lastChild.innerHTML = checked + "/" + total + " (" + Math.round(percent) + "%)";
}

function constrain(number, min, max){
  return Math.min(Math.max(parseInt(number), min), max);
}

document.onkeydown = function (e) {
  switch (e.key) {
    case "n":
      if (document.activeElement.type == "text") {
        return;
      }
      if (currentHighlightedRowId !== null) {
        checkBomCheckbox(currentHighlightedRowId, "placed");
        highlightNextRow();
        e.preventDefault();
      }
      break;
    case "ArrowUp":
      highlightPreviousRow();
      e.preventDefault();
      break;
    case "ArrowDown":
      highlightNextRow();
      e.preventDefault();
      break;
    case "ArrowLeft":
    case "ArrowRight":
      if (document.activeElement.type != "text"){
        e.preventDefault();
        let boardRotationElement = document.getElementById("boardRotation")
        settings.boardRotation = parseInt(boardRotationElement.value);  // degrees / 5
        if (e.key == "ArrowLeft"){
            settings.boardRotation += 3;  // 15 degrees
        }
        else{
            settings.boardRotation -= 3;
        }
        settings.boardRotation = constrain(settings.boardRotation, boardRotationElement.min, boardRotationElement.max);
        boardRotationElement.value = settings.boardRotation
        setBoardRotation(settings.boardRotation);
      }
      break;
    default:
      break;
  }
  if (e.altKey) {
    switch (e.key) {
      case "f":
        focusFilterField();
        e.preventDefault();
        break;
      case "r":
        focusRefLookupField();
        e.preventDefault();
        break;
      case "z":
        changeBomLayout("bom-only");
        e.preventDefault();
        break;
      case "x":
        changeBomLayout("left-right");
        e.preventDefault();
        break;
      case "c":
        changeBomLayout("top-bottom");
        e.preventDefault();
        break;
      case "v":
        changeCanvasLayout("F");
        e.preventDefault();
        break;
      case "b":
        changeCanvasLayout("FB");
        e.preventDefault();
        break;
      case "n":
        changeCanvasLayout("B");
        e.preventDefault();
        break;
      default:
        break;
    }
    if (e.key >= '1' && e.key <= '9') {
      toggleBomCheckbox(currentHighlightedRowId, parseInt(e.key));
      e.preventDefault();
    }
  }
}

function hideNetlistButton() {
  document.getElementById("bom-ungrouped-btn").classList.remove("middle-button");
  document.getElementById("bom-ungrouped-btn").classList.add("right-most-button");
  document.getElementById("bom-netlist-btn").style.display = "none";
}

window.onload = function (e) {
  initUtils();
  initRender();
  initStorage();
  initDefaults();
  cleanGutters();
  populateMetadata();
  dbgdiv = document.getElementById("dbg");
  bom = document.getElementById("bombody");
  bomhead = document.getElementById("bomhead");
  filter = "";
  reflookup = "";
  if (!("nets" in pcbdata)) {
    hideNetlistButton();
  }
  initDone = true;
  setBomCheckboxes(document.getElementById("bomCheckboxes").value);
  // Triggers render
  changeBomLayout(settings.bomlayout);

  // Users may leave fullscreen without touching the checkbox. Uncheck.
  document.addEventListener('fullscreenchange', () => {
    if (!document.fullscreenElement)
      document.getElementById('fullscreenCheckbox').checked = false;
  });
}

window.onresize = resizeAll;
window.matchMedia("print").addListener(resizeAll);

///////////////////////////////////////////////

///////////////////////////////////////////////

///////////////////////////////////////////////
  </script>
</head>

<body>

<div id="topmostdiv" class="topmostdiv">
  <div id="top">
    <div style="float: right; height: 100%;">
      <div class="hideonprint menu" style="float: right; top: 8px;">
        <button class="menubtn"></button>
        <div class="menu-content">
          <label class="menu-label menu-label-top" style="width: calc(50% - 18px)">
            <input id="darkmodeCheckbox" type="checkbox" onchange="setDarkMode(this.checked)">
            Dark mode
          </label><!-- This comment eats space! All of it!
          --><label class="menu-label menu-label-top" style="width: calc(50% - 17px); border-left: 0;">
            <input id="fullscreenCheckbox" type="checkbox" onchange="setFullscreen(this.checked)">
            Full Screen
          </label>
          <label class="menu-label" style="width: calc(50% - 18px)">
            <input id="fabricationCheckbox" type="checkbox" checked onchange="fabricationVisible(this.checked)">
            Fab layer
          </label><!-- This comment eats space! All of it!
          --><label class="menu-label" style="width: calc(50% - 17px); border-left: 0;">
            <input id="silkscreenCheckbox" type="checkbox" checked onchange="silkscreenVisible(this.checked)">
            Silkscreen
          </label>
          <label class="menu-label" style="width: calc(50% - 18px)">
            <input id="referencesCheckbox" type="checkbox" checked onchange="referencesVisible(this.checked)">
            References
          </label><!-- This comment eats space! All of it!
          --><label class="menu-label" style="width: calc(50% - 17px); border-left: 0;">
            <input id="valuesCheckbox" type="checkbox" checked onchange="valuesVisible(this.checked)">
            Values
          </label>
          <div id="tracksAndZonesCheckboxes">
            <label class="menu-label" style="width: calc(50% - 18px)">
              <input id="tracksCheckbox" type="checkbox" checked onchange="tracksVisible(this.checked)">
              Tracks
            </label><!-- This comment eats space! All of it!
            --><label class="menu-label" style="width: calc(50% - 17px); border-left: 0;">
              <input id="zonesCheckbox" type="checkbox" checked onchange="zonesVisible(this.checked)">
              Zones
            </label>
          </div>
          <label class="menu-label" style="width: calc(50% - 18px)">
            <input id="padsCheckbox" type="checkbox" checked onchange="padsVisible(this.checked)">
            Pads
          </label><!-- This comment eats space! All of it!
          --><label class="menu-label" style="width: calc(50% - 17px); border-left: 0;">
            <input id="dnpOutlineCheckbox" type="checkbox" checked onchange="dnpOutline(this.checked)">
            DNP outlined
          </label>
          <label class="menu-label">
            <input id="dragCheckbox" type="checkbox" checked onchange="setRedrawOnDrag(this.checked)">
            Continuous redraw on drag
          </label>
          <label class="menu-label">
            Highlight first pin
            <form id="highlightpin1">
              <div class="flexbox">
                <label>
                  <input type="radio" name="highlightpin1" value="none" onchange="setHighlightPin1('none')">
                  None
                </label>
                <label>
                  <input type="radio" name="highlightpin1" value="all" onchange="setHighlightPin1('all')">
                  All
                </label>
                <label>
                  <input type="radio" name="highlightpin1" value="selected" onchange="setHighlightPin1('selected')">
                  Selected
                </label>
              </div>
            </form>
          </label>
          <label class="menu-label">
            <span>Board rotation</span>
            <span style="float: right"><span id="rotationDegree">0</span>&#176;</span>
            <input id="boardRotation" type="range" min="-36" max="36" value="0" class="slider" oninput="setBoardRotation(this.value)">
          </label>
          <label class="menu-label">
            <input id="offsetBackRotationCheckbox" type="checkbox" onchange="setOffsetBackRotation(this.checked)">
            Offset back rotation
          </label>
          <label class="menu-label">
            <div style="margin-left: 5px">Bom checkboxes</div>
            <input id="bomCheckboxes" class="menu-textbox" type=text
                   oninput="setBomCheckboxes(this.value)">
          </label>
          <label class="menu-label">
            <div style="margin-left: 5px">Mark when checked</div>
            <div id="markWhenCheckedContainer"></div>
          </label>
          <label class="menu-label">
            <span class="shameless-plug">
              <span>Created using</span>
              <a id="github-link" target="blank" href="https://github.com/openscopeproject/InteractiveHtmlBom">InteractiveHtmlBom</a>
              <a target="blank" title="Mouse and keyboard help" href="https://github.com/openscopeproject/InteractiveHtmlBom/wiki/Usage#bom-page-mouse-actions" style="text-decoration: none;"><label class="help-link">?</label></a>
            </span>
          </label>
        </div>
      </div>
      <div class="button-container hideonprint"
           style="float: right; position: relative; top: 8px">
        <button id="fl-btn" class="left-most-button" onclick="changeCanvasLayout('F')"
                title="Front only">F
        </button>
        <button id="fb-btn" class="middle-button" onclick="changeCanvasLayout('FB')"
                title="Front and Back">FB
        </button>
        <button id="bl-btn" class="right-most-button" onclick="changeCanvasLayout('B')"
                title="Back only">B
        </button>
      </div>
      <div class="button-container hideonprint"
           style="float: right; position: relative; top: 8px">
        <button id="bom-btn" class="left-most-button" onclick="changeBomLayout('bom-only')"
                title="BOM only"></button>
        <button id="lr-btn" class="middle-button" onclick="changeBomLayout('left-right')"
                title="BOM left, drawings right"></button>
        <button id="tb-btn" class="right-most-button" onclick="changeBomLayout('top-bottom')"
                title="BOM top, drawings bot"></button>
      </div>
      <div class="button-container hideonprint"
           style="float: right; position: relative; top: 8px">
        <button id="bom-grouped-btn" class="left-most-button" onclick="changeBomMode('grouped')"
                title="Grouped BOM"></button>
        <button id="bom-ungrouped-btn" class="middle-button" onclick="changeBomMode('ungrouped')"
                title="Ungrouped BOM"></button>
        <button id="bom-netlist-btn" class="right-most-button" onclick="changeBomMode('netlist')"
                title="Netlist"></button>
      </div>
      <div class="hideonprint menu" style="float: right; top: 8px;">
        <button class="statsbtn"></button>
        <div class="menu-content">
          <table class="stats">
            <tbody>
              <tr>
                <td width="40%">Board stats</td>
                <td>Front</td>
                <td>Back</td>
                <td>Total</td>
              </tr>
              <tr>
                <td>Components</td>
                <td id="stats-components-front">~</td>
                <td id="stats-components-back">~</td>
                <td id="stats-components-total">~</td>
              </tr>
              <tr>
                <td>Groups</td>
                <td id="stats-groups-front">~</td>
                <td id="stats-groups-back">~</td>
                <td id="stats-groups-total">~</td>
              </tr>
              <tr>
                <td>SMD pads</td>
                <td id="stats-smd-pads-front">~</td>
                <td id="stats-smd-pads-back">~</td>
                <td id="stats-smd-pads-total">~</td>
              </tr>
              <tr>
                <td>TH pads</td>
                <td colspan=3 id="stats-th-pads">~</td>
              </tr>
            </tbody>
          </table>
          <table class="stats">
            <col width="40%"/><col />
            <tbody id="checkbox-stats">
              <tr>
                <td colspan=2 style="border-top: 0">Checkboxes</td>
              </tr>
            </tbody>
          </table>
        </div>
      </div>
      <div class="hideonprint menu" style="float: right; top: 8px;">
        <button class="iobtn"></button>
        <div class="menu-content">
          <div class="menu-label menu-label-top">
            <div style="margin-left: 5px;">Save board image</div>
            <div class="flexbox">
              <input id="render-save-width" class="menu-textbox" type="text" value="1000" placeholder="Width"
                  style="flex-grow: 1; width: 50px;" oninput="validateSaveImgDimension(this)">
              <span>X</span>
              <input id="render-save-height" class="menu-textbox" type="text" value="1000" placeholder="Height"
                  style="flex-grow: 1; width: 50px;" oninput="validateSaveImgDimension(this)">
            </div>
            <label>
              <input id="render-save-transparent" type="checkbox">
              Transparent background
            </label>
            <div class="flexbox">
              <button class="savebtn" onclick="saveImage('F')">Front</button>
              <button class="savebtn" onclick="saveImage('B')">Back</button>
            </div>
          </div>
          <div class="menu-label">
            <span style="margin-left: 5px;">Config and checkbox state</span>
            <div class="flexbox">
              <button class="savebtn" onclick="saveSettings()">Export</button>
              <button class="savebtn" onclick="loadSettings()">Import</button>
              <button class="savebtn" onclick="resetSettings()">Reset</button>
            </div>
          </div>
          <div class="menu-label">
            <span style="margin-left: 5px;">Save bom table as</span>
            <div class="flexbox">
              <button class="savebtn" onclick="saveBomTable('csv')">csv</button>
              <button class="savebtn" onclick="saveBomTable('txt')">txt</button>
            </div>
          </div>
        </div>
      </div>
    </div>
    <div id="fileinfodiv" style="overflow: auto;">
      <table class="fileinfo">
        <tbody>
          <tr>
            <td id="title" class="title" style="width: 70%">
              Title
            </td>
            <td id="revision" class="title" style="width: 30%">
              Revision
            </td>
          </tr>
          <tr>
            <td id="company">
              Company
            </td>
            <td id="filedate">
              Date
            </td>
          </tr>
        </tbody>
      </table>
    </div>
  </div>
  <div id="bot" class="split" style="height: calc(100% - 80px)">
    <div id="bomdiv" class="split split-horizontal">
      <div style="width: 100%">
        <input id="reflookup" class="textbox searchbox reflookup hideonprint" type="text" placeholder="Ref lookup"
               oninput="updateRefLookup(this.value)">
        <input id="filter" class="textbox searchbox filter hideonprint" type="text" placeholder="Filter"
               oninput="updateFilter(this.value)">
        <div class="button-container hideonprint" style="float: left; margin: 0;">
          <button id="copy" title="Copy bom table to clipboard"
               onclick="saveBomTable('clipboard')"></button>
        </div>
      </div>
      <div id="dbg"></div>
      <table class="bom" id="bomtable">
        <thead id="bomhead">
        </thead>
        <tbody id="bombody">
        </tbody>
      </table>
    </div>
    <div id="canvasdiv" class="split split-horizontal">
      <div id="frontcanvas" class="split" touch-action="none" style="overflow: hidden">
        <div style="position: relative; width: 100%; height: 100%;">
          <canvas id="F_bg" style="position: absolute; left: 0; top: 0; z-index: 0;"></canvas>
          <canvas id="F_fab" style="position: absolute; left: 0; top: 0; z-index: 1;"></canvas>
          <canvas id="F_slk" style="position: absolute; left: 0; top: 0; z-index: 2;"></canvas>
          <canvas id="F_hl" style="position: absolute; left: 0; top: 0; z-index: 3;"></canvas>
        </div>
      </div>
      <div id="backcanvas" class="split" touch-action="none" style="overflow: hidden">
        <div style="position: relative; width: 100%; height: 100%;">
          <canvas id="B_bg" style="position: absolute; left: 0; top: 0; z-index: 0;"></canvas>
          <canvas id="B_fab" style="position: absolute; left: 0; top: 0; z-index: 1;"></canvas>
          <canvas id="B_slk" style="position: absolute; left: 0; top: 0; z-index: 2;"></canvas>
          <canvas id="B_hl" style="position: absolute; left: 0; top: 0; z-index: 3;"></canvas>
        </div>
      </div>
    </div>
  </div>
</div>

</body>

</html>
