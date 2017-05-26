#include "Arduino.h"


//120 4/4 -> 4 1/4 notes (beat on each note) -> beat is 1/4 measure -> 7200bps
//80 12/8 -> 12 8th notes (beat on every 3rd note) -> beat is 1/4 measure -> 4800bps

void setup(){
}

void beep(int buzzerPin, int note,float duration){
  //Play tone on buzzerPin
  if(note = 0){
    noTone(buzzerPin);
  }else{
    tone(buzzerPin, note, duration);
  }
}

void play(int songTop[][2], int songBottom[][2]){
  //Song Varibles:
    //the incermental counter for the song steps
      int step1 = 0;
      int step2 = 0;
    //This is the bpm of the song part
      int bpm1 = 80;
      int bpm2 = 80;
    //the 4/4 time sig is beat = 4 and beats = 4
      int beat1 = 4;
      int beat2 = 4;
      int beats1 = 4;
      int beats2 = 4;
    //sequence
      int sequence1[2] = {};
  //status of the song
    bool playing = true;
  while(playing == true){
    sequence1 = songTop[step1];
    
    
  }
  int var = songTop[1];
  var = songBottom[1];
  
}

//#include "toneref.h"

void loop(){
  
}

