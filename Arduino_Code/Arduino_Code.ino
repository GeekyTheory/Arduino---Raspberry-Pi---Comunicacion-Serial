/*
     Arduino + Raspberry Pi - Comunicacion Serial
	
Mario Pérez Esteso
http://www.geekytheory.com
https://www.youtube.com/user/telecoreference

https://twitter.com/geekytheory

Facebook page! Join us with a LIKE!
https://www.facebook.com/geekytheory
*/
int led = 13;

void setup () {
  pinMode(led, OUTPUT); //LED 13 como salida
  Serial.begin(9600); //Inicializo el puerto serial a 9600 baudios
}

void loop () {
  if (Serial.available()) { //Si está disponible
    char c = Serial.read(); //Guardamos la lectura en una variable char
    if (c == 'H') { //Si es una 'H', enciendo el LED
      digitalWrite(led, HIGH);
    } else if (c == 'L') { //Si es una 'L', apago el LED
      digitalWrite(led, LOW);
    }
  }
}
