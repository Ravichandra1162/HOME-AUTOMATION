#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

#define FIREBASE_HOST "singareni0-home-autmation-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH "sKQESSE7a1HZ2bQ7c4ScwzixhcAMsDySxRKV4Wa8"
#define WIFI_SSID "iotproject"
#define WIFI_PASSWORD "iotproject01"

int d1=D6;
int d2=D7;
int d3=D5;
int d4=D1;


int i,j,k,l,u,v;
int m,n,o,p;
int q,r,s,z,t;
void setup() 
{
Serial.begin(9600);

pinMode(d1,OUTPUT);
pinMode(d2,OUTPUT);
pinMode(d3,OUTPUT);
pinMode(d4,OUTPUT);

digitalWrite(d1,LOW);
digitalWrite(d3,LOW);
digitalWrite(d2,LOW);
digitalWrite(d4,LOW);




WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    Serial.print("Connecting");
    while(WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        delay(500);
      }
      Serial.println();
      Serial.print("connected: ");
      Serial.println(WiFi.localIP());

      Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);  

  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D1OFF",s);
  s++;
  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D2OFF",j);
  j++;
  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D3OFF",l);
  l++;
  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D4OFF",t);
t++;
}

void loop() 
{

   if(Firebase.failed())
     {
       Serial.print("Firebase error");
       Serial.println(Firebase.error());
     }
     


     

  if(Firebase.getString("HOMEAUTOMATIONSINGARENI/DEVICE1") == "\"ON\"")
  {
  digitalWrite(d1, HIGH);
  Serial.println("DEVICE_1 ON");
  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D1ON",i);
  i++;
  }
  
  if(Firebase.getString("HOMEAUTOMATIONSINGARENI/DEVICE1") == "\"OFF\"")
  {
  digitalWrite(d1, LOW);
  Serial.println("DEVICE_1 OFF");
  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D1OFF",i);
  i++;
  }

  if(Firebase.getString("HOMEAUTOMATIONSINGARENI/DEVICE2") == "\"ON\"")
  {
  digitalWrite(d2, HIGH);
  Serial.println("DEVICE_2 ON");
  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D2ON",i);
  i++;
  }
  
  if(Firebase.getString("HOMEAUTOMATIONSINGARENI/DEVICE2") == "\"OFF\"")
  {
  digitalWrite(d2, LOW);
  Serial.println("DEVICE_2 OFF");
  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D2OFF",i);
  i++;
  }

  if(Firebase.getString("HOMEAUTOMATIONSINGARENI/DEVICE3") == "\"ON\"")
  {
  digitalWrite(d3, HIGH);
  Serial.println("DEVICE_3 ON");
  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D3ON",i);
  i++;
  }
  
  if(Firebase.getString("HOMEAUTOMATIONSINGARENI/DEVICE3") == "\"OFF\"")
  {
  digitalWrite(d3, LOW);
  Serial.println("DEVICE_3 OFF");
  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D3OFF",i);
  i++;
  } 

     if(Firebase.getString("HOMEAUTOMATIONSINGARENI/DEVICE4") == "\"ON\"")
  {
  digitalWrite(d4, HIGH);
  Serial.println("DEVICE_4 ON");
  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D4ON",i);
  i++;
  }
  
  if(Firebase.getString("HOMEAUTOMATIONSINGARENI/DEVICE4") == "\"OFF\"")
  {
  digitalWrite(d4, LOW);
  Serial.println("DEVICE_4 OFF");
  Firebase.setFloat ("HOMEAUTOMATIONSINGARENI/D4OFF",i);
  i++;
  }



}
