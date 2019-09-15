#include <MIDI.h>

MIDI_CREATE_DEFAULT_INSTANCE();
int cy = 10;
void setup() {
  MIDI.begin(MIDI_CHANNEL_OMNI);
  pinMode(cy, INPUT);
  //Serial.begin(9600);
}


int mapValue(int porta) {
  int sensorValue = analogRead(porta);
  return sensorValue;
  /*if (sensorValue > 10) {
    return 90;
    }else {
    return 0;
    }*/
  /*if(sensorValue > 10){
    return sensorValue;
    }else{
    return 0;
    }*/
}






int digital(int porta) {
  pinMode(porta, INPUT);
  return digitalRead(porta);
}


void loop() {
  //36 kick
  //38 snare
  //48 hh close
  //54 hh open
  //71 T1

/*
  int cyState = digitalRead(cy);
  //Cymbal
  if (cyState == 1) {
    if (mapValue(A0) > 5) {
      int cont = 0;
      int soma = 0;
      while (true) {
        soma += mapValue(A0);
        cont += 1;
        if (mapValue(A0) == 0) {
          break;
        }
      }
      int value = (soma / cont);

      if (value > 127) {
        MIDI.sendNoteOn(48, 127, 1);
      } else {
        MIDI.sendNoteOn(48, value, 1);
      }
    }

  } else {
    //Quando apertar tocar nota implementar
    if (mapValue(A0) > 5) {
      int cont = 0;
      int soma = 0;
      while (true) {
        soma += mapValue(A0);
        cont += 1;
        if (mapValue(A0) == 0) {
          break;
        }
      }
      int value = (soma / cont);

      if (value > 127) {
        MIDI.sendNoteOn(54, 127, 1);
      } else {
        MIDI.sendNoteOn(54, value, 1);
      }
    }

  }
  //Serial.println(mapValue(A0));

  //SNARE
  //MIDI.sendNoteOn(38, mapValue(A3), 1);
  if (mapValue(A3) > 3) {
    int cont = 0;
    int soma = 0;
    while (true) {
      soma += mapValue(A3);
      cont += 1;
      if (mapValue(A3) == 0) {
        break;
      }
    }
    int value = (soma / cont);

    if (value > 127) {
      MIDI.sendNoteOn(38, 127, 1);
    } else {
      MIDI.sendNoteOn(38, value, 1);
    }
  }

  //Kick

  if (mapValue(A1) > 4) {
    int cont = 0;
    int soma = 0;
    while (true) {
      soma += mapValue(A1);
      cont += 1;
      if (mapValue(A1) == 0) {
        break;
      }
    }
    int value = (soma / cont) * 3;

    if (value > 127) {
      MIDI.sendNoteOn(36, 127, 1);
    } else {
      MIDI.sendNoteOn(36, value, 1);
    }
  }


*/
  //T1
  if (mapValue(A4) > 10) {
    int cont = 0;
    int soma = 0;
    while (true) {
      soma += mapValue(A4);
      cont += 1;
      if (mapValue(A4) == 0) {
        break;
      }
    }
    int value = (soma / cont);

    if (value > 127) {
      MIDI.sendNoteOn(71, 127, 1);
    } else {
      MIDI.sendNoteOn(71, value, 1);
    }
  }



  //T2
  if (mapValue(A2) > 10) {
    int cont = 0;
    int soma = 0;
    while (true) {
      soma += mapValue(A2);
      cont += 1;
      if (mapValue(A2) == 0) {
        break;
      }
    }
    int value = (soma / cont);

    if (value > 127) {
      MIDI.sendNoteOn(69, 127, 1);
    } else {
      MIDI.sendNoteOn(69, value, 1);
    }
  }

  //T3

/*
  if (mapValue(A5) > 3) {
    int cont = 0;
    int soma = 0;
    while (true) {
      soma += mapValue(A5);
      cont += 1;
      if (mapValue(A5) == 0) {
        break;
      }
    }
    int value = (soma / cont);

    if (mapValue(A5) > 127) {
      MIDI.sendNoteOn(67, 127, 1);
    } else {
      MIDI.sendNoteOn(67, value, 1);
    }
  }

  if (digital(5) == 0) {
    MIDI.sendNoteOn(77, 90, 1);
  }



*/
  MIDI.read();
}


