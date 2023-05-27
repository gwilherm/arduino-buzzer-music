#include <pitches.h>

// HW
#define BUZZ_PIN 7

// SW
#define REST_NOTE 0

#define SEMIBREVE      240000
#define MINIM          SEMIBREVE / 2
#define CROTCHET       MINIM / 2
#define QUAVER         CROTCHET / 2
#define SEMIQUAVER     QUAVER / 2
#define DEMISEMIQUAVER SEMIQUAVER / 2

#define DOTTED  1.5
#define TRIPLET  .333333

byte tempo = 120;

void buzz(int buzzer_pin, long freq, long length) {
  long delay_us = 1000000 / freq / 2;
  long nbCycles = freq * length / 1000;

  for (long i = 0; i < nbCycles; i++)
  {
    digitalWrite(buzzer_pin, HIGH);
    delayMicroseconds(delay_us);
    digitalWrite(buzzer_pin, LOW);
    delayMicroseconds(delay_us);
  }
}

void play_note(float note, float length){
  if (tempo) length = length / tempo;

  if (note != REST_NOTE)
  {
    buzz(BUZZ_PIN, note, length);
  }
  else
  {
    delay(length);
  }
}

void play_grace_note(float note1, float note2, float lengthAP, float lengthTOT){
    play_note(note1,lengthAP);
    play_note(note2,(lengthTOT - lengthAP));
}

void play_intro()
{
  tempo = 120;
  byte i;
  for (i = 0; i < 2; i++)
  {
    play_grace_note(NOTE_C3,  NOTE_E4, DEMISEMIQUAVER, CROTCHET);
    play_grace_note(NOTE_G3,  NOTE_C4, DEMISEMIQUAVER, CROTCHET);
    play_grace_note(NOTE_GS3, NOTE_D4, DEMISEMIQUAVER, CROTCHET);
    play_grace_note(NOTE_G3,  NOTE_C4, DEMISEMIQUAVER, CROTCHET);
  }
}

void play_theme_a()
{
  tempo = 120;
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(NOTE_GS3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_D4, QUAVER);
  play_note(NOTE_G3, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_D4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(NOTE_GS3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_D4, MINIM);
  play_note(REST_NOTE, SEMIQUAVER);
  
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(NOTE_GS3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_D4, QUAVER);
  play_note(NOTE_A3, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_D4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
      
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(NOTE_GS3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_G4, MINIM);
  play_note(NOTE_C2, SEMIQUAVER);
  
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(NOTE_GS3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_D4, QUAVER);
  play_note(NOTE_G3, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_D4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(NOTE_GS3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_D4, MINIM);
  play_note(REST_NOTE, SEMIQUAVER);
  
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(NOTE_GS3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_D4, QUAVER);
  play_note(NOTE_A3, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_D4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
      
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_GS3, SEMIQUAVER);
  play_note(NOTE_D4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C4, MINIM);
  play_note(NOTE_C2, SEMIQUAVER);
}

void play_theme_b()
{
  tempo = 120;
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_A3, SEMIQUAVER);
  play_note(NOTE_G3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_G3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_GS3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_A3, QUAVER);
  play_note(NOTE_C2, SEMIQUAVER);
  
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_A3, SEMIQUAVER);
  play_note(NOTE_G3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);        
  play_note(NOTE_C2, SEMIQUAVER);
  play_note(NOTE_E2, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER); 
  play_note(NOTE_G4, SEMIQUAVER);
  play_note(NOTE_C5, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);  
  play_note(REST_NOTE, CROTCHET);

  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_A3, SEMIQUAVER);
  play_note(NOTE_G3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_G3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_GS3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_A3, QUAVER);
  play_note(NOTE_C2, SEMIQUAVER);
  
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_A3, SEMIQUAVER);
  play_note(NOTE_G3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C2, MINIM);
  play_note(REST_NOTE, SEMIQUAVER);
  
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_A3, SEMIQUAVER);
  play_note(NOTE_G3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_E3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_G3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_GS3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_A3, QUAVER);
  play_note(NOTE_C2, SEMIQUAVER);
  
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_A3, SEMIQUAVER);
  play_note(NOTE_G3, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_G4, SEMIQUAVER);
  play_note(NOTE_G4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_G4, CROTCHET);
  play_note(REST_NOTE, QUAVER);
  
  play_note(NOTE_E4, CROTCHET);
  play_note(NOTE_C4, CROTCHET);
  play_note(NOTE_G3, CROTCHET);
  play_note(NOTE_C3, CROTCHET);
  
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(NOTE_E4, SEMIQUAVER);
  play_note(NOTE_A4, SEMIQUAVER);
  play_note(NOTE_G4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_GS4, SEMIQUAVER);
  play_note(NOTE_A4, SEMIQUAVER);
  play_note(REST_NOTE, SEMIQUAVER);
  play_note(NOTE_C5, CROTCHET);
  play_note(REST_NOTE, CROTCHET);
}

