#include <IRremote.h>
#include <Stepper.h>
int RECV_PIN = 9;
IRrecv irrecv(RECV_PIN);
decode_results results;
const int stepsPerRevolution = 255;
int val=0;
Stepper myStepper(stepsPerRevolution, 10,12,11,13);
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  myStepper.setSpeed(60);
}

void loop()
{
  if (irrecv.decode(&results))
    {
     Serial.println(results.value, HEX);
     irrecv.resume(); // Receive the next value
    switch(results.value){
      case 0xFFA25D:
      //Clockwise 
      Serial.println(" CH-           ");  
     myStepper.step(stepsPerRevolution);
     delay(500);
        break;
         case 0xFFE21D:
         //Counterclockwise
        Serial.println(" CH+           "); 
      myStepper.step(-stepsPerRevolution);
      delay(500);
        break;
        
      case 0xFF629D:
      Serial.println(" CH           "); 
     //Clockwise & Counterclockwise
       myStepper.step(stepsPerRevolution);
       delay(500);
      myStepper.step(-stepsPerRevolution);
      delay(500);
        break;
     default:
    Serial.println("HHUA");
    }
}
}
