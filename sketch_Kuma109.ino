// "SWIF Kuma109" by KumagayaSNS
#include <BleKeyboard.h>
BleKeyboard bleKeyboard("SWIF Kuma109");

//******************************
// Key Settings
//******************************

// Normal keystrokes
#define PIN13 KEY_NUM6
#define PIN12 KEY_NUM3
#define PIN14 KEY_NUM8
#define PIN27 KEY_NUM7
#define PIN26 KEY_NUM4
#define PIN25 KEY_A
#define PIN33 KEY_NUM2
#define PIN32 KEY_NUM1
#define PIN15 KEY_NUM5
#define PIN4 KEY_NUM0
#define PIN21 KEY_NUM9

// Wait Mode (mm seconds)
const int WAIT_TIMER = 2000;
#define PIN18 KEY_NUM1
#define PIN19 KEY_NUM2

// Latch&Timer Mode (mm seconds)
const int LATCH_TIMER = 2000;
#define PIN22 KEY_NUM1
#define PIN23 KEY_NUM2

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// After this Developer only

const uint8_t KEY_NUM0 = 0x30;
const uint8_t KEY_NUM1 = 0x31;
const uint8_t KEY_NUM2 = 0x32;
const uint8_t KEY_NUM3 = 0x33;
const uint8_t KEY_NUM4 = 0x34;
const uint8_t KEY_NUM5 = 0x35;
const uint8_t KEY_NUM6 = 0x36;
const uint8_t KEY_NUM7 = 0x37;
const uint8_t KEY_NUM8 = 0x38;
const uint8_t KEY_NUM9 = 0x39;
const uint8_t KEY_A = 0x61;
const uint8_t KEY_D = 0x64;
const uint8_t KEY_F = 0x66;
const uint8_t KEY_G = 0x67;
const uint8_t KEY_H = 0x68;
const uint8_t KEY_S = 0x73;
const uint8_t KEY_W = 0x77;
uint8_t presskey[2];

// It is written in the header file.
//const uint8_t KEY_UP_ARROW = 0xDA;
//const uint8_t KEY_DOWN_ARROW = 0xD9;
//const uint8_t KEY_LEFT_ARROW = 0xD8;
//const uint8_t KEY_RIGHT_ARROW = 0xD7;
//const uint8_t KEY_TAB = 0xB3;
//const uint8_t KEY_RETURN = 0xB0;


