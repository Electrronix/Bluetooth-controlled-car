//made by- Varnit Goswami
//username - Electrronix


#include <SoftwareSerial.h>

SoftwareSerial BT(0, 1); //TX, RX respetively
String readvoice;

void setup() {
 BT.begin(9600);
 Serial.begin(9600);
   pinMode(3,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(13,OUTPUT);

}
//-----------------------------------------------------------------------// 
void loop()
{
  while (BT.available())
  {  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable
  char c = BT.read(); //Conduct a serial read
  readvoice += c; //build the string- "forward", "reverse", "left" and "right"
  } 
  if (readvoice.length() > 0)
  {
    Serial.println(readvoice);

  if(readvoice == "*forward#")
  {
   Serial.println("Forward ");
   digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
   
   digitalWrite(8, HIGH);
   digitalWrite(3, LOW);
    delay(100);
  }

  else if(readvoice == "*back#")
  {
    Serial.println("back");
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   
   digitalWrite(3, HIGH);
   digitalWrite(8, LOW);
    delay(100);
  }

  else if (readvoice == "*left#")
  {
   Serial.println("left");
   digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
   
   digitalWrite(3, HIGH);
   digitalWrite(8, LOW);
    delay(100);
  
  }

 else if ( readvoice == "*right#")
 {
    Serial.println("right");
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   
   digitalWrite(8, HIGH);
   digitalWrite(3, LOW);
    delay(100);
 }

 else  (readvoice == "*stop#")
 {
  Serial.print("stoped");
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   
   digitalWrite(3, LOW);
   digitalWrite(8, LOW);
   digitalWrite(13,HIGH);
   delay (100);
 }
  }
}

/*char data;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(13,OUTPUT);
  
  // put your setup code here, to run once:
Serial.begin(9600);
 
}


void loop() {
  
  // put your main code here, to run repeatedly:
   if (Serial.available())
   {
   data= Serial.read();
   Serial.println(data);
   
   if(data=='F')
   forward();
   else if(data=='B')
   back();
   else if(data=='L')
   left();
   else if(data=='R')
   right();
   else if(data=='G')
   forwardleft();
   else if(data=='I')
   forwardright();
   else if(data=='H')
   backleft();
   else if(data=='J')
   backright();
   else
   stops();
   delay(0);
   
   }
}

void forward()
{
   Serial.println("Forward ");
   digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
   
   digitalWrite(8, HIGH);
   digitalWrite(3, LOW);
     }

void back()
{
    Serial.println("back");
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   
   digitalWrite(3, HIGH);
   digitalWrite(8, LOW);
  }

void left()
{  Serial.println("left");
   digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
   
   digitalWrite(3, HIGH);
   digitalWrite(8, LOW);
  }

void right()
{  Serial.println("right");
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   
   digitalWrite(8, HIGH);
   digitalWrite(3, LOW);
  }

void forwardleft()
{   Serial.println("Forwardleft");
     digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   
   digitalWrite(3, HIGH);
   digitalWrite(8, LOW);
  }

void forwardright()
{    Serial.println("forwardright");
     digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   
   digitalWrite(3, LOW);
   digitalWrite(8, LOW);
  }

void backleft()
{    Serial.println("backleft");
     digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   
   digitalWrite(8, HIGH);
   digitalWrite(3, LOW);
  }

void backright()
{    Serial.println("backright");
     digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
   
   digitalWrite(3, LOW);
   digitalWrite(8, LOW);
  }
void stops()
{
  Serial.print("stoped");
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   
   digitalWrite(3, LOW);
   digitalWrite(8, LOW);
   digitalWrite(13,HIGH);
  }
*/
 /* void loop()
{
  if (Serial.available())
   {
   data= Serial.read();
   Serial.println(data);
   
   if(data=='F')
   forward();
   else if(data=='B')
   back();
   else if(data=='L')
   left();
   else if(data=='R')
   right();
    else
   stops();
   delay(0);
   
   }
}

void forward()
{
   Serial.println("Forward ");
   digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
   
   digitalWrite(8, HIGH);
   digitalWrite(3, LOW);
     }

void back()
{
    Serial.println("back");
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   
   digitalWrite(3, HIGH);
   digitalWrite(8, LOW);
  }

void left()
{  Serial.println("left");
   digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
   
 
  }

void right()
{  Serial.println("right");
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   
   digitalWrite(8, HIGH);
   digitalWrite(3, LOW);
  }

void stops()
{
  Serial.print("stoped");
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   
   digitalWrite(3, LOW);
   digitalWrite(8, LOW);
   digitalWrite(13,HIGH);
  }*/
