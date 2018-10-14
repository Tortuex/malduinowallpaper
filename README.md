# malduinowallpaper
*This script has been created using the Malduino lite and only works under Windows 10 with the default image browser.*

*This scripts downloads an image with internet explorer and sets it as the background image, delteding the image if existing at the beggining of the procces and at its end.*

## Setup 
Download the "lite" folder on your computer, it has been made for french keyboard layout so if you have another keyboard layout make sure to go on https://malduino.com/converter/ and download the correct keyboard layout for your needs at the bottom of the page.

Afterwards, you can replace Keyboard.cpp and Keyboard.h from the archive you just downloaded with your fitted keyboard layout files you just downloaded (make sure not to replace "lite.ino").

Connect your Malduino to your computer (if you don't know how to use your Malduino please watch the video from Seytonic: https://www.youtube.com/watch?v=cI3xlxGRGKU&t=) and hit upload!

NOTE: Make sure that all your files are still under the same folder named "lite".

*This script is an adaptation of an existing rubber ducky script, adapted for windows 10 and improved by me.*

## Customisation
If you want to choose which image the scripts downloads, edit the line 100 with whatever image link you want to use:
```Keyboard.print("iexplore http://www.thecuriosityworkshop.com/wp-content/uploads/2015/03/01-rubberduck-hongkong.jpg");```

If you want to change the name of the file you download, edit the line 138 for whatever name of image you want (be careful: the extension of the image needs to match the one you download (JPG / PNG / GIF / ...):
```Keyboard.print("01-rubberduck-hongkong.jpg");```

**If you change the name of the image, make sure to also change the line 80 and the line 299 to the corresponding name.**

## Known issues
none
