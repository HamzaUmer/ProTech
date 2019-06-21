#include <IRremote.h>
#include <Servo.h>
int RECV_PIN = 9;
IRrecv irrecv(RECV_PIN);
decode_results results;
Servo servo_test;
int angle = 0;
void setup()
{
  irrecv.enableIRIn(); // Start the receiver
  servo_test.attach(10);
}

void loop()
{
  if (irrecv.decode(&results))
    {
     Serial.println(results.value, HEX);
     irrecv.resume(); // Receive the next value
    switch(results.value){
 case 0xFFA25D:
      //0degree to 90 degree
      Serial.println(" CH-           "); 
  for(angle = 0; angle < 90; angle += 1)    // command to move from 0 degrees to 180 degrees 
  {                                  
    servo_test.write(angle);                 //command to rotate the servo to the specified angle
    delay(5);                       
  } 
 
  delay(1000);
  
  for(angle = 90; angle>=1; angle-=5)     // command to move from 180 degrees to 0 degrees 
  {                                
    servo_test.write(angle);              //command to rotate the servo to the specified angle
    delay(5);                       
  } 

    delay(1000);
        break;
      //0degree to 180degree
              case 0xFFE21D:
      Serial.println(" CH+           "); 
  for(angle = 0; angle < 180; angle += 1)    // command to move from 0 degrees to 180 degrees 
  {                                  
    servo_test.write(angle);                 //command to rotate the servo to the specified angle
    delay(15);                       
  } 
 
  delay(1000);
  
  for(angle = 180; angle>=1; angle-=5)     // command to move from 180 degrees to 0 degrees 
  {                                
    servo_test.write(angle);              //command to rotate the servo to the specified angle
    delay(5);                       
  } 

    delay(1000);
        break;
              case 0xFF629D:
       //0 degree to 90 degree then 180 degree
       Serial.println(" CH           ");
  for(angle = 0; angle < 90; angle += 1)    // command to move from 0 degrees to 180 degrees 
  {                                  
    servo_test.write(angle);                 //command to rotate the servo to the specified angle
    delay(15);                       
  } 
 
  delay(1000);
  
  for(angle = 90; angle>=1; angle-=5)     // command to move from 180 degrees to 0 degrees 
  {                                
    servo_test.write(angle);              //command to rotate the servo to the specified angle
    delay(5);                       
  } 

    delay(1000);
      for(angle = 0; angle < 180; angle += 1)     // command to move from 180 degrees to 0 degrees 
  {                                
    servo_test.write(angle);              //command to rotate the servo to the specified angle
    delay(5);                       
  } 

    delay(1000);
          for(angle = 180; angle>=1; angle-=5)     // command to move from 180 degrees to 0 degrees 
  {                                
    servo_test.write(angle);              //command to rotate the servo to the specified angle
    delay(5);                       
  } 

    delay(1000);
        break;
        default:
    Serial.println("HHUA");
    }
}
}
