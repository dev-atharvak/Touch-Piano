const int keys[8] = {27,26,25,33,32,14,12,13};
const int notes[8] = {262,294,330,349,392,440,494,523};

const int speakerPin = 18;
const int channel = 0;
const int resolution = 8;

void setup() {
 
  for (int i = 0; i < 8; i++) {
    pinMode(keys[i], INPUT);
  }

  ledcAttach(speakerPin, 2000, resolution);   // new syntax
}

void loop() {
  bool playing = false;

  for (int i = 0; i < 8; i++) {
    if (digitalRead(keys[i]) == HIGH) {
      ledcWriteTone(speakerPin, notes[i]);   // new syntax
      playing = true;
      break;
    }
  }

  if (!playing) {
    ledcWriteTone(speakerPin, 0);
  }
}
