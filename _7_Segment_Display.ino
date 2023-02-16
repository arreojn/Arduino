//7-Segment Display
//You should now see the 7-segment display cycle from 0 to F

const int a=7; //a of 7-segment attach to digital pin 7
const int b=6; //b of 7-segment attach to digital pin 6
const int c=5; //c of 7-segment attach to digital pin 5
const int d=11;//d of 7-segment attach to digital pin 11
const int e=10;//e of 7-segment attach to digital pin 10
const int f=8;//f of 7-segment attach to digital pin 8
const int g=9;//g of 7-segment attach to digital pin 9
const int dp=4;//dp of 7-segment attach to digital pin 4

void setup()
{
  //loop over thisPin from 4 to 11 and set them all to output
  for(int thisPin = 4;thisPin <= 11;thisPin++)
  {
    pinMode(thisPin,OUTPUT);
  }
}

void loop()
{
  digital_1();//diaplay 1 to the 7-segment
  delay(1000);//wait for a second
  digital_2();//diaplay 2 to the 7-segment
  delay(1000); //wait for a second
  digital_3();//diaplay 3 to the 7-segment
  delay(1000); //wait for a second
  digital_4();//diaplay 4 to the 7-segment
  delay(1000); //wait for a second
  digital_5();//diaplay 5 to the 7-segment
  delay(1000); //wait for a second
  digital_6();//diaplay 6 to the 7-segment
  delay(1000); //wait for a second
  digital_7();//diaplay 7 to the 7-segment
  delay(1000); //wait for a second
  //digital_8();//diaplay 8 to the 7-segment
//  delay(1000); //wait for a second
}

void digital_1(void) //diaplay 1 to the 7-segment
{
  digitalWrite(a,HIGH);//turn the c of the 7-segment on
  digitalWrite(b,LOW);//turn the b of the 7-segment on
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
}
void digital_2(void) //diaplay 2 to the 7-segment
{
   digitalWrite(a,HIGH);//turn the c of the 7-segment on
  digitalWrite(b,LOW);//turn the b of the 7-segment on
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
}
void digital_3(void) //diaplay 3 to the 7-segment
{
    digitalWrite(a,LOW);//turn the c of the 7-segment on
  digitalWrite(b,HIGH);//turn the b of the 7-segment on
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
void digital_4(void) //diaplay 4 to the 7-segment
{
    digitalWrite(a,LOW);//turn the c of the 7-segment on
  digitalWrite(b,LOW);//turn the b of the 7-segment on
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
void digital_5(void) //diaplay 5 to the 7-segment
{
  digitalWrite(a,LOW);//turn the c of the 7-segment on
  digitalWrite(b,LOW);//turn the b of the 7-segment on
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
}
void digital_6(void) //diaplay 6 to the 7-segment
{
    digitalWrite(a,LOW);//turn the c of the 7-segment on
  digitalWrite(b,LOW);//turn the b of the 7-segment on
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
void digital_7(void) //diaplay 7 to the 7-segment
{
  digitalWrite(a,HIGH);//turn the c of the 7-segment on
  digitalWrite(b,LOW);//turn the b of the 7-segment on
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}