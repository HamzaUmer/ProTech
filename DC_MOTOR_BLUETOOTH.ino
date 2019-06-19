int motorplus = 3; 
int motorminus = 4; 
int state;
int flag=0;        //makes sure that the serial only prints once the state
 
void setup() {
    // sets the pins as outputs:
    pinMode(motorplus, OUTPUT);
    pinMode(motorminus, OUTPUT);
    
    // initialize serial communication at 9600 bits per second:
    Serial.begin(9600);
}
 
void loop() {
    //if some date is sent, reads it and saves in state
    if(Serial.available() > 0){     
      state = Serial.read();   
      flag=0;
    }   
    // if the state is '0' the DC motor will turn off
    if (state == '0') {
        digitalWrite(motorplus, LOW); 
        digitalWrite(motorminus, LOW); 
        if(flag == 0){
          Serial.println("Motor: off");
          flag=1;
        }
    }
    // if the state is '1' the motor will turn right
    else if (state == '1') {
        digitalWrite(motorplus, LOW); 
        digitalWrite(motorminus, HIGH); 
        if(flag == 0){
          Serial.println("Motor: right");
          flag=1;
        }
    }
    // if the state is '2' the motor will turn left
    else if (state == '2') {
        digitalWrite(motorplus, HIGH); // 
        digitalWrite(motorminus, LOW); // 
        if(flag == 0){
          Serial.println("Motor: left");
          flag=1;
        }
    }
}
