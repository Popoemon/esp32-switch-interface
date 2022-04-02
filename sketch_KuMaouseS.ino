//"SWIF KuMaouse Simple" by KumagayaSNS
#include <BleMouse.h>
BleMouse bleMouse("SWIF KuMaouse S");

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// After this Developer only

void setup() {
  Serial.begin(115200);
  bleMouse.begin();

  //Mouse movement
  pinMode(13, INPUT_PULLUP);//Move_Left
  pinMode(12, INPUT_PULLUP);//Move_Up
  pinMode(14, INPUT_PULLUP);//Move_Down
  pinMode(27, INPUT_PULLUP);//Move_Right
  pinMode(26, INPUT_PULLUP);//Click(press->release)
  pinMode(25, INPUT_PULLUP);//Click(press->release)
  pinMode(32, OUTPUT);//LED
  Serial.println("Ready");
}

void MouseMove() {
  if (digitalRead(13) == LOW) {
    bleMouse.move(-3, 0);
  }
  if (digitalRead(12) == LOW) {
    bleMouse.move(0, -3);
  }
  if (digitalRead(14) == LOW) {
    bleMouse.move(0, 3);
  }
  if (digitalRead(27) == LOW) {
    bleMouse.move(3, 0);
  }
}

void loop() {
  if (bleMouse.isConnected()) {
    digitalWrite(32, HIGH);
    Serial.println("BLE ON");

    MouseMove();

    if (digitalRead(26) == LOW) {
      bleMouse.press(MOUSE_LEFT);
      while (digitalRead(26) == LOW) {
        MouseMove();
      }
      bleMouse.release(MOUSE_LEFT);
    }
    if (digitalRead(25) == LOW) {
      bleMouse.press(MOUSE_LEFT);
      while (digitalRead(25) == LOW) {
        MouseMove();
      }
      bleMouse.release(MOUSE_LEFT);
    }
  }
  else {
    digitalWrite(32, LOW);
    Serial.println("BLE OFF");
  }
}
