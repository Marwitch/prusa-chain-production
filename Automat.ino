//=================================================
//            Automatic 3D Print V2.0
//              Created by: Marwitch
// Discord server: https://discord.gg/uCBUtgrcJW
//                Datum: 30.11.2023
//=================================================

//********* End stop *********
int Endstop = 2;

//********* Motor *********
int PUL=7; //define Pulse pin
int DIR=6; //define Direction pin
int ENA=5; //define Enable Pin

//********* LED *********
int Led = 3;

//********* Fans *********
int FAN = 4;

//=================================================

void setup() {
  
//********* Motory *********
  pinMode (PUL, OUTPUT);
  pinMode (DIR, OUTPUT);
  pinMode (ENA, OUTPUT);
  
//********* End stop *********
  pinMode(Endstop, INPUT_PULLUP);

//********* Led strip *********
  pinMode(Led, OUTPUT);
  digitalWrite(Led, HIGH);
  
//********* Fans *********
  pinMode(FAN, OUTPUT);
  digitalWrite(FAN, LOW);
}

//=================================================

void loop()
{
  if (digitalRead(Endstop) == HIGH)
  {
//********* ON Fan and light (led) *********

  digitalWrite (FAN, HIGH); // Ventilatory ON
  digitalWrite (Led, LOW); // led pasek ON
  delay(300000);            //  5 MINUT cekej (300000)
  
//********* Program pro motory *********

  for (int i=0; i<4000; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(800);
  }
  for (int i=0; i<200; i++)   //Motory vzad
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<200; i++)   //Motory vzad
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<200; i++)   //Motory vzad
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<200; i++)   //Motory vzad
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<200; i++)   //Motory vzad
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<200; i++)   //Motory vzad
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<200; i++)   //Motory vzad
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<200; i++)   //Motory vzad
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<200; i++)   //Motory vzad
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<200; i++)   //Motory vzad
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<200; i++)   //Motory vzad
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  
//==================================================================================================

  for (int i=0; i<8400; i++)   //Motory vzad rychle pred oklepanim
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(100);
  }
  for (int i=0; i<800; i++)   //Motory vzad oklep
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<500; i++)    //Motory vpred oklep
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<500; i++)   //Motory vzad oklep 2
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<500; i++)    //Motory vpred oklep
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<500; i++)   //Motory vzad oklep 2
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(500);
  }
  for (int i=0; i<800; i++)    //Motory vpred konec oklepu
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  for (int i=0; i<8100; i++)    //Motory vpred docisteni podlozky
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(100);
  }
  for (int i=0; i<8100; i++)   //Motory vzad rychle do HOME pozice
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(100);
  }
  for (int i=0; i<1800; i++)   //Motory vzad rychle do HOME pozice
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(1000);
  }
  digitalWrite(ENA,LOW); // Vypnuti motoru
  delay(1000);
  digitalWrite (FAN, LOW); // Ventilatory OFF;
  delay(1000);
  digitalWrite (Led, HIGH); // led pasek OFF;
  delay(500);
  }
}
