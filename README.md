Source code and other stuff for a glow-in-the-dark display "printed" by a moving row of LEDs.  Works on an Arduino Mega.

TODO:  
- Serial interface to computer or Pi to receive messages to be printed
- Add details of motor to move the LED row
- Reuse Twitter-to-serial from LED cube to send messages that score high on "happiness" around the current geographic area.
- Add punctuations.  Maybe the entire first 128 ASCII characters?

Bugs:
Really weird one here.  Don't put more than 3 "!" in the string.  It will result in a failed upload with this error: 
"avrdude: stk500v2_ReceiveMessage(): timeout".  
For example "Hello World!!!!" or "Hello!!!! World" would both cause the upload to fail.
