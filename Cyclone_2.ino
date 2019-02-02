/* 
 Arduino Dice :)
 This example shows how to simulate throwing a dice with 6 LEDs
 By Esther van der Stappen
 */

// 6 consecutive digital pins for the LEDs
int first = 13;
int second = 12;
int third = 11;
int fourth = 10;
int fifth = 9;
int sixth = 8;
int seventh = 7;
int myLeds[7] = {13, 12, 11, 10, 9, 8, 7};
int pace = 100;

// pn for the button switch
int button = 2;
// value to check state of button switch
int pressed;

void setup() {
  // set all LED pins to OUTPUT
//  pinMode(myLeds[0],OUTPUT);
//  pinMode(myLeds[1],OUTPUT);
//  pinMode(myLeds[2],OUTPUT);
//  pinMode(myLeds[3],OUTPUT);
//  pinMode(myLeds[4],OUTPUT);
//  pinMode(myLeds[5],OUTPUT);
  for(int i = 0; i < 7; i++){
    pinMode(myLeds[i],OUTPUT);
  }
  // set buttin pin to INPUT
  pinMode(button,INPUT);
  digitalWrite(button, HIGH);
}

void loop() {
  // if button is pressed - throw the dice
  pressed = digitalRead(button);
  
  if (pressed == LOW) {
    // remove previous number to LOW
//    digitalWrite(myLeds[0], LOW);
//    digitalWrite(myLeds[1], LOW);
//    digitalWrite(myLeds[2], LOW);
//    digitalWrite(myLeds[3], LOW);
//    digitalWrite(myLeds[4], LOW);
//    digitalWrite(myLeds[5], LOW);
    for(int i = 0; i < 7; i++){
      digitalWrite(myLeds[i], LOW);
    }

   for(int i = 0; i <7){
    digitalWrite(myLeds[i], HIGH); 
    delay(pace);
    if (pressed == LOW && i==3){
     digitalWrite(first,HIGH);
     digitalWrite(second,HIGH);
     digitalWrite(third,HIGH);
     digitalWrite(fourth,HIGH);
     digitalWrite(fifth,HIGH);
     digitalWrite(sixth,HIGH);
     digitalWrite(seventh,HIGH);
     delay(pace);
     digitalWrite(first,LOW);
     digitalWrite(second,LOW);
     digitalWrite(third,LOW);
     digitalWrite(fourth,LOW);
     digitalWrite(fifth,LOW);
     digitalWrite(sixth,LOW);
     digitalWrite(seventh,LOW);
     delay(pace);
     digitalWrite(first,HIGH);
     digitalWrite(second,HIGH);
     digitalWrite(third,HIGH);
     digitalWrite(fourth,HIGH);
     digitalWrite(fifth,HIGH);
     digitalWrite(sixth,HIGH);
     digitalWrite(seventh,HIGH);
     delay(pace);
     digitalWrite(first,LOW);
     digitalWrite(second,LOW);
     digitalWrite(third,LOW);
     digitalWrite(fourth,LOW);
     digitalWrite(fifth,LOW);
     digitalWrite(sixth,LOW);
     digitalWrite(seventh,LOW);
    }
    else if (pressed==LOW;){
      digitalWrite(myLeds[i],LOW);
     
    }
    

  
  
