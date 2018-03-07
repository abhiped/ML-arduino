#include<Servo.h>
Servo myservoY; // Roll
String myString;
int incomingByte=0;
void setup() {
  
    myservoY.attach(10); // Attach Y servo to pin 9
  // put your setup code here, to run once:
Serial.begin(115200);
myservoY.write(90);
/*myString=Serial.read();
if(myString==1)
{
  myservoY.write(180); 
}
else if(myString==2)
{
  myservoY.write(0); 
}*/
}

void loop() {
  if (Serial.available() > 0) /*{
                // read the incoming byte:
                incomingByte = Serial.read();

                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingByte);
        }*/
        {
          myString=Serial.readString();
if(abs(myString.toInt())==1)
{
 myservoY.write(125);
}
else if(abs(myString.toInt())==2)
{
  myservoY.write(55); 
}
        }

}