void setup() {
  Serial.begin(115200);
  bleKeyboard.begin();

  pinMode(13, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(27, INPUT_PULLUP);
  pinMode(26, INPUT_PULLUP);
  pinMode(25, INPUT_PULLUP);
  pinMode(33, INPUT_PULLUP);
  pinMode(32, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(21, INPUT_PULLUP);
  pinMode(18, INPUT_PULLUP);
  pinMode(19, INPUT_PULLUP);
  pinMode(22, INPUT_PULLUP);
  pinMode(23, INPUT_PULLUP);
  pinMode(5, OUTPUT);
  Serial.println("Ready");
}

//virtual interrupt processing (loop1-2&interruptkey)
void interruptloop1(uint8_t pressedkey) {
  if (digitalRead(13) == LOW) {
    if (PIN13 != pressedkey) {
      presskey[0] = pressedkey;
      bleKeyboard.press(PIN13);
      Serial.println("interrupt loop1 pin13");
      while (digitalRead(13) == LOW) {
        interruptloop2(PIN13);
      }
      bleKeyboard.release(PIN13);
    }
  }
  if (digitalRead(12) == LOW) {
    if (PIN12 != pressedkey) {
      presskey[0] = pressedkey;
      bleKeyboard.press(PIN12);
      Serial.println("interrupt loop1 pin12");
      while (digitalRead(12) == LOW) {
        interruptloop2(PIN12);
      }
      bleKeyboard.release(PIN12);
    }
  }
  if (digitalRead(14) == LOW) {
    if (PIN14 != pressedkey) {
      presskey[0] = pressedkey;
      bleKeyboard.press(PIN14);
      Serial.println("interrupt loop1 pin14");
      while (digitalRead(14) == LOW) {
        interruptloop2(PIN14);
      }
      bleKeyboard.release(PIN14);
    }
  }
  if (digitalRead(27) == LOW) {
    if (PIN27 != pressedkey) {
      presskey[0] = pressedkey;
      bleKeyboard.press(PIN27);
      Serial.println("interrupt loop1 pin27");
      while (digitalRead(27) == LOW) {
        interruptloop2(PIN27);
      }
      bleKeyboard.release(PIN27);
    }
  }
  if (digitalRead(26) == LOW) {
    if (PIN26 != pressedkey) {
      presskey[0] = pressedkey;
      bleKeyboard.press(PIN26);
      Serial.println("interrupt loop1 pin26");
      while (digitalRead(26) == LOW) {
        interruptloop2(PIN26);
      }
      bleKeyboard.release(PIN26);
    }
  }
  if (digitalRead(25) == LOW) {
    if (PIN25 != pressedkey) {
      presskey[0] = pressedkey;
      bleKeyboard.press(PIN25);
      Serial.println("interrupt loop1 pin25");
      while (digitalRead(25) == LOW) {
        interruptloop2(PIN25);
      }
      bleKeyboard.release(PIN25);
    }
  }
  if (digitalRead(33) == LOW) {
    if (PIN33 != pressedkey) {
      presskey[0] = pressedkey;
      bleKeyboard.press(PIN33);
      Serial.println("interrupt loop1 pin33");
      while (digitalRead(33) == LOW) {
        interruptloop2(PIN33);
      }
      bleKeyboard.release(PIN33);
    }
  }
  if (digitalRead(32) == LOW) {
    if (PIN32 != pressedkey) {
      presskey[0] = pressedkey;
      bleKeyboard.press(PIN32);
      Serial.println("interrupt loop1 pin32");
      while (digitalRead(32) == LOW) {
        interruptloop2(PIN32);
      }
      bleKeyboard.release(PIN32);
    }
  }
  if (digitalRead(15) == LOW) {
    if (PIN15 != pressedkey) {
      presskey[0] = pressedkey;
      bleKeyboard.press(PIN15);
      Serial.println("interrupt loop1 pin15");
      while (digitalRead(15) == LOW) {
        interruptloop2(PIN15);
      }
      bleKeyboard.release(PIN15);
    }
  }
  if (digitalRead(4) == LOW) {
    if (PIN4 != pressedkey) {
      presskey[0] = pressedkey;
      bleKeyboard.press(PIN4);
      Serial.println("interrupt loop1 pin4");
      while (digitalRead(4) == LOW) {
        interruptloop2(PIN4);
      }
      bleKeyboard.release(PIN4);
    }
  }
  if (digitalRead(21) == LOW) {
    if (PIN21 != pressedkey) {
      presskey[0] = pressedkey;
      bleKeyboard.press(PIN21);
      Serial.println("interrupt loop1 pin21");
      while (digitalRead(21) == LOW) {
        interruptloop2(PIN21);
      }
      bleKeyboard.release(PIN21);
    }
  }
}

void interruptloop2(uint8_t pressedkey) {
  if (digitalRead(13) == LOW) {
    if (PIN13 != pressedkey) {
      if (PIN13 != presskey[0]) {
        presskey[1] = pressedkey;
        bleKeyboard.press(PIN13);
        Serial.println("interrupt loop2 pin13");
        while (digitalRead(13) == LOW) {
          interruptkey(PIN13);
        }
        bleKeyboard.release(PIN13);
      }
    }
  }
  if (digitalRead(12) == LOW) {
    if (PIN12 != pressedkey) {
      if (PIN12 != presskey[0]) {
        presskey[1] = pressedkey;
        bleKeyboard.press(PIN12);
        Serial.println("interrupt loop2 pin12");
        while (digitalRead(12) == LOW) {
          interruptkey(PIN12);
        }
        bleKeyboard.release(PIN12);
      }
    }
  }
  if (digitalRead(14) == LOW) {
    if (PIN14 != pressedkey) {
      if (PIN14 != presskey[0]) {
        presskey[1] = pressedkey;
        bleKeyboard.press(PIN14);
        Serial.println("interrupt loop2 pin14");
        while (digitalRead(14) == LOW) {
          interruptkey(PIN14);
        }
        bleKeyboard.release(PIN14);
      }
    }
  }
  if (digitalRead(27) == LOW) {
    if (PIN27 != pressedkey) {
      if (PIN27 != presskey[0]) {
        presskey[1] = pressedkey;
        bleKeyboard.press(PIN27);
        Serial.println("interrupt loop2 pin27");
        while (digitalRead(27) == LOW) {
          interruptkey(PIN27);
        }
        bleKeyboard.release(PIN27);
      }
    }
  }
  if (digitalRead(26) == LOW) {
    if (PIN26 != pressedkey) {
      if (PIN26 != presskey[0]) {
        presskey[1] = pressedkey;
        bleKeyboard.press(PIN26);
        Serial.println("interrupt loop2 pin26");
        while (digitalRead(26) == LOW) {
          interruptkey(PIN26);
        }
        bleKeyboard.release(PIN26);
      }
    }
  }
  if (digitalRead(25) == LOW) {
    if (PIN25 != pressedkey) {
      if (PIN25 != presskey[0]) {
        presskey[1] = pressedkey;
        bleKeyboard.press(PIN25);
        Serial.println("interrupt loop2 pin25");
        while (digitalRead(25) == LOW) {
          interruptkey(PIN25);
        }
        bleKeyboard.release(PIN25);
      }
    }
  }
  if (digitalRead(33) == LOW) {
    if (PIN33 != pressedkey) {
      if (PIN33 != presskey[0]) {
        presskey[1] = pressedkey;
        bleKeyboard.press(PIN33);
        Serial.println("interrupt loop2 pin33");
        while (digitalRead(33) == LOW) {
          interruptkey(PIN33);
        }
        bleKeyboard.release(PIN33);
      }
    }
  }
  if (digitalRead(32) == LOW) {
    if (PIN32 != pressedkey) {
      if (PIN32 != presskey[0]) {
        presskey[1] = pressedkey;
        bleKeyboard.press(PIN32);
        Serial.println("interrupt loop2 pin32");
        while (digitalRead(32) == LOW) {
          interruptkey(PIN32);
        }
        bleKeyboard.release(PIN32);
      }
    }
  }
  if (digitalRead(15) == LOW) {
    if (PIN15 != pressedkey) {
      if (PIN15 != presskey[0]) {
        presskey[1] = pressedkey;
        bleKeyboard.press(PIN15);
        Serial.println("interrupt loop2 pin15");
        while (digitalRead(15) == LOW) {
          interruptkey(PIN15);
        }
        bleKeyboard.release(PIN15);
      }
    }
  }
  if (digitalRead(4) == LOW) {
    if (PIN4 != pressedkey) {
      if (PIN4 != presskey[0]) {
        presskey[1] = pressedkey;
        bleKeyboard.press(PIN4);
        Serial.println("interrupt loop2 pin4");
        while (digitalRead(4) == LOW) {
          interruptkey(PIN4);
        }
        bleKeyboard.release(PIN4);
      }
    }
  }
  if (digitalRead(21) == LOW) {
    if (PIN21 != pressedkey) {
      if (PIN21 != presskey[0]) {
        presskey[1] = pressedkey;
        bleKeyboard.press(PIN21);
        Serial.println("interrupt loop2 pin21");
        while (digitalRead(21) == LOW) {
          interruptkey(PIN21);
        }
        bleKeyboard.release(PIN21);
      }
    }
  }
}

void interruptkey(uint8_t pressedkye) {
  if (digitalRead(13) == LOW) {
    if (PIN13 != pressedkye) {
      if (PIN13 != presskey[0]) {
        if (PIN13 != presskey[1]) {
          bleKeyboard.write(PIN13);
          delay(200);
          Serial.println("interrupt key pin13");
        }
      }
    }
  }
  if (digitalRead(12) == LOW) {
    if (PIN12 != pressedkye) {
      if (PIN12 != presskey[0]) {
        if (PIN12 != presskey[1]) {
          bleKeyboard.write(PIN12);
          delay(200);
          Serial.println("interrupt key pin12");
        }
      }
    }
  }
  if (digitalRead(14) == LOW) {
    if (PIN14 != pressedkye) {
      if (PIN14 != presskey[0]) {
        if (PIN14 != presskey[1]) {
          bleKeyboard.write(PIN14);
          delay(200);
          Serial.println("interrupt key pin14");
        }
      }
    }
  }
  if (digitalRead(27) == LOW) {
    if (PIN27 != pressedkye) {
      if (PIN27 != presskey[0]) {
        if (PIN27 != presskey[1]) {
          bleKeyboard.write(PIN27);
          delay(200);
          Serial.println("interrupt key pin27");
        }
      }
    }
  }
  if (digitalRead(26) == LOW) {
    if (PIN26 != pressedkye) {
      if (PIN26 != presskey[0]) {
        if (PIN26 != presskey[1]) {
          bleKeyboard.write(PIN26);
          delay(200);
          Serial.println("interrupt key pin26");
        }
      }
    }
  }
  if (digitalRead(25) == LOW) {
    if (PIN25 != pressedkye) {
      if (PIN25 != presskey[0]) {
        if (PIN25 != presskey[1]) {
          bleKeyboard.write(PIN25);
          delay(200);
          Serial.println("interrupt key pin25");
        }
      }
    }
  }
  if (digitalRead(33) == LOW) {
    if (PIN33 != pressedkye) {
      if (PIN33 != presskey[0]) {
        if (PIN33 != presskey[1]) {
          bleKeyboard.write(PIN33);
          delay(200);
          Serial.println("interrupt key pin33");
        }
      }
    }
  }
  if (digitalRead(32) == LOW) {
    if (PIN32 != pressedkye) {
      if (PIN32 != presskey[0]) {
        if (PIN32 != presskey[1]) {
          bleKeyboard.write(PIN32);
          delay(200);
          Serial.println("interrupt key pin32");
        }
      }
    }
  }
  if (digitalRead(15) == LOW) {
    if (PIN15 != pressedkye) {
      if (PIN15 != presskey[0]) {
        if (PIN15 != presskey[1]) {
          bleKeyboard.write(PIN15);
          delay(200);
          Serial.println("interrupt key pin15");
        }
      }
    }
  }
  if (digitalRead(4) == LOW) {
    if (PIN4 != pressedkye) {
      if (PIN4 != presskey[0]) {
        if (PIN4 != presskey[1]) {
          bleKeyboard.write(PIN4);
          delay(200);
          Serial.println("interrupt key pin4");
        }
      }
    }
  }
  if (digitalRead(21) == LOW) {
    if (PIN21 != pressedkye) {
      if (PIN21 != presskey[0]) {
        if (PIN21 != presskey[1]) {
          bleKeyboard.write(PIN21);
          delay(200);
          Serial.println("interrupt key pin21");
        }
      }
    }
  }
}

void loop() {
  if (bleKeyboard.isConnected()) {
    presskey[0] = 0;
    presskey[1] = 0;

    digitalWrite(5, HIGH);
    Serial.println("BLE ON");

    if (digitalRead(13) == LOW) {
      bleKeyboard.press(PIN13);
      while (digitalRead(13) == LOW) {
        interruptloop1(PIN13);
      }
      bleKeyboard.release(PIN13);
    }
    if (digitalRead(12) == LOW) {
      bleKeyboard.press(PIN12);
      while (digitalRead(12) == LOW) {
        interruptloop1(PIN12);
      }
      bleKeyboard.release(PIN12);
    }
    if (digitalRead(14) == LOW) {
      bleKeyboard.press(PIN14);
      while (digitalRead(14) == LOW) {
        interruptloop1(PIN14);
      }
      bleKeyboard.release(PIN14);
    }
    if (digitalRead(27) == LOW) {
      bleKeyboard.press(PIN27);
      while (digitalRead(27) == LOW) {
        interruptloop1(PIN27);
      }
      bleKeyboard.release(PIN27);
    }
    if (digitalRead(26) == LOW) {
      bleKeyboard.press(PIN26);
      while (digitalRead(26) == LOW) {
        interruptloop1(PIN26);
      }
      bleKeyboard.release(PIN26);
    }
    if (digitalRead(25) == LOW) {
      bleKeyboard.press(PIN25);
      while (digitalRead(25) == LOW) {
        interruptloop1(PIN25);
      }
      bleKeyboard.release(PIN25);
    }
    if (digitalRead(33) == LOW) {
      bleKeyboard.press(PIN33);
      while (digitalRead(33) == LOW) {
        interruptloop1(PIN33);
      }
      bleKeyboard.release(PIN33);
    }
    if (digitalRead(32) == LOW) {
      bleKeyboard.press(PIN32);
      while (digitalRead(32) == LOW) {
        interruptloop1(PIN32);
      }
      bleKeyboard.release(PIN32);
    }
    if (digitalRead(15) == LOW) {
      bleKeyboard.press(PIN15);
      while (digitalRead(15) == LOW) {
        interruptloop1(PIN15);
      }
      bleKeyboard.release(PIN15);
    }
    if (digitalRead(4) == LOW) {
      bleKeyboard.press(PIN4);
      while (digitalRead(4) == LOW) {
        interruptloop1(PIN4);
      }
      bleKeyboard.release(PIN4);
    }
    if (digitalRead(21) == LOW) {
      bleKeyboard.press(PIN21);
      while (digitalRead(21) == LOW) {
        interruptloop1(PIN21);
      }
      bleKeyboard.release(PIN21);
    }
    if (digitalRead(18) == LOW) {
      bleKeyboard.write(PIN18);
      Serial.println("Wait Timer pin18");
      delay(WAIT_TIMER);
    }
    if (digitalRead(19) == LOW) {
      bleKeyboard.write(PIN19);
      Serial.println("Wait Timer pin19");
      delay(WAIT_TIMER);
    }
    if (digitalRead(22) == LOW) {
      bleKeyboard.press(PIN22);
      Serial.println("Latch Timer pin22");
      delay(LATCH_TIMER);
      bleKeyboard.release(PIN22);
    }
    if (digitalRead(23) == LOW) {
      bleKeyboard.press(PIN23);
      Serial.println("Latch Timer pin23");
      delay(LATCH_TIMER);
      bleKeyboard.release(PIN23);
    }
  }
  else {
    digitalWrite(5, LOW);
    Serial.println("BLE OFF");
  }
}
