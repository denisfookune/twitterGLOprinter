// font inspired by many 5x8 fonts from various sources
//const char font[64*5] PROGMEM = {
const char font[64*5]  = {
 0b01111110,
 0b10100001,
 0b10011001,
 0b10000101,
 0b01111110, //0
 
 0b00000000,
 0b10000010,
 0b11111111,
 0b10000000,
 0b00000000, //1 
 
 0b10000010,
 0b11000001,
 0b10100001,
 0b10010001,
 0b10001110, //2
 
 0b01000010,
 0b10000001,
 0b10001001,
 0b10001001,
 0b01110110, //3
 
 0b00011000,
 0b00010100,
 0b00010010,
 0b11111111,
 0b00010000, //4
 
 0b01001111,
 0b10001001,
 0b10001001,
 0b10001001,
 0b01110001, //5
 
 0b01111110,
 0b10001001,
 0b10001001,
 0b10001001,
 0b01110010, //6
 
 0b00000001,
 0b11000001,
 0b00110001,
 0b00001101,
 0b00000011, //7
 
 0b01110110,
 0b10001001,
 0b10001001,
 0b10001001,
 0b01110110, //8
 
 0b01000110,
 0b10001001,
 0b10001001,
 0b10001001,
 0b01111110, //9
 
 0b11111110,
 0b00001001,
 0b00001001,
 0b00001001,
 0b11111110, //A
 
 0b11111111,
 0b10001001,
 0b10001001,
 0b10001001,
 0b01110110, //B
 
 0b01111110,
 0b10000001,
 0b10000001,
 0b10000001,
 0b01000010, //C
 
 0b11111111,
 0b10000001,
 0b10000001,
 0b10000001,
 0b01111110, //D
 
 0b11111111,
 0b10001001,
 0b10001001,
 0b10001001,
 0b10000001, //E
 
 0b11111111,
 0b00001001,
 0b00001001,
 0b00001001,
 0b00000001, //F
 
 0b01111110,
 0b10000001,
 0b10000001,
 0b10010001,
 0b11110010, //G
 
 0b11111111,
 0b00001000,
 0b00001000,
 0b00001000,
 0b11111111, //H
 
 0b00000000,
 0b10000001,
 0b11111111,
 0b10000001,
 0b00000000, //I
 
 0b01100000,
 0b10000000,
 0b10000001,
 0b01111111,
 0b00000000, //J
 
 0b11111111,
 0b00001000,
 0b00010100,
 0b00100010,
 0b11000001, //K
 
 0b11111111,
 0b10000000,
 0b10000000,
 0b10000000,
 0b10000000, //L
 
 0b11111111,
 0b00000110,
 0b00111000,
 0b00000110,
 0b11111111, //M
 
 0b11111111,
 0b00000110,
 0b00011000,
 0b01100000,
 0b11111111, //N
 
 0b01111110,
 0b10000001,
 0b10000001,
 0b10000001,
 0b01111110, //O
 
 0b11111111,
 0b00001001,
 0b00001001,
 0b00001001,
 0b00000110, //P
 
 0b01111110,
 0b10000001,
 0b10100001,
 0b01000001,
 0b10111110, //Q
 
 0b11111111,
 0b00001001,
 0b00001001,
 0b00011001,
 0b11100110, //R
 
 0b01000110,
 0b10001001,
 0b10001001,
 0b10001001,
 0b01110010, //S
 
 0b00000001,
 0b00000001,
 0b11111111,
 0b00000001,
 0b00000001, //T
 
 0b01111111,
 0b10000000,
 0b10000000,
 0b10000000,
 0b01111111, //U
 
 0b00011111,
 0b01100000,
 0b10000000,
 0b01100000,
 0b00011111, //V
 
 0b11111111,
 0b01100000,
 0b00011100,
 0b01100000,
 0b11111111, //W
 
 0b11000011,
 0b00110100,
 0b00001000,
 0b00110100,
 0b11000011, //X
 
 0b00000011,
 0b00001100,
 0b11110000,
 0b00001100,
 0b00000011, //Y
 
 0b11000001,
 0b10100001,
 0b10011001,
 0b10000101,
 0b10000011, //Z
 
 0b00100000,
 0b01010100,
 0b01010100,
 0b01010100,
 0b01111000, //a
 
 0b01111111,
 0b01000100,
 0b01000100,
 0b01000100,
 0b00111000, //b
 
 0b00111000,
 0b01000100,
 0b01000100,
 0b01000100,
 0b00101000, //c
 
 0b00111000,
 0b01000100,
 0b01000100,
 0b01000100,
 0b01111111, //d
 
 0b00111000,
 0b01010100,
 0b01010100,
 0b01010100,
 0b01001000, //e
 
 0b00000100,
 0b01111110,
 0b00000101,
 0b00000001,
 0b00000000, //f
 
 0b10011000,
 0b10100100,
 0b10100100,
 0b10100100,
 0b01111000, //g
 
 0b01111111,
 0b00000100,
 0b00000100,
 0b00000100,
 0b01111000, //h
 
 0b00000000,
 0b00000000,
 0b01111010,
 0b00000000,
 0b00000000, //i
 
 0b00000000,
 0b01000000,
 0b10000000,
 0b01111010,
 0b00000000, //j
 
 0b01111111,
 0b00010000,
 0b00101000,
 0b01000100,
 0b00000000, //k
 
 0b00000000,
 0b00000000,
 0b01111111,
 0b00000000,
 0b00000000, //l
 
 0b01111000,
 0b00000100,
 0b00001000,
 0b00000100,
 0b01111000, //m
 
 0b01111100,
 0b00001000,
 0b00000100,
 0b00000100,
 0b01111000, //n
 
 0b00111000,
 0b01000100,
 0b01000100,
 0b01000100,
 0b00111000, //o
 
 0b11111100,
 0b00100100,
 0b00100100,
 0b00100100,
 0b00011000, //p
 
 0b00011000,
 0b00100100,
 0b00100100,
 0b00100100,
 0b11111100, //q
 
 0b01111100,
 0b00001000,
 0b00000100,
 0b00000100,
 0b00000100, //r
 
 0b01001000,
 0b01010100,
 0b01010100,
 0b01010100,
 0b00100100, //s
 
 0b00000000,
 0b00000100,
 0b01111111,
 0b01000100,
 0b00000000, //t
 
 0b00111100,
 0b01000000,
 0b01000000,
 0b01000000,
 0b00111100, //u
 
 0b00001100,
 0b00110000,
 0b01000000,
 0b00110000,
 0b00001100, //v
 
 0b00111100,
 0b01000000,
 0b00110000,
 0b01000000,
 0b00111100, //w
 
 0b01000100,
 0b00101000,
 0b00010000,
 0b00101000,
 0b01000100, //x
 
 0b10011100,
 0b10100000,
 0b10100000,
 0b10100000,
 0b01111100, //y
 
 0b01000100,
 0b01100100,
 0b01010100,
 0b01001100,
 0b01000100, //z
 
 0b00000000,
 0b00000000,
 0b00000000,
 0b00000000,
 0b00000000, //blank
 
 0b11111111,
 0b11111111,
 0b11111111,
 0b11111111,
 0b11111111  //unknown
};

