#define PIN_LED 13

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  while(!Serial);
  digitalWrite(PIN_LED, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED, 1);
  delay(1000);
  unsigned int f = 0;
  for(unsigned int i = 0; i < 10; i++) {
    digitalWrite(PIN_LED, f);
    delay(100);
    f = !f;
  }
  while(1);
}