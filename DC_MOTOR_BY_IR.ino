#include <IRremote.h>
int RECV_PIN = 9;
IRrecv irrecv(RECV_PIN);
decode_results results;
int motorplus=10;
int motorminus=11;
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
   pinMode(motorplus,OUTPUT);
   pinMode(motorminus,OUTPUT);
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
        digitalWrite(motorplus, LOW);
        digitalWrite(motorminus, HIGH);
        break;
         case 0xFFE21D:
         //Anticlockwise
         Serial.println(" CH+           "); 
        digitalWrite(motorplus, HIGH);
        digitalWrite(motorminus, LOW);
        break;
        case 0xFF6897:
        //Stop
        Serial.println(" 0          "); 
        digitalWrite(motorplus, LOW);
        digitalWrite(motorminus, LOW);
        break;
      case 0xFF629D:
      Serial.println(" CH           "); 
     //3Task Perform
        digitalWrite(motorplus, HIGH);
        digitalWrite(motorminus, LOW);
        delay(4000);
        digitalWrite(motorplus, LOW);
        digitalWrite(motorminus, LOW);
        delay(4000);
        digitalWrite(motorplus, LOW);
        digitalWrite(motorminus, HIGH);
       
        break;
     default:
    Serial.println("HHUA");
    }
}
}
