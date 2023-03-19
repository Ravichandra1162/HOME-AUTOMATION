#include<SoftwareSerial.h>
int in1=5;
int in2=6;
int in3=7;
int in4=8;
int d1=9;
int d2=10;
int d3=11;
int d4=12;


void setup() {
Serial.begin(9600);

pinMode(d1,OUTPUT);
pinMode(d2,OUTPUT);
pinMode(d3,OUTPUT);
pinMode(d4,OUTPUT);

pinMode(in1,INPUT);
pinMode(in2,INPUT);
pinMode(in3,INPUT);
pinMode(in4,INPUT);

digitalWrite(d1,LOW);
digitalWrite(d3,LOW);
digitalWrite(d2,LOW);
digitalWrite(d4,LOW);

}

void loop()
{

Serial.print("D1:");
Serial.println(digitalRead(in1));
Serial.print("D2:");
Serial.println(digitalRead(in2));
Serial.print("D3:");
Serial.println(digitalRead(in3));
Serial.print("D4:");
Serial.println(digitalRead(in4));
Serial.println();
delay(500);

if(!digitalRead(in1))
{
digitalWrite(d1,LOW);
Serial.println("D1-OFF");
}
if(!digitalRead(in2))
{
digitalWrite(d2,LOW);
Serial.println("D2-OFF");
}

if(!digitalRead(in3))
{
digitalWrite(d3,LOW);
Serial.println("D3-OFF");
}
if(!digitalRead(in4))
{
digitalWrite(d4,LOW);
Serial.println("D4-OFF");
}

if(digitalRead(in1))
{
digitalWrite(d1,HIGH);
Serial.println("D1-ON");
}
if(digitalRead(in2))
{
digitalWrite(d2,HIGH);
Serial.println("D2-ON");
}
if(digitalRead(in3))
{
digitalWrite(d3,HIGH);
Serial.println("D3-ON");
}
if(digitalRead(in4))
{
digitalWrite(d4,HIGH);
Serial.println("D4-ON");
}
}
