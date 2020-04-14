# DIY Wizard Lamp
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_150251%20(1).jpg)

Make a magic wand activated light!  Even Merlin had to start somewhere.

With a tap of your magic wand you turn your wizard light on and off.  You are magic!

* Buy the Wizard Lamp kit at [The Cauldron Shop](https://cauldronshop.com/collections/frontpage/products/diy-wizard-lamp)
* Buy a Magic Wand at [The Cauldron Shop](https://cauldronshop.com/products/personalised-wand)

## Parts Included
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_135325.jpg)

* 1x Magic Wand Sensor
* 1x LED Strip
* 1x Arduino Nano
* 1x USB cable
* 4x Screws
* Plywood
* Diffusion Paper


## Tools (not included)
* Any glue of your choice. Kids should not use superglue.
* Screwdriver
* Scissors

## Assembly
Start by assembling the electronics holder.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_135548.jpg)

Plug in the Nano to the mini USB cable and place it on top of the 3mm plywood holder, there is a cutout for the SPI pins.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_135638.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_135656.jpg)

Then place the 6mm plywood spacer around the Nano.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_135702.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_135743.jpg)

Add the LED strip holder on top of that and screw it in place with 2 screws.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_135812.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_135853.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_135857.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_135925.jpg)

Next step cut the diffusion paper with scissors into 5 squares approximately 120mm by 120mm each.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_140014.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_140053.jpg)

Make a 30mm diameter hole in the centre of one of the squares for the sensor. You can do this with an exacto knife or fold the paper twice and cut the corner in the middle.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_141208.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_141256.jpg)

Glue the diffusion paper on all sides except the base. Glue the diffusion paper with a hole on the top panel. 
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_140434.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_142924.jpg)

Start assembling the box together. You have a top panel, base panel and four sides with opposite sides being the same.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143013.jpg)

Add some glue on the finger joints for one of the sides and glue it in place. It doesn’t matter which side you start with, the base panel is symmetrical.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143054.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143111.jpg)

Do the same for the adjacent panel. Don’t forget to put glue on both edges that are interlocked.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143137.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143159.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143214.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143221.jpg)

Do the same for the rest of the side panels.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143345.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143447.jpg)

Next step is to put the sensor together.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143505.jpg)

Bend the sensor 90° with the text on the sensor pointing up.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143541.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143553.jpg)

Tread the sensor through the 6mm plywood holder. Make sure that the side of the sensor with text on is pointing up as that is the side that will detect the magic wand.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143746.jpg)

Add plenty of glue around it and glue it to the middle of the top panel where we made a cutout earlier.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143844.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143857.jpg)

Add some glue in the cutout at the back of the sensor holder for cable strain relief.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143912.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_143938.jpg)

Glue in the top panel in place.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_144107.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_144153.jpg)

## Wiring

Sensor
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/sensor.png)

* Nano 5V 		>	Sensor VDD (RED connector)
* Nano GND 		> 	Sensor GND (BLACK connector)
* Nano PIN D8 		>	Sensor OUTPUT (Yellow connector)

LED Strip
* Nano VIN		>	LED Strip +5V (RED connector)
* Nano PIN D3		>	LED Strip Din (White connector)
* Nano GND		>	LED Strip GND (BLACK connector)

Wiring the LED Strip
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_144843.jpg)

If the led strip has an adhesive at the back remove the protective film first.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_145017.jpg)

Add some glue to the 3mm ply and glue in the led strip in place with the wires coming out of the opposite side of the USB.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_144957.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_145048.jpg)

Connect the LED wires as shown in the image below. With the red connector going to the 5V pin, black connector going to the GND pin and the white connector going to D3 pin.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_150834.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_150838.jpg)

Next place the Nano close to the box and wire the sensor.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_151021.jpg)

Connect the wires as shown in the images below. Red connector goes to 3V, yellow connector goes to D8 and black connector goes to GND pin. 
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_151042.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_151046.jpg)

Push the USB cable through the cutout and secure the electronics holder to the base with two screws. Be careful not to pinch any wires.  
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_145224.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_151102.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_145503.jpg)
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/20200409_145611.jpg)

### Congratulations, you have completed the assembly. 
The lamp will turn on automatically once you plug it in and after that you can use the Magic Wand to turn it on or off. By default the colour is cool blue. You can change the colour by editing the Arduino code provided. Follow the instructions below on how to set up the Arduino programming environment and upload new code.

## Code

**Install the Arduino IDE if you don't have it already.** You can download it from [https://www.arduino.cc/en/main/software](https://www.arduino.cc/en/main/software).

You can follow the official guides on how to install the Arduino IDE for various systems at the following links:

How to install on Windows - [https://www.arduino.cc/en/Guide/Windows](https://www.arduino.cc/en/Guide/Windows)

How to install on OS X - [https://www.arduino.cc/en/Guide/MacOSX](https://www.arduino.cc/en/Guide/MacOSX)

How to install on Linux - [https://www.arduino.cc/en/Guide/Linux](https://www.arduino.cc/en/Guide/Linux)

**Install Adafruit NeoPixel Library**

Open Arduino IDE and click Sketch -> Include Library -> Manage Libraries...
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/neopixel1.png)

Type NeoPixel in the search bar, select the Adafruit NeoPixel from the results and click Install.
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/neopixel2.png)


### **Download the code from [the top of this page](https://github.com/TheMagicOfThings/wizard-lamp) by clicking on Clone or download and then Download ZIP.**
![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/download-code.png)

Open the DIY_Wizard_Lamp.ino file.
The WS2812 is a full colour LED with red, green and blue LEDs are integrated with a driver chip in a single package.

The following line sets the pixel colour. You can enter a value from 0 to 255 for the red green and blue LEDs. Zero means the colour is off and 255 means the colour is full brightness.
For example setting the red value to full brightness(r = 255) and the green and blue values to zero brightness(g = 0, b = 0;) will be show as a red colour `int r = 255, g = 0, b = 0;`. Setting red and green to full brightness and blue to zero   `int r = 255, g = 255, b = 0;` will be yellow colour. There are over 16 million possible combinations(colours).

`//Set the pixel colour`

`// strip.Color takes RGB values, from 0,0,0 up to 255,255,255 `

`int r = 180, g = 255, b = 255;`



### **Uploading the code to the board.**

![](https://github.com/TheMagicOfThings/wizard-lamp/blob/master/Images/upload-code.png)

Click on Tools and from the drop down menu select:
* Board: "Arduino Nano"
* Processor: "ATmega328P(Old Bootloader)"
* Port will be selected automatically but if doesn't work change it other available port.

After selecting the board, processor and port click on the arrow in the top left corner to upload the code.

You might need the CH340 USB drivers in order to upload to the bard. You can download them from here:
* [CH340 Windows](http://www.wch.cn/downloads/file/65.html)
* [CH340 Linux](http://www.wch.cn/downloads/file/177.html)
* [CH340 MAC](http://www.wch.cn/downloads/file/178.html)














