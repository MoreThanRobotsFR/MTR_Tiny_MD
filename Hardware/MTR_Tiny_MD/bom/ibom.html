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
var config = {"dark_mode": false, "show_pads": true, "show_fabrication": false, "show_silkscreen": true, "highlight_pin1": "none", "redraw_on_drag": true, "board_rotation": 0, "checkboxes": "Sourced,Placed", "bom_view": "left-right", "layer_view": "FB", "offset_back_rotation": false, "kicad_text_formatting": true, "fields": ["Value", "Footprint"]}
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
