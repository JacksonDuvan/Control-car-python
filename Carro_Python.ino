//Declaramos las variables de los motores 
int N1 = 3;
int N2 = 6; 

int N3 = 9;
int N4 = 11;

int val;//Variable que recibira los datos de Python 
void setup() {
 Serial.begin(9600);//Iniciamos comunicacion Serial
  
  //Declaramos las salidas 
  pinMode(N1,OUTPUT);
  pinMode(N2,OUTPUT);
  pinMode(N3,OUTPUT);
  pinMode(N3,OUTPUT);

}
void loop() {
  if(Serial.available() >= 1){ //Esperamos conectividad con el Bluetoth 
     val = Serial.read();//Lee los datos 
     
  if(val == 'a'){ //Si val es igual a 'a' entonces que se mueva hacia adelante 
    digitalWrite(N1,HIGH);
    digitalWrite(N2,LOW);
    digitalWrite(N3,LOW);
    digitalWrite(N4,HIGH);
    }
  else if(val == 'i'){ //Sino si val es igual a 'i' entonces que se mueva hacia la izquierda 
    digitalWrite(N1,HIGH);
    digitalWrite(N2,LOW);
    digitalWrite(N3,LOW);
    digitalWrite(N4,LOW);
    }
  else if(val == 'd'){ //Sino si val es igual a 'd' entonces que pare 
    digitalWrite(N1,LOW);
    digitalWrite(N2,LOW);
    digitalWrite(N3,LOW);
    digitalWrite(N4,LOW);
    }
  else if(val == 'r'){ //Sino si val es igual a 'r' entonces que se mueva hacia atras 
    digitalWrite(N1,LOW);
    digitalWrite(N2,HIGH);
    digitalWrite(N3,HIGH);
    digitalWrite(N4,LOW);
    }
  else if(val == 's'){ //Sino si val es igual a 's' entonces que se mueva hacia la derecha 
    digitalWrite(N1,LOW);
    digitalWrite(N2,LOW);
    digitalWrite(N3,LOW);
    digitalWrite(N4,HIGH);
    }
  }
}
