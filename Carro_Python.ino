int N1 = 5;
int N2 = 6; 

int N3 = 9;
int N4 = 10;

int val;
void setup() {
 Serial.begin(9600);
  pinMode(N1,OUTPUT);
  pinMode(N2,OUTPUT);
  pinMode(N3,OUTPUT);
  pinMode(N3,OUTPUT);

}
void loop() {
  if(Serial.available() >= 1){
     val = Serial.read();
     
  if(val == 'a'){
    digitalWrite(N1,HIGH);
    digitalWrite(N2,LOW);
    digitalWrite(N3,LOW);
    digitalWrite(N4,HIGH);
    Serial.println("Adelante");
    }
  else if(val == 'i'){
    digitalWrite(N1,HIGH);
    digitalWrite(N2,LOW);
    digitalWrite(N3,LOW);
    digitalWrite(N4,LOW);
    Serial.println("Derecha");
    }
  else if(val == 'd'){
    digitalWrite(N1,LOW);
    digitalWrite(N2,LOW);
    digitalWrite(N3,LOW);
    digitalWrite(N4,LOW);
    Serial.println("Stop");
    }
  else if(val == 'r'){
    digitalWrite(N1,LOW);
    digitalWrite(N2,HIGH);
    digitalWrite(N3,HIGH);
    digitalWrite(N4,LOW);
    Serial.println("Atras");
    }
  else if(val == 's'){
    digitalWrite(N1,LOW);
    digitalWrite(N2,LOW);
    digitalWrite(N3,LOW);
    digitalWrite(N4,HIGH);
    Serial.println("Izquierda");
    }
  }
}
