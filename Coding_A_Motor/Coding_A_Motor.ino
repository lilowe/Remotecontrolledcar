void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  goBackwards();
  delay(750);
  goForwards();
  delay(750);
  goRight();
  delay(750);
  goLeft();
  delay(750);
}


void goBackwards() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  analogWrite(11, 255);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  analogWrite(5, 255);
}


void goForwards() {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  analogWrite(11, 255);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  analogWrite(5, 255); 
}


void goRight () {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  analogWrite(13, 0);
  digitalWrite(7, LOW);
  digitalWrite(6,  HIGH);
  analogWrite(5,  255);
}


void goLeft () {
  digitalWrite(13, HIGH);
  digitalWrite(12,  LOW);
  analogWrite(12,  255);
  digitalWrite(7,  LOW);
  digitalWrite(6,  LOW);
  analogWrite(5,  0); 
  
  
  
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  