void play_win()
{
  tempo = 120;
  play_note(NOTE_C5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_D5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_E5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_D5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_E5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_F5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_E5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_F5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_G5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_F5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_G5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_A5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_C6, SEMIQUAVER*TRIPLET);
  play_note(NOTE_B5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_C6, SEMIQUAVER*TRIPLET);
  play_note(NOTE_B5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_C6, SEMIQUAVER*TRIPLET);
  play_note(NOTE_B5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_C6, SEMIQUAVER*TRIPLET);
  play_note(NOTE_B5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_C6, SEMIQUAVER*TRIPLET);
  play_note(NOTE_B5, SEMIQUAVER*TRIPLET);
  play_note(NOTE_C6, SEMIQUAVER*TRIPLET);
  play_note(NOTE_B5, SEMIQUAVER*TRIPLET);
}

void play_game_over()
{
  tempo = 120;
  play_note(NOTE_C3, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(NOTE_B2, SEMIQUAVER);
  play_note(NOTE_C4, SEMIQUAVER);
  play_note(NOTE_A2, MINIM*DOTTED);     
}

void play_fur_elise()
{
  tempo = 120;
  play_note(NOTE_E4, QUAVER);
  play_note(NOTE_DS4, QUAVER);
  play_note(NOTE_E4, QUAVER);
  play_note(NOTE_DS4, QUAVER);
  play_note(NOTE_E4, QUAVER);
  play_note(NOTE_B3, QUAVER);
  play_note(NOTE_D4, QUAVER);
  play_note(NOTE_C4, QUAVER);
  play_note(NOTE_A3, QUAVER);
  play_note(NOTE_E3, QUAVER);
  play_note(NOTE_A2, QUAVER);
  play_note(NOTE_C3, QUAVER);
  play_note(NOTE_E3, QUAVER);
  play_note(NOTE_A3, QUAVER);
  play_note(NOTE_B3, QUAVER);
  play_note(NOTE_E2, QUAVER);
  play_note(NOTE_GS2, QUAVER);
  play_note(NOTE_E3, QUAVER);
  play_note(NOTE_GS3, QUAVER);
  play_note(NOTE_B3, QUAVER);
  play_note(NOTE_C4, QUAVER);
  play_note(NOTE_E2, QUAVER);
  play_note(NOTE_A2, QUAVER);
  play_note(NOTE_E3, QUAVER);
  play_note(NOTE_E4, QUAVER);
  play_note(NOTE_DS4, QUAVER);
  play_note(NOTE_E4, QUAVER);
  play_note(NOTE_DS4, QUAVER);
  play_note(NOTE_E4, QUAVER);
  play_note(NOTE_B3, QUAVER);
  play_note(NOTE_D4, QUAVER);
  play_note(NOTE_C4, QUAVER);
  play_note(NOTE_A3, QUAVER);
  play_note(NOTE_E2, QUAVER);
  play_note(NOTE_A2, QUAVER);
  play_note(NOTE_C3, QUAVER);
  play_note(NOTE_E3, QUAVER);
  play_note(NOTE_A3, QUAVER);
  play_note(NOTE_B3, QUAVER);
  play_note(NOTE_E2, QUAVER);
  play_note(NOTE_GS2, QUAVER);
  play_note(NOTE_D3, QUAVER);
  play_note(NOTE_C4, QUAVER);
  play_note(NOTE_B3, QUAVER);
  play_note(NOTE_A3, CROTCHET);
}

void setup() {
  // put your setup code here to run once:
  
  pinMode(BUZZ_PIN, OUTPUT); // Buzzer
  Serial.begin(115200);

  Serial.println("Intro");
  play_intro();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Theme A");
  play_theme_a();
  Serial.println("Theme B");
  play_theme_b();
  delay(1000);
  Serial.println("Win");
  play_win();
  delay(1000);
  Serial.println("Game Over");
  play_game_over();
  delay(1000);
  Serial.println("Fur Elise");
  play_fur_elise();
  delay(1000);
}