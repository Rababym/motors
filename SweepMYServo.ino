

#include <Servo.h>

int pos = 0; 
int pos1 = 0; 
int pos2 = 0; 
int pos3 = 0; 
int pos4 = 0; 
int pos5 = 0;

Servo myservo; 
Servo myservo1; 
Servo myservo2; 
Servo myservo3; 
Servo myservo4; 
Servo myservo5;

   
void setup() {
  myservo.attach(8); 
  myservo1.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
  myservo4.attach(12);
  myservo5.attach(13); 
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                      
  }
   for (pos1 = 0; pos1 <= 180; pos1 += 1) { 
    myservo1.write(pos1);              
    delay(15);                       
  }
  for (pos1 = 180; pos1 >= 0; pos1 -= 1) { 
    myservo1.write(pos1);              
    delay(15);                      
  }
    for (pos2 = 0; pos2 <= 180; pos2 += 1) { 
    myservo2.write(pos2);              
    delay(15);                       
  }
  for (pos2 = 180; pos2 >= 0; pos2 -= 1) { 
    myservo2.write(pos2);              
    delay(15);                      
  }
    for (pos3 = 0; pos3 <= 180; pos3 += 1) { 
    myservo3.write(pos3);              
    delay(15);                       
  }
  for (pos3 = 180; pos3 >= 0; pos3 -= 1) { 
    myservo3.write(pos3);              
    delay(15);  
                        
  }  for (pos4 = 0; pos4 <= 180; pos4 += 1) { 
    myservo4.write(pos4);              
    delay(15);                       
  }
  for (pos4 = 180; pos4 >= 0; pos4 -= 1) { 
    myservo4.write(pos4);              
    delay(15);                      
  }
     for (pos5 = 0; pos5 <= 180; pos5 += 1) { 
    myservo5.write(pos5);              
    delay(15);                       
  }
  for (pos5 = 180; pos5 >= 0; pos5 -= 1) { 
    myservo5.write(pos5);              
    delay(15);                      
  }
  
}
