// C++ code
//

int off = 2500 ;
int on = 500 ;


void setup()
{ 
  
pinMode(5,OUTPUT);
pinMode(7,OUTPUT);
pinMode(9,OUTPUT);


                

  
  }

void loop()
{
  digitalWrite(5 ,1);
  delay (2500);
  
  
  digitalWrite(7 ,1);
  delay(on);
  digitalWrite(7 ,0);
  delay(on);
  digitalWrite(7 ,1);
  delay(on);
  digitalWrite(7 ,0);
  delay(on);
  digitalWrite(7 ,1);
  delay(on);
  digitalWrite(7 ,0);
  digitalWrite(5 ,0);
  
  digitalWrite(9 ,1);
  delay(on);
  digitalWrite(9 ,0);
  delay(off);
  
}