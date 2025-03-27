void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // L (.-..)
  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(250);
  
  digitalWrite(LED_BUILTIN, HIGH); delay(750);  // Dash
  digitalWrite(LED_BUILTIN, LOW); delay(250);
  
  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(250);
  
  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(750);   // Letter gap
  
  // O (---)
  digitalWrite(LED_BUILTIN, HIGH); delay(750);  // Dash
  digitalWrite(LED_BUILTIN, LOW); delay(250);
  
  digitalWrite(LED_BUILTIN, HIGH); delay(750);  // Dash
  digitalWrite(LED_BUILTIN, LOW); delay(250);
  
  digitalWrite(LED_BUILTIN, HIGH); delay(750);  // Dash
  digitalWrite(LED_BUILTIN, LOW); delay(750);   // Letter gap

  // C (-.-.)
  digitalWrite(LED_BUILTIN, HIGH); delay(750);  // Dash
  digitalWrite(LED_BUILTIN, LOW); delay(250);

  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(250);

  digitalWrite(LED_BUILTIN, HIGH); delay(750);  // Dash
  digitalWrite(LED_BUILTIN, LOW); delay(250);

  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(750);   // Letter gap

  // H (....)
  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(250);

  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(250);

  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(250);

  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(750);   // Letter gap

  // I (..)
  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(250);

  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(750);   // Letter gap

  // E (.)
  digitalWrite(LED_BUILTIN, HIGH); delay(250);  // Dot
  digitalWrite(LED_BUILTIN, LOW); delay(1750);  // Word gap

  delay(5000); // Wait before repeating
}
