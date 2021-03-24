// Declaration of output pins
const int red_pin = 13;
const int yellow_pin = 12;
const int green_pin = 11;
// Declaration of input pins
const int push_red = 5;
const int push_yellow = 4;
const int push_green = 3;
void setup() {
 // put your setup code here, to run once:
 // Declaration of the pin mode (input or output)
 pinMode(red_pin, OUTPUT);
 pinMode(yellow_pin, OUTPUT);
 pinMode(green_pin, OUTPUT);
 pinMode(push_red, INPUT);
 pinMode(push_yellow, INPUT);
 pinMode(push_green, INPUT);
}
void loop() {
 // Lighting of RED led based on red push button
 if (digitalRead(push_red) == LOW) {
 digitalWrite(red_pin, HIGH);
 digitalWrite(yellow_pin, LOW);
 digitalWrite(green_pin, LOW);
 }
 // Lighting of YELLOW led based on yellow push button
 if (digitalRead(push_yellow) == LOW) {
 digitalWrite(yellow_pin, HIGH);
 digitalWrite(red_pin, LOW);
 digitalWrite(green_pin, LOW);
 }
 // Lighting of GREEN led based on green push button
 if (digitalRead(push_green) == LOW) {
 digitalWrite(green_pin, HIGH);
 digitalWrite(yellow_pin, LOW);
 digitalWrite(red_pin, LOW);
 }
}
