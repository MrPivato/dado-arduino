#include "numeros.h"

#define bot 11

int readVal = 0;

void setup() {
  Serial.begin(9600);

  pinMode(pos1, OUTPUT);
  pinMode(pos2, OUTPUT);
  pinMode(pos3, OUTPUT);
  pinMode(pos4, OUTPUT);
  pinMode(pos5, OUTPUT);
  pinMode(pos6, OUTPUT);
  pinMode(pos7, OUTPUT);

  pinMode(bot, INPUT);

  randomSeed(analogRead(0));

  initialDrawPosition();
}

void loop() {
  readVal = digitalRead(bot);

  if (readVal) {
    for (int i = 0; i <= 5; i++) {
      changeNums(50);
    }

    int roll = random(1, 7);

    printRoll(roll);
  }
}
