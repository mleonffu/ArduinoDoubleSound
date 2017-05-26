/*
void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(8, note, duration);

  delay(duration);

  //Stop tone on buzzerPin
  noTone(8);
}

const char*  noteRef[][2] = {
	{"g2", 98},

	{"c3", 130},
	{"d3", 146},
	{"e3", 164},
	{"f3", 174},
	{"g3", 196},
	{"a3", 220},
	{"b3", 246},

	{"c4", 261},
	{"d4", 293},
	{"e4", 329},
	{"f4", 349},
	{"g4", 392},
	{"a4", 440},
	{"b4", 493},

	{"c5", 523},
	{"d5", 587},
	{"e5", 659},
	{"f5", 698},
	{"g5", 783},
	{"a5", 880},
	{"b5", 987},

	{"c6", 1046},
	{"d6", 1174},
	{"e6", 1318},
	{"f6", 1396},
	{"g6", 1567},
	{"a6", 1760},
	{"b6", 1975},

	{"c7", 2093},
	{"d7", 2349},
	{"e7", 2637},
	{"f7", 2793},
	{"g7", 3135},
	{"a7", 3520},
	{"b7", 3951}
};

int selectFq(char* noteName){
	for(int noteIndex = 0; noteIndex <= sizeof(noteRef); noteIndex++){

	}
}

*/
const int g2 = 98;

const int c3 = 130;
const int d3 = 146;
const int e3 = 164;
const int f3 = 174;
const int g3 = 196;
const int a3 = 220;
const int b3 = 246;

const int c4 = 261;
const int d4 = 293;
const int e4 = 329;
const int f4 = 349;
const int g4 = 392;
const int a4 = 440;
const int b4 = 493;

const int c5 = 523;
const int d5 = 587;
const int e5 = 659;
const int f5 = 698;
const int g5 = 783;
const int a5 = 880;
const int b5 = 987;

const int c6 = 1046;
const int d6 = 1174;
const int e6 = 1318;
const int f6 = 1396;
const int g6 = 1567;
const int a6 = 1760;
const int b6 = 1975;

const int c7 = 2093;
const int d7 = 2349;
const int e7 = 2637;
const int f7 = 2793;
const int g7 = 3135;
const int a7 = 3520;
const int b7 = 3951;
//times////////
int whole = 2000;
int half = 1000;
int quart = 500;
int eith = 250;
int sis = 125;


//c4 level eith

void ccc4(){ 
	beep(c4,sis); 
}
void ddd4(){ 
	beep(d4,sis); 
}
void eee4(){ 
	beep(e4,sis); 
}
void fff4(){ 
	beep(f4,sis); 
}
void ggg4(){ 
	beep(g4,sis); 
}
void aaa4(){ 
	beep(a4,sis); 
}
void bbb4(){ 
	beep(b4,sis); 
}


//c4 level eith
void cc4(){ 
	beep(c4,eith); 
}
void dd4(){ 
	beep(d4,eith); 
}
void ee4(){ 
	beep(e4,eith); 
}
void ff4(){ 
	beep(f4,eith); 
}
void gg4(){ 
	beep(g4,eith); 
}
void aa4(){ 
	beep(a4,eith); 
}
void bb4(){ 
	beep(b4,eith); 
}

//c5 level eith
void cc5(){ 
	beep(c5,eith); 
}
void dd5(){ 
	beep(d5,eith); 
}
void ee5(){ 
	beep(e5,eith); 
}
void ff5(){ 
	beep(f5,eith); 
}
void gg5(){ 
	beep(g5,eith); 
}
void aa5(){ 
	beep(a5,eith); 
}
void bb5(){ 
	beep(b5,eith); 
}

//c5 level eith
void ccc5(){ 
	beep(c5,sis); 
}
void ddd5(){ 
	beep(d5,sis); 
}
void eee5(){ 
	beep(e5,sis); 
}
void fff5(){ 
	beep(f5,sis); 
}
void ggg5(){ 
	beep(g5,sis); 
}
void aaa5(){ 
	beep(a5,sis); 
}
void bbb5(){ 
	beep(b5,sis); 
}
