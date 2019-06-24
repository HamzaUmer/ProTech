#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 

Keypad kpd = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
int redled=10;
int greenled=11;
int blueled=12;
int yellowled=13;
void setup(){
   pinMode(redled,OUTPUT);
   pinMode(greenled,OUTPUT);
   pinMode(blueled,OUTPUT);
   pinMode(yellowled,OUTPUT);
  Serial.begin(9600);
}
  
void loop(){
  char key = kpd.getKey();
  if(key)  // Check for a valid key.
  {
    switch (key)
    {
      case '1':
        digitalWrite(redled, HIGH);
        digitalWrite(greenled, LOW);
        digitalWrite(blueled, LOW);
        digitalWrite(yellowled, LOW);
        break;
              case '2':
        digitalWrite(redled, LOW);
        digitalWrite(greenled, HIGH);
        digitalWrite(blueled, LOW);
        digitalWrite(yellowled, LOW);
        break;
              case '3':
        digitalWrite(redled, LOW);
        digitalWrite(greenled, LOW);
        digitalWrite(blueled, HIGH);
        digitalWrite(yellowled, LOW);
        break;
              case '4':
        digitalWrite(redled, LOW);
        digitalWrite(greenled, LOW);
        digitalWrite(blueled, LOW);
        digitalWrite(yellowled, HIGH);
        break;
              case '5':
        digitalWrite(redled, HIGH);
        digitalWrite(greenled, LOW);
        digitalWrite(blueled, HIGH);
        digitalWrite(yellowled, LOW);
        break;
        case '6':
        digitalWrite(redled, LOW);
        digitalWrite(greenled, HIGH);
        digitalWrite(blueled, LOW);
        digitalWrite(yellowled, HIGH);
        break;
        case '7':
        digitalWrite(redled, HIGH);
        digitalWrite(greenled, HIGH);
        digitalWrite(blueled, LOW);
        digitalWrite(yellowled, LOW);
        break;
        case '8':
        digitalWrite(redled, LOW);
        digitalWrite(greenled, LOW);
        digitalWrite(blueled, HIGH);
        digitalWrite(yellowled, HIGH);
        break;
        case '9':
        digitalWrite(blueled, LOW);
        digitalWrite(yellowled, LOW);
        digitalWrite(redled, HIGH);
        delay(1000);
        digitalWrite(redled, LOW);
        delay(1000);
        digitalWrite(greenled, HIGH);
        delay(1000);
        digitalWrite(greenled, LOW);
        delay(1000);
        digitalWrite(blueled, HIGH);
        delay(1000);
        digitalWrite(blueled, LOW);
        delay(1000);
        digitalWrite(yellowled, HIGH);
        delay(1000);
        digitalWrite(yellowled, LOW);
        delay(1000);
        break;
        case '#':
        digitalWrite(redled, HIGH);
        digitalWrite(greenled, HIGH);
        digitalWrite(blueled, HIGH);
        digitalWrite(yellowled, HIGH);
        break;
        case '0':
        digitalWrite(redled, LOW);
        digitalWrite(greenled, LOW);
        digitalWrite(blueled, LOW);
        digitalWrite(yellowled, LOW);
        break;
       default:
      Serial.println(key);
    }
  }
}
