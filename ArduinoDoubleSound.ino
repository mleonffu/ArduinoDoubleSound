
/*
note that "pin6" dose not work for "secound layer"
 
 */




//PIns////
const int buzzerPin = 8;
const int green = 9;
const int blue = 10;
const int red = 11;
const int pin2 = 2;
const int pin3 = 3;
const int pin4 = 4;
const int pin5 = 5;
const int pin6 = 6;
const int pin12 = 12;
const int pin13 = 13;
const int pin7 = 7;
const int pin1 = 1;

////other tihngs////
int counter = 0;
int baka5 = 100;
int baka7 = 0;
int songsel = 0;
int songnumber = 0;
int trigger = 1;
int baka100 = 100;
int anypressed = 0;
int baka101 = 0;
int baka9000 = 1901;
int bakadown = 1;
int bakaup = 0;
int bakatemp = 0;
int bakarate = 25;
int bakatune = 0;
int anynumber = 0;
int bakapole = 0;
int bakapoletrigger = 0;

void setup()
{
  //Setup pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,INPUT);
  pinMode(pin3,INPUT);
  pinMode(pin4,INPUT);
  pinMode(pin5,INPUT);
  pinMode(pin6,INPUT);
  pinMode(pin12,INPUT);
  pinMode(pin13,INPUT);
  pinMode(pin7,INPUT);
}

void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);

  delay(duration);

  //Stop tone on buzzerPin
  noTone(buzzerPin);
}

#include "Arduino.h"
#include "tonesrefer.h"
////////////////////////////////////////SONG SELECT!/////////////////////////////////////////
void loop(){

  startup();

  //buttons any prssed

  anypressed = (HIGH == digitalRead(pin12)) +  (HIGH == digitalRead(pin7)) + (HIGH == digitalRead(pin2)) + (HIGH == digitalRead(pin3)) + (HIGH == digitalRead(pin4)) + (HIGH == digitalRead(pin5)) + (HIGH == digitalRead(pin6) + HIGH == digitalRead(pin13) + HIGH == digitalRead(pin1));

//Mute layer///////////////////////////////////////////////

  if(anypressed >= 2 && HIGH == digitalRead(pin12)){
    if(HIGH == digitalRead(pin2))
     {
       songsel = 10;
     }
  }
  if(anypressed >= 2 && HIGH == digitalRead(pin12)){
    if(HIGH == digitalRead(pin3))
    {
      songsel = 11;
    }
  }
  if(anypressed >= 2 && HIGH == digitalRead(pin12)){
    if(HIGH == digitalRead(pin4))
    {
      songsel = 12;
    }
  }

  //song select layer two  ////////////////////////////////////////////       
  //layer two songselect 1
  if(anypressed >= 2 && HIGH == digitalRead(pin13)){
    if(HIGH == digitalRead(pin2))
    {
      songsel = 6;
    }
  }

  //layer 2 song select 2
  if(anypressed >= 2 && HIGH == digitalRead(pin13)){
    if(HIGH == digitalRead(pin3))
    {
      songsel = 7;
    }
  }
  //layer 2 song select 3
  if(anypressed >= 2 && HIGH == digitalRead(pin13)){
    if(HIGH == digitalRead(pin4))
    {
      songsel = 8;
    }
  }
  if(anypressed >= 2 && HIGH == digitalRead(pin13)){
    if(HIGH == digitalRead(pin5))
    {
      songsel = 9;
    }
  }

  //song select first layper  ////////////////////////////////////////////       
  if(anypressed == 1){
    //reset
    if(HIGH == digitalRead(pin12))
    {
      songsel = 0;
    }

    //song sellct 1
    if(HIGH == digitalRead(pin2))
    {
      songsel = 1;
    }

    //song selct 2
    if(HIGH == digitalRead(pin3))
    {
      songsel = 2;
    }

    //song select 3
    if(HIGH == digitalRead(pin4))
    {
      songsel = 3;
    }

    //song select 4
    if(HIGH == digitalRead(pin5))
    {
      songsel = 4;
    }

    //song select 5
    if(HIGH == digitalRead(pin6))
    {
      songsel = 5;
    }
  }
  //none = 0 canon = 1 random = 2 randomness2 = 3 climinb = 4 climbing with steps = 5 climbreal = 6 bounce = 7 tune = 8 secert door = 9 mute = 10 unmuet = 11
  songnumber = songsel; //replace that number with waht ever song you want 

  if(songnumber == 0){
    digitalWrite(red,HIGH);
    delay(quart);
    digitalWrite(blue,LOW);
    delay(quart);
    digitalWrite(blue,HIGH);
    
  }
  if(songnumber == 1){
    canon();
  }
  if(songnumber == 2){
    randomness();
  }
  if(songnumber == 3){
    randomness2();
  }
  if(songnumber == 4){
    climb();
  }
  if(songnumber == 5){
    climbstep();
  }
  if(songnumber == 6){
    climbreal();
  }
  if(songnumber == 7){
    bounce();
  }
  if(songnumber == 8){
    tune();
  }
  if(songnumber == 9){
    door();
  }
  if(songnumber == 10){
    bakamute();
  }
  if(songnumber == 11){
    bakaunmute();
  }
  if(songnumber == 12){
    bakachange();
  }
} 
//////////////////////////////////////////SONG SLEECT THING!////////////////////////////////////
/////canon in c song/////

