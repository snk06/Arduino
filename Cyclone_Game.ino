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
int pace = 300;

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
    // get a random number in the range [1,6]
    int randomNum = random(1,8);
    //write IF statements to light up the lights
    digitalWrite(first, HIGH); 
    delay(pace);
    digitalWrite(first,LOW);  
    if (randomNum >= 2){
      digitalWrite(second,HIGH); 
      delay(pace);
      digitalWrite(second,LOW);
    }
    if (randomNum >= 3){
      digitalWrite(third, HIGH);
      delay(pace);
      digitalWrite(third,LOW);
    }
    if (randomNum >= 4){
      digitalWrite(fourth, HIGH);
      delay(pace);
      digitalWrite(fourth,LOW);
    }
    if (randomNum >= 5){
      digitalWrite(fifth, HIGH);
      delay(pace);
      digitalWrite(fifth,LOW);
    }
    if (randomNum >= 6){
      digitalWrite(sixth, HIGH);
      delay(pace);
      digitalWrite(sixth,LOW);
      }
    if (randomNum >= 7){
      digitalWrite(seventh, HIGH);
      delay(pace);
      digitalWrite(seventh,LOW);
      }
    }
  
}

