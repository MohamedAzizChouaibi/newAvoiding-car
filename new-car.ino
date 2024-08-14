#include<Servo.h>
 int tr= 6;
 int e=8;
int kg=2;
int lg=3;
int kd=4;
int ld=5;
Servo s ;
void setup() {
  for (int j =8 ; j<11 ; j++){
    pinMode(j, INPUT);}
    s.attach(7);
  s.write(90);
  Serial.begin(9600);
  for (int i=2;i<7;i++){
    pinMode(i, OUTPUT);}
    Serial.begin(9600);

  
  // put your setup code here, to run once:

}

void loop() { 
  float d=dis();
  Serial.println(d);
  if(d>=15){
    godem();  s.write(90);
   

  }
  ba: 
  float ll=lookLEFT(d);
  float lr=lookRight(d);
   if(ll>lr) 
    {
  
 
          gauche();
          }

   else if(ll<lr)
    {
      limin();
    }
    
    if (ll==lr){
      wa5er();
      delay(500);
      goto ba ;

    
        }
  
}
  // put your main code here, to run repeatedly:
float dis (){
  b1:
  digitalWrite(tr,0) ;
  delayMicroseconds(5) ;
  digitalWrite(tr,1) ;
  delayMicroseconds(10);
  digitalWrite(tr,0) ;
  delayMicroseconds(5);
   float t=pulseIn(e,1);
  float d=0.0343*t/2 ;
  if(d==0)
    goto b1;
  return(d)  ;}
void  godem (){
  digitalWrite(kg, 1);
  digitalWrite(lg, 0); 
  digitalWrite(kd, 1);
  digitalWrite(ld, 0); 
  }
  void  wa5er (){
  digitalWrite(kg, 0);
  digitalWrite(lg, 1); 
  digitalWrite(kd, 0);
  digitalWrite(ld, 1); }
  void  limin (){
  digitalWrite(kg, 0);
  digitalWrite(lg, 1); 
  digitalWrite(kd, 1);
  digitalWrite(ld, 0); }
   void  gauche(){
  digitalWrite(kg, 1);
  digitalWrite(lg, 0); 
  digitalWrite(kd, 0);
  digitalWrite(ld, 1); }

 void  stop(){
  digitalWrite(kg, 0);
  digitalWrite(lg, 0); 
  digitalWrite(kd, 0);
  digitalWrite(ld, 0); }
  
float lookRight (float d)
{s.write(0);
float lr=dis();
return lr;

}
float lookLEFT (float d)
{s.write(180);
float ll=dis();
return ll;
}



