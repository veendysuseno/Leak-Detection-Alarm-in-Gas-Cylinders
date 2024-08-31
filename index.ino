#define Buzzer 8
#define Gas 7

void setup() {
  pinMode(Gas, INPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop() {
  int state = digitalRead(Gas);       //Baca sensor Gas
    if(state == LOW) {                //Jika ada Gas bocor, maka
      for(int i = 0; i < 5; i++){     //Ulang prosedur alarm(); sebanyak 5 kali
        alarm();
      }
    }
    else {                            //Jika tidak ada Gas bocor, maka
      delay(1000);                    //Jeda pembacaan sensor selama 1000 ms
    }
}

void alarm(){                         //Prosedur alarm
  digitalWrite(Buzzer, HIGH);         //Nyalakan buzzer
  delay(500);                         //Selama 500 ms
  digitalWrite(Buzzer, LOW);          //Matikan buzzer
  delay(500);                         //Selama 500 ms
}