void startup(){ 
  if(trigger == 1)
  {
    digitalWrite(green,HIGH);
    beep(c4,quart);
    delay(quart);
    digitalWrite(red,HIGH);
    beep(e4,quart);
    delay(quart);
    digitalWrite(blue,HIGH);
    beep(g4,quart);
    delay(quart);
    delay(whole);
    digitalWrite(blue,LOW);
    digitalWrite(red,LOW); 
    digitalWrite(green,LOW);
    trigger = trigger + 1;
  }
}

void canon(){
  
whole = 2000;
half = 1000;
quart = 500;
eith = 250;
sis = 125;
  

  first();
  first();
  number2();
  number3();
  delay(eith);
  number4();
  number5();

}
void first()
{

  beep(e5,half);
  beep(d5,half);
  beep(c5,half);
  beep(b4,half);
  beep(a4,half);
  beep(g4,half);
  beep(a4,half);
  beep(b4,half);

}
void number2(){

  beep(c5,eith);
  beep(b4,eith);
  beep(c5,eith);
  beep(e4,eith);
  beep(g4,quart);
  beep(b4,quart);
  beep(c5,quart);
  beep(e5,quart);
  beep(g5,quart);
  beep(g5,eith);
  beep(a5,eith);
  beep(f5,eith);
  beep(e5,eith);
  beep(d5,eith);
  beep(f5,eith);
  beep(e5,eith);
  beep(d5,eith);
  beep(c5,eith);
  beep(b4,eith);
  beep(a4,eith);
  beep(g4,eith);
  beep(f4,eith);
  beep(a4,eith);
  beep(g4,eith);
  beep(a4,eith);
  beep(b4,eith);
  beep(g4,eith);

}
void number3(){

  dd5();
  ee5();
  ff5();
  gg5();
  dd5();
  gg5();
  ff5();
  ee5();
  aa5();
  gg5();
  ff5();
  gg5();
  ff5();
  ee5();
  dd5();
  cc5();
  gg5();
  aa5();
  bb5();
  beep(c6,eith);
  bb5();
  aa5();
  gg5();
  ff5();
  ee5();
  dd5();
  aa5();
  gg5();
  aa5();
  gg5();
  ff5();

}
void number4(){

  ee5();
  eee5();
  fff5();
  gg5();
  eee5();
  fff5();
  gg5();
  beep(g4,sis);
  beep(a4,sis);
  beep(b4,sis);
  ccc5();
  ddd5();
  eee5();
  fff5();
  ee5();
  ccc5();
  ddd5();
  ee5();
  beep(e4,sis);
  beep(f4,sis);
  beep(g4,sis);
  beep(a4,sis);
  beep(g4,sis);
  beep(f4,sis);
  beep(g4,quart);
}
void number5(){

  aaa4();
  ggg4();
  ff4();
  eee4();
  ddd4();
  eee4();
  ddd4();
  ccc4();
  ddd4();
  eee4();
  fff4();
  ggg4();
  aaa4();


}

void randomness() //random 
{
  int baka10 = random(1000);

  beep(baka10, random(250));

  delay(1);
}

void randomness2() //random with highpicth low time and low pitch hightime
{
  int baka10 = random(1000);

  beep(baka10, abs(baka10 - 1000));

  delay(1);

}

void climb(){ //climbing pitches

  if(baka5 >= 1000){
    baka5 = baka5 - 900;
    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);

  }
  else{
    baka5 = baka5 + 25;
    if(baka5 >= 100){
      digitalWrite(red,HIGH);
    }
    if(baka5 >= 450){
      digitalWrite(blue,HIGH);
    }

  }

  beep(baka5,50);
  digitalWrite(red,HIGH);
  delay(250);


  beep(baka5 + 100,50);
  digitalWrite(blue,HIGH);
  delay(250);

  beep(baka5 + 200,50);
  digitalWrite(red,LOW);
  delay(250);

  beep(baka5 + 300,50);
  digitalWrite(blue,LOW);
  delay(250);

}

