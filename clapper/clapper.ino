int switchPin = 12;
int minimum = 50;
bool on = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (switchPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sound = analogRead(A0);
  if (sound > minimum){
    Serial.println ("clap");
    if (on) {
     digitalWrite (switchPin, LOW); 
    }
    else {
     digitalWrite (switchPin, HIGH); 
    }
    on = !on;
    delay (1000);
      
  } 
}
