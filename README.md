Do not use this Firmware yet if you dont know what you do. It's unfinished and has bugs.

# Mods in work:
- [Complete menu rework](http://imgur.com/VQiZ4BC) (50% done):
  - [New leveling assistant (base work by nepeee)](http://i.imgur.com/D5bKZYu.png)
  - [Overhauled move menu](http://i.imgur.com/48AXclL.png)
  
- LCD Brightness Control (change the brightness of the lcd)
- LCD "lockscreen mode" (lcd dims after some time and first touch "wakes" it again and doesnt activate buttons. No more accidental print interupts!)

# Mods Planned:
- Multiple preheat profiles with different temperatures (hotend/bed)
- Subfolder support for sdcard

# Installation:

LCD Firmware:

http://www.wanhao3dprinter.com/FAQ/ShowArticle.asp?ArticleID=79

Printer Firmware:

Download Arduino 1.6.4 from the [arduino website](https://www.arduino.cc/en/main/OldSoftwareReleases). (Doesnt compile with newest version)
Connect printer to pc. If you have trouble with drivers look [here](http://3dprinterwiki.info/wiki/wanhao-duplicator-i3-plus/wanhao-i3-plus-documentation-factory-files/ch340x-driver-information/).
Load Marlin.ino with Arduino. Select Arduino Mega under Tools->Boards.
Check the sketch with the ✔ button. If no errors show up upload the sketch to your printer.

If anything goes wrong, you can get the stock firmware files from [here](http://www.wanhao3dprinter.com/FAQ/ShowArticle.asp?ArticleID=79)

# Usefull development links:

Marlin changes for LCD:

http://3dprinterwiki.info/wiki/wanhao-duplicator-i3-plus/wanhao-i3-plus-firmware-description/

LCD Manufraturer (contains sdk, datasheets, drivers and more):

http://dwin.com.cn/english/products/bt-72876584214435.html


# Disclaimer

I'm not responsible for any damage done to your printer or lcd.

# Things i noticed:

It looks like there are different versions of the screen in circulation. Mine is "DMT48270M050_06W". [But i found screenshots of others with different versions](https://i2.wp.com/3dprinterwiki.info/wp-content/uploads/2016/09/IMG_8041.jpeg). I think they should all be compatible, but if it's not working on your screen, this may or may not be the cause.



# Based on i3Extra by nepeee:

This is a modified version of the Marlin 1.1.0-RC8 firmware for the WANHAO Duplicator i3 Plus 3d printer.
Currently it's in alpha state, same lcd functions are working and some of them is not.

Changelog Marlin:
- Added the printer specific pin and machine configuration files
- Switched to the Arduino serial port lib to add a second serial for the lcd
- Added the completely rewritten lcd communication functions
- Added a serial bridge mode for lcd firmware update over the printers usb port

Changelog LCD:
- Removed the chinese language
- Renamed all the bitmaps to fix the firmware update problem caused by the chines characters
- Removed some start animation frames
- Added the lcd update bridge mode button to the system menu
- Added Marlin and a LCD firmware version display functions to the system menu 
- Changed the bed leveling menu to a usable version
- Swapped and rearranged some buttons in the system/tool menus

If you like to help us to make a better software for the printer don't hesitate to contribute in this project!
