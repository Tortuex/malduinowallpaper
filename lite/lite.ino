/*
Copyright (c) 2017 Seytonic, Spacehuhn (Licensed under MIT)
For more information see: github.com/seytonic/malduino
*/

#include "Keyboard.h"
#include "Mouse.h"

#define blinkInterval 50
#define ledPin 3
#define buttonPin 6

int defaultDelay = 4;
int defaultCharDelay = 5;
int rMin = 0;
int rMax = 100;

bool ledOn = true;

void typeKey(int key){
  Keyboard.press(key);
  delay(defaultCharDelay);
  Keyboard.release(key);
}

void setup(){
  
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  
  if(digitalRead(buttonPin) == LOW){
    
    Keyboard.begin();
    Mouse.begin();
    
    /* ----- Begin-Script -----*/
       
    // This is a script to download and change the wallpaper in windows 10

    delay(defaultDelay);
    // In order to work, windows must be using the default app for opening photos

    delay(defaultDelay);
    delay(5000);

    delay(defaultDelay);
    // Note: The internet explorer method works usually for everyone but

    delay(defaultDelay);
    // If you want to use Chrome or Firefox instead of IE, remove 'iexplorer' from the following line

    delay(defaultDelay);

    // deletes old file if already present
    delay(defaultDelay);
    delay(100);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(100);
    Keyboard.print("cmd");

    delay(defaultDelay);
    delay(100);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);
    Keyboard.print("cd Documents");

    delay(defaultDelay);
    delay(100);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);
    Keyboard.print("erase /Q 01-rubberduck-hongkong.jpg"); // erase the old file

    delay(defaultDelay);
    delay(100);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll(); // closes the terminal

    // downloads the picture
    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_ESC);
    Keyboard.releaseAll();
    
    delay(defaultDelay);
    delay(500);
    Keyboard.print("iexplore http://www.thecuriosityworkshop.com/wp-content/uploads/2015/03/01-rubberduck-hongkong.jpg"); // browse to get the image

    delay(defaultDelay);
    delay(2500);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(2500);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(115);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(1000);
    
    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(300);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_ESC);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(300);

    delay(defaultDelay);
    // If you want to use Chrome, change 'Documents' to 'Downloads'

    delay(defaultDelay);
    // If you want to use Firefox, change 'Documents' to 'Pictures'

    delay(defaultDelay);
    Keyboard.print("01-rubberduck-hongkong.jpg"); // sets the name of the picture

    delay(defaultDelay);
    delay(800);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(1000);

    // change background

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_F10);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RIGHT_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RIGHT_ARROW);
    
    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    // close opened windows
    delay(defaultDelay);
    delay(300);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(300);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(300);

    // deletes the file
    delay(defaultDelay);
    delay(100);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(100);
    Keyboard.print("cmd");

    delay(defaultDelay);
    delay(100);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);
    Keyboard.print("cd Documents"); // goes to the file location

    delay(defaultDelay);
    delay(100);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);
    Keyboard.print("erase /Q 01-rubberduck-hongkong.jpg"); // erase the file

    delay(defaultDelay);
    delay(100);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll(); // closes the terminal

    
    /* ----- End-Script -----*/
    
    Keyboard.end();
  }
}

void loop(){
  ledOn = !ledOn;
  digitalWrite(ledPin, ledOn);
  delay(blinkInterval);
}
