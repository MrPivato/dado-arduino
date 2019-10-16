#ifndef printNumeros_h
#define printNumeros_h

#define pos1 4
#define pos2 5
#define pos3 6
#define pos4 7
#define pos5 8
#define pos6 9
#define pos7 10

void initialDrawPosition() {
  digitalWrite(pos1, 0);
  digitalWrite(pos2, 0);
  digitalWrite(pos3, 0);
  digitalWrite(pos4, 0);
  digitalWrite(pos5, 0);
  digitalWrite(pos6, 0);
  digitalWrite(pos7, 0);
}

void drawNum1() {
  digitalWrite(pos1, 0);
  digitalWrite(pos2, 0);
  digitalWrite(pos3, 0);
  digitalWrite(pos4, 1);
  digitalWrite(pos5, 0);
  digitalWrite(pos6, 0);
  digitalWrite(pos7, 0);
}

void drawNum2() {
  digitalWrite(pos1, 0);
  digitalWrite(pos2, 1);
  digitalWrite(pos3, 0);
  digitalWrite(pos4, 0);
  digitalWrite(pos5, 0);
  digitalWrite(pos6, 1);
  digitalWrite(pos7, 0);
}

void drawNum3() {
  digitalWrite(pos1, 0);
  digitalWrite(pos2, 0);
  digitalWrite(pos3, 1);
  digitalWrite(pos4, 1);
  digitalWrite(pos5, 1);
  digitalWrite(pos6, 0);
  digitalWrite(pos7, 0);
}

void drawNum4() {
  digitalWrite(pos1, 1);
  digitalWrite(pos2, 0);
  digitalWrite(pos3, 1);
  digitalWrite(pos4, 0);
  digitalWrite(pos5, 5);
  digitalWrite(pos6, 0);
  digitalWrite(pos7, 1);
}

void drawNum5() {
  digitalWrite(pos1, 1);
  digitalWrite(pos2, 0);
  digitalWrite(pos3, 1);
  digitalWrite(pos4, 1);
  digitalWrite(pos5, 1);
  digitalWrite(pos6, 0);
  digitalWrite(pos7, 1);
}

void drawNum6() {
  digitalWrite(pos1, 1);
  digitalWrite(pos2, 1);
  digitalWrite(pos3, 1);
  digitalWrite(pos4, 0);
  digitalWrite(pos5, 1);
  digitalWrite(pos6, 1);
  digitalWrite(pos7, 1);
}

void changeNums(int delayVal) {
  drawNum1();
  delay(delayVal);
  drawNum2();
  delay(delayVal);
  drawNum3();
  delay(delayVal);
  drawNum4();
  delay(delayVal);
  drawNum5();
  delay(delayVal);
  drawNum6();
  delay(delayVal);
}

void printRoll(int roll) {
  switch (roll) {
    case 1:
      drawNum1();
      break;
    case 2:
      drawNum2();
      break;
    case 3:
      drawNum3();
      break;
    case 4:
      drawNum4();
      break;
    case 5:
      drawNum5();
      break;
    case 6:
      drawNum6();
      break;
    default:
      break;
  }
}

#endif
