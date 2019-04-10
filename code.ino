#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 53
#define RST_PIN 11
#define CARDS_LENGTH 10


MFRC522 mfrc522(SS_PIN, RST_PIN);
#include <Stepper.h> // Hinzufügen der Programmbibliothek.
int SPU = 2; // Schritte pro Umdrehung.
Stepper Motor(SPU, 3, 5, 4, 6); // Der Schrittmotor erhält die Bezeichnung "Motor" und es wird angegeben an welchen Pins der Motor angeschlossen ist.

int cards[CARDS_LENGTH];

bool do_not_execute = true;
void check_time() {
  int time = hour();
  if (time >= 8 && time <= 17) {
    do_not_execute = false;
  }
}

bool is_valid_card(int card_num, int* v_cards,size_t cards_length) {
  bool is_valid = false;
  for(size_t i = 0;i < cards_length;i++) {
    if(cards[i] == card_num) {
      is_valid = true;
      break;
    }
  }
  return is_valid;
}

void setup()
{
  check_time();
  //cards[0] = 1165780;
  cards[1] = 1708150;
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  pinMode (13, OUTPUT); // Der Pin 2 ist jetzt ein Ausgang (Hier wird eine LED angeschlossen)
  Motor.setSpeed(15); // Angabe der Geschwindigkeit in Umdrehungen pro Minute.
  pinMode (9, OUTPUT); // Rote Lampe
  pinMode(24,OUTPUT);
//  int names1[] = {1165780,1708150};
//  char names2[][] = {"Tamino","Joja"};
}

void loop()
{
  if(do_not_execute) {
    check_time();
    return;
  }
  if ( ! mfrc522.PICC_IsNewCardPresent())
  {
    return;
  }

  if ( ! mfrc522.PICC_ReadCardSerial())
  {
    return;
  }

  long code = 0;

  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    code = ((code + mfrc522.uid.uidByte[i]) * 10);
  }
  
  Serial.print("Die Kartennummer lautet:");

  Serial.println(code);
/*  for(byte j = 0; j<99; j++){
    if(names1[j]==code){
      Serial.println("\nHallo "+names2[j][]);
    }else{
      Serial.println("\nFehler");
    }
  }
*/

  // Ab hier erfolgt die erweiterung des Programms.

  if (is_valid_card(code,cards,CARDS_LENGTH)){ // Wenn der Zahlencode 1031720 lautet...

    // Programmabschniss öffnen
    tone(24,900);
    digitalWrite (13, HIGH); // ...dann soll die LED an Pin 2 leuchten...
    delay(600);
    tone(24,1200);
    delay(800);
    noTone(24);
    Motor.step(-1); // Der Motor macht 2048 Schritte, das entspricht einer Umdrehung.
    digitalWrite (13, LOW); // … und danach wieder aus gehen.

    delay (8000);
    digitalWrite (9, HIGH);
    delay (2000);
    Motor.step(1); // Der Motor macht 2048 Schritte, das entspricht einer Umdrehung.
    digitalWrite (9, LOW);
  }else if(!is_valid_card(code,cards,CARDS_LENGTH)){
    for(int i=0;i<20;i++){
      digitalWrite(9,HIGH);
      tone(24, 100);
      delay(100);
      digitalWrite(9,LOW);
      tone(24,200);
      delay(100);
    }
    noTone(24);
  }


}