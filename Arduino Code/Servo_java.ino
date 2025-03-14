
#include <Servo.h>
Servo servo;
int angle=10;
int byteRead;
void setup() {
  Serial.begin(9600);
   servo.attach(9);
  servo.write(angle);
}  

void loop() {

 if(Serial.available( )>0){
  byteRead = Serial.read();
  Serial.write(byteRead);
if ( (byteRead)=='1')
   for(angle = 10; angle < 180; angle+=10)  
  {                                  
    servo.write(angle);               
    delay(50);                   
  } 
   else  if ( (byteRead)=='2')    
   for(angle = 180; angle > 10; angle-=10)  
  {                                
    servo.write(angle);           
    delay(50);       
  } 
  }
    delay(700);
}
