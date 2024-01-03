#define BLYNK_PRINT Serial  
#define BLYNK_TEMPLATE_ID "TMPL3k-K54U20"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#include <DHT.h>
#include <BlynkSimpleEsp8266.h>
#include<ESP8266WiFi.h>
char auth[] ="I7HyCJeMn2zVprJ0SkAm2zUOmxS6CIXd";               //Authentication code sent by Blynk
char ssid[] = "Ritu";                       //WiFi SSID
char pass[] = "archi230902";                       //WiFi Password
int readD1;
int moisturesensor;

#define DHTPIN 2

#define DHTTYPE DHT11
int Pin_D1 = D0 ;
int Pin_D3 = D3;
const int dry = 700; // value for dry sensor
const int wet = 200; // value for wet sensor
DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;
void setup()

{

  Serial.begin(9600);

  pinMode(Pin_D3,OUTPUT);

  pinMode(Pin_D1,OUTPUT);
  pinMode(A0,INPUT);

  dht.begin();

  timer.setInterval(1000L, sendSensor);

  Blynk.begin(auth, ssid, pass);

}
void sendSensor()

{

  float h = dht.readHumidity();

  float t = dht.readTemperature();

  Blynk.virtualWrite(V6, t);

  Blynk.virtualWrite(V5 , h);

}

void loop()

{

  Blynk.run();

  digitalWrite(Pin_D3, HIGH);   

  delay(100);                    

  readD1 = analogRead(0);   

  digitalWrite(Pin_D3, LOW);   

  delay(100); 
  Serial.print("sensor 1 = ");  
  Serial.print(readD1);
  if (readD1<=500)

   {

    digitalWrite(Pin_D1,LOW);
    Serial.print("does not need water");
    delay(1000);
    
    Blynk.logEvent("stopped","Watering the plant is complete");
    

    }

  if (readD1>500)

   { 

    digitalWrite(Pin_D1,HIGH);
    Serial.print("need water");
    Blynk.notify("Water your plants"); 
    delay(1000);
    Blynk.logEvent("watering_","Plant is being watered");
    

    }
   Blynk.virtualWrite(V2,readD1 );  // to Blynk server
   timer.run(); 

}