int led_offset = 3;// Starting pin number for LEDs on the Arduino Mega
int interchar_delay = 50;//in ms

// Constants for the motor drive
int motor1 = 11;
int motor2 = 12;
#define MOTOR_FORWARD 1
#define MOTOR_BACKWARD -1
#define MOTOR_STOP 0
int motor_direction = MOTOR_FORWARD;// Forward

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  // Initializes the pins used by the LN298N controlling the motor.  
  pinMode(motor1, OUTPUT);     
  pinMode(motor2, OUTPUT); 

  // initialize the digital pin as an output.
  int led=0; // Pins 3 through 10 are wired
  for(led = 0; led < 8;led++){
    pinMode(led + led_offset, OUTPUT);     
  }
}

float read_bumper_voltage()
{
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);
  return voltage;

}

void go_forward()
{
  motor_direction = MOTOR_FORWARD;
  digitalWrite(motor1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(motor2, HIGH);   // turn the LED on (HIGH is the voltage level)
}

void go_backwards()
{
  motor_direction = MOTOR_BACKWARD;
  digitalWrite(motor1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(motor2, LOW);   // turn the LED on (HIGH is the voltage level)
}

void go_stop()
{
  motor_direction = MOTOR_STOP;
  digitalWrite(motor1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(motor2, LOW);   // turn the LED on (HIGH is the voltage level)
}


// TODO:  Turn everything off when reversing.
int check_bumper_reverse() {
  int retval = 0;
  if(read_bumper_voltage() < 2){
  // We hit an obstacle
  // Reverse direction
    go_backwards();
    delay(500); //Wait until we're out of range of obstacle
    retval = 1;
  }
  return retval;// Return 1 if we tripped
}

int check_bumper_stop() {
  int retval = 0;
  if(read_bumper_voltage() < 2){
    // We hit an obstacle
    go_stop();
    delay(500); //Wait until we're out of range of obstacle
    retval = 1;
  }
  return retval;
}


// Turns all the LEDs off, for a space between characters
void allLEDOff(){
  int led = 0;
  for(led = 0; led < 8; led++){
    digitalWrite(led + 3, LOW);   // turn the LED on (HIGH is the voltage level)    
  }
}

// Prepares the row of LEDs, based on the current 8bit line
// Each character is 8bit x 5
void setLEDLine(char line){
  int led = 0;
  // Finds each bit and determines if that LED needs to be on or off.
  for(led = 0; led < 8; led++){
    // Walks through each bit from the current font.
    // That tells us if the LED need to be on or off.
    if(line & (0x01 << led)){
      digitalWrite(led + led_offset, HIGH);
    } else {
      digitalWrite(led + led_offset, LOW);
    }
  }
}

// Prints out the character, line by line
// Each character is 8bit x 5
void printCharIndex(int index){
  int line = 0;
  for(line = 0; line < 5; line++){
    setLEDLine(font[(index * 5) + line]);
    delay(interchar_delay);
    // Checks if we reached the end while printing.
    check_bumper_reverse();
   }
   allLEDOff();
   delay(interchar_delay);  
}

// Translates the character into the appropriate index for the font array.
void printChar(char raw_c){
 int index = 0;
 
 if ((raw_c > 0x2F ) && (raw_c < 0x3A)){
   // Is it an number?
   index = raw_c - 0x30;// Maps to the font number list   
 } else if((raw_c > 0x40) && (raw_c < 0x5B)){
   // Is it an upper case letter?
   index = (raw_c - 0x41) + 10;// Accounts for the 10 numbers that are before the upper case letters
 } else if((raw_c > 0x61) && (raw_c < 0x7B)){
   // Is it a lower case letter?
   index = (raw_c - 0x61) + 10 + 26;// Accounts for the 10 numbers and upper case letters that come before the lower case letters.
 } else {
   // Not a valid character.  Print a space.
   index = 62;
 }
 printCharIndex(index);
}

void printMessage(String message){
  // 
  int i = 0;
  int messageLen = message.length();
  for(i = 0; i < messageLen; i++){
    printChar(message.charAt(i));
  }
}

int max_chars = 256;
#define MAX_CHARS 256
char serial_message[MAX_CHARS];// Fixed size string to accomodate a 140 character tweet.
int wait_for_message()
{
  while(Serial.available() == 0) // Wait for a message to arrive
  {
    delay(500);
  }
  
  int index = 0;
  char inChar = 0x00;
  
  // Read all data available until the predefined limit.
  while(Serial.available() > 0) 
   {
       inChar = Serial.read(); // consumes a character

      // Store only if we are within allowed bounds
       if(index < (MAX_CHARS -1)) 
       {
           serial_message[index] = inChar; // Store it
           index++; // Increment where to write next
       }
   }
   
   serial_message[index] = '\0'; // Null terminate the string
   Serial.write(serial_message);
   return index;
}


// the loop routine runs over and over again forever:
void loop() {
  unsigned int message_size = 0;

  // Waits for a message to come over the serial port
  // When this returns, we have a null terminated string in our global variable
  message_size = wait_for_message();
  
  // Starts the motor in the appropriate direction
  go_forward();
  
  // Print the message
  String message = String(serial_message);      
  printMessage(message);
  go_backwards();// Return home after a message is printed
  
  // Loop until we trip on the home bump
  while(check_bumper_stop() == 0);
    
  // Reset the position
  go_forward();
  delay(500);
  go_stop();

  // Loop back to wait for the next message  
}