void climbstep(){ //chlimbing with steps

  if(baka5 >= 1500){
    baka5 = baka5 - 650;
    baka7 = baka7 + 10;
    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
    digitalWrite(green,LOW);
    if(baka7 >= 1500){
      baka7 = baka7 - 1450;
    }
    else{
    }
  }
  else{
    baka5 = baka5 + 100 + baka7;
    beep(baka5,10);
    baka5 = baka5 - 1;
    beep(baka5,10);
    if(baka5 <= 500){
      digitalWrite(red,HIGH);
    }
    if(baka5 <= 1000){
      digitalWrite(blue,HIGH);
    }
    if(baka5 <= 1500){
      digitalWrite(green,HIGH);
    }

  }
}

void climbreal(){

  if(baka100 >= 2300){
    baka100 = baka100 - 2000; 

    if(baka101 == 1){
      baka101 = baka101 - 1;
      digitalWrite(blue,HIGH);
      digitalWrite(red,LOW);
    }
    else{
      digitalWrite(blue,LOW);
      digitalWrite(red,HIGH);
      baka101 = baka101 + 1;
    }
  }
  beep(baka100, baka100/25 );
  baka100 = baka100 + 25 ;
}


//bounce tone with rate chance featureness pro :D
void bounce(){

  if(HIGH == digitalRead(pin7))
  {
    if(HIGH == digitalRead(pin13))
    {

      bakarate = bakarate - 1;
    }
    else{
      bakarate = bakarate + 1;

    }
  }

  //reset bakrate
  if(HIGH == digitalRead(pin7) && HIGH == digitalRead(pin3) && HIGH == digitalRead(pin13)){
    bakarate = 25;
  }

  if(baka9000 >= 1900){

    bakadown = 1;
    bakaup = 0;
  }
  if(bakadown == 1){
    digitalWrite(red,HIGH);
    digitalWrite(blue,LOW);
    baka9000 = baka9000 - bakarate; 
    beep(baka9000, 25);
    Serial.print("Down");
  }


  if(baka9000 <= 100){

    bakadown = 0;
    bakaup = 1;

  }

  if(bakaup == 1){
    digitalWrite(red,LOW);
    digitalWrite(blue,HIGH);
    baka9000 = baka9000 + bakarate;
    beep(baka9000, 25);
    Serial.print("Up");
  }
  delay(20);

}

//tuneing
void tune(){

  beep(bakatune,5000);
  if(HIGH == digitalRead(pin7) && HIGH == digitalRead(pin2)){
    bakatune =  92;
    //plays open G
  }
  if(HIGH == digitalRead(pin7) && HIGH == digitalRead(pin3)){
    bakatune =  146.83;
    //plays opn D
  }
  if(HIGH == digitalRead(pin7) && HIGH == digitalRead(pin4)){
    bakatune =  220;
    //plays open A
  }
  if(HIGH == digitalRead(pin7) && HIGH == digitalRead(pin5)){
    bakatune =  329.3;
    //plays open E 
  }

}
void door(){

  whole = 2000/2;
   half = 1000/2;
 quart = 500/1.5;
   eith = 250/2;
  sis = 125/2;
  
  
                        if(bakapoletrigger == 0){
                          bakapole = bakapole + 29; 
                          beep(bakapole,48);
                          
                          if(bakapole >= 1318){
                            bakapoletrigger = bakapoletrigger + 1;
                          }
                      
                        }
             if(bakapoletrigger == 1){           
          sure1();
          sure2();
          sure3();
          bakapoletrigger = bakapoletrigger + 9000;
             }
}
                        
 void sure1(){
   
beep(g2,eith);
beep(c3,eith);
beep(e3,eith);
beep(g3,eith);
beep(c4,eith);
beep(e4,eith);
beep(g4,quart);
beep(e4,quart);

 }
void sure2(){
  
 beep(103,eith);
 beep(c3,eith);
 beep(155,eith);
 beep(207,eith);
 beep(c4,eith);
 beep(311,eith);
 beep(415,quart);
 beep(329,quart);
 
}

void sure3(){
         
  beep(116,eith);
  beep(146,eith);
  beep(174,eith);
  beep(233,eith);
  beep(293,eith);
  beep(349,eith);
  beep(466,quart);
  beep(466,eith);
  beep(466,eith);
  beep(466,eith);
  beep(c5,half);
  
}                                  
                        
                        
 void bakamute(){

   digitalWrite(red,HIGH);
   digitalWrite(blue,LOW);
   digitalWrite(pin1,LOW);
   delay(20);
   
 }

void bakaunmute(){
  
  digitalWrite(red,LOW);
   digitalWrite(blue,HIGH);
   digitalWrite(pin1,HIGH);
   delay(20);
   
}

void bakachange(){
 
 
 
  
  
}




