const char* morseDictionary[26] = 
  ".-",   // a
  "-...", // b
  "-.-.", // c
  "-..",  // d
  ".",    // e
  "..-.", // f
  "--.",  // g
  "....", // h
  "..",   // i
  ".---", // j
  "-.-",  // k
  ".-..", // l
  "--",   // m
  "-.",   // n
  "---",  // o
  ".--.", // p
  "--.-", // q
  ".-.",  // r
  "...",  // s
  "-",    // t
  "..-",  // u
  "...-", // v
  ".--",  // w
  "-..-", // x
  "-.--", // y
  "--.."  // z
};

void blinkChar(const char* morseCode) {
  for (int i = 0; morseCode[i] != '\0'; i++) {
    if (morseCode[i] == '.') {
     digitalWrite(LED_BUILTIN, HIGH);
     delay(250); // short light for a dot
    } else if (morseCode[i] == '-') {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(750); // long light for a dot
    }
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000); // gap between character
  }
}

// recieves a word to blink, call blinkChar to blink it letter by letter
void blinkWord(const char* word) {
  for (int i = 0; word[i] != '\0'; i++) {
    if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
      blinkChar(morseDictionary[word[i] - 'a']);
    }
}


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// ask for a string in Serial Monitor, call blinkword function to blink it
void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim();
    Serial.print("Blinking: ");
    Serial.println(input);
    blinkWord(input.c_str());
    Serial.println("Enter another word");
  }
}

