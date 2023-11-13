# Kazik
![Kazik 2u splispace M0II0](/images/Kazik_M0II0.jpg)
10U keyboard with regular stagger inspired by Rain's Yasui and Yohe's Moiio. It has 13 bottom row layout options, using Japanese Duplex Matrix running on Seeed Studio XIAO RP2040 and Vial-QMK, with underlight RGB using led strip.
## Layout options
<p align=center>
  <img src="https://raw.githubusercontent.com/monokuroumu/Kazik/main/images/Kazik_layout_options.png" alt="Kazik layout options"/>
</p>
<H2>PCB and Switchplate</H2>
You can find the production files <a href="https://github.com/monokuroumu/Kazik/tree/main/production">here</a>.
<H2>Firmware</H2>
UF2 file with Vial-QMK firmware is available <a href="https://github.com/monokuroumu/Kazik/blob/main/firmware/monokeebs_kazik_vial.uf2">here</a> - there is also source code provided if you want to make changes.
<H2>Case</H2>
Case was designed and provided by HaiZeus - as soon as he will get his github repository for the files running - I will link the repo here - for now you can find all the files <a href="https://github.com/monokuroumu/Kazik/tree/main/case">here</a>. There are four options of the case for various layouts and .dxf files for acrylic diffusers and bottom plate. Case uses M3 brass inserts and M3 screws, acrylics should be 2mm.
<H2>Rev1 notes</H2>
So s few mistakes were made. Not critical, but wanted to mention it for people who would like to build it. </br></br>
<ul>
  <li>The pads for rgb underlight led strip are in bad order for most of the strips, making it tricky to solder one.</br></br>
  <img src="https://raw.githubusercontent.com/monokuroumu/Kazik/main/images/rgb-strip.jpg" alt="Rgb underlight pads" width="400px" height="400px"/></br></br>
  It will be corrected in Rev2, and chaged from pads to TH.</li>
  <li>The design uses japanese duplex matrix - so it is important to place the diodes properly - take carefull notice of the direction of the arrows and solder your diodes accordingly.</br></br>
  <img src="https://raw.githubusercontent.com/monokuroumu/Kazik/main/images/diodes-direction.jpg" alt="Diodes direction" width="800px" height="400px"/></br></br>
</ul>
<H2>BOM</H2>
<ul>
  <li>PCB x1 - you can order one at JLCPCB, PCBWAY or any other manufacturer using <a href="https://github.com/monokuroumu/Kazik/blob/main/production/Gerber_PCB_Kazik_smooth_rev1.zip">this gerber file</a></li>
  <li>Switchplate x1 - you can order one at JLCPCB, PCBWAY or any other manufacturer using <a href="https://github.com/monokuroumu/Kazik/blob/main/production/Gerber_PCB_Kazik_SwitchPlate.zip">this gerber file</a>, or get it cut from material of your choice using <a href="https://github.com/monokuroumu/Kazik/blob/main/production/Kazik_HaiZeus_Yasui_Switch_plate.dxf">this file</a> as a guideline</li>
  <li>SOD123 1N4148 Diodes x37 - the number of diodes required may be lower - depending on the layout option you want to build </li>
  <li>SeeedStudio XIAO RP2040 x1</li>
  <li>0305 Mill Max sockets x74 - these are optional - if you want to build it hot swapable - and similar to diodes - the number of the sockets may be lower, depending on the layout you want to build</li>
  <li>Case x1 - depending on the layout - you can 3D print case using <a href="https://github.com/monokuroumu/Kazik/tree/main/case">files from here</a> </li>
  <li><a href="https://github.com/monokuroumu/Kazik/blob/main/case/HaiZeus_Yasui_Acrylic_Bottom_Plate.dxf">Acrylic 2mm bottom plate</a> x1 </li>
  <li><a href="https://github.com/monokuroumu/Kazik/blob/main/case/HaiZeus_Yasui_Acrylic_Front_Diffuser.dxf">Acrylic 2mm front diffuser</a> x1</li>
  <li><a href="https://github.com/monokuroumu/Kazik/blob/main/case/HaiZeus_Yasui_Acrylic_Side_Diffuser.dxf">Acrylic 2mm side diffuser</a> x2</li>
  <li>M3x4mm brass insert x8</li>
  <li>M3x5mm screw x8</li>
  <li>ws2812b Led strip x1 - this is optional if you want to add underlight - the firmware provided here is setup to use 25 leds on the strip - if you use more or less you have to rebuild the firmware and change the number of the leds</li>
  <li>MX Switches x36 - or less, depending on the layout option you want to build</li>
</ul>
<H2>Credits</H2>
<ul>
  <li><a href="https://github.com/rainkeebs">Rain</a> - Yasui is a great inspiration ;]</li>
  <li>HaiZeus - the case is AWESOMETACULAR</li>
  <li><a href="https://booth.pm/ja/items/2874236">Yohe</a> - M0II0 is one of the cutest keyboards for me</li>
  <li><a href="https://github.com/tompi/cheapino">Thomas Haukland</a> for helping me with his custom matrix.c code for japanese duplex matrix</li>
  <li><a href="https://kiserdesigns.bigcartel.com/">NoahK</a> for helping me with vial configuration of layouts</li>
  <li>40% Discord community - for all inspiration.</li>
</ul>
