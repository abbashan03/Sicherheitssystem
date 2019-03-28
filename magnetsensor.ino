#include <IRremote.h>
IRsend irsend;

int strom = 10;
int Sensor = 8; // Deklaration des Sensor-Eingangspin
int val = 0; // Temporaere Variable

   
void setup ()
{
  pinMode (Sensor, INPUT) ;
  digitalWrite(10, HIGH);
  Serial.begin(9600);

  
}
   
void loop ()
{
  val = digitalRead (Sensor) ; 
   
  if (val == HIGH) 
  {
   Serial.write("Aktiv");  
  irsend.sendRC5(16743993, 10);
  }
  else {
  Serial.write("Nicht Aktiv");

  }
}
