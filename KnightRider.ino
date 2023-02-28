#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

#define BUTTON_PIN 8
#define POTENTIOMETER_PIN A0

/* NOTES AND TONES */
const int pinTone = 8;

typedef struct {
  int note;
  int tempo;
} notesType;

const notesType aNotes[] = {
    // 1
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    // 2
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    // 3
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    // solo 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_E5, 1500}, 
    {NOTE_A5, 250}, {NOTE_AS5, 125}, {NOTE_A5, 125}, {NOTE_E5, 1500}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_E5, 250}, {NOTE_A5, 250}, {NOTE_G5, 2000}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_E5, 1500}, 
    {NOTE_A5, 250}, {NOTE_AS5, 125}, {NOTE_A5, 125}, {NOTE_E5, 1500}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_E5, 250}, {NOTE_A5, 250}, {NOTE_AS5, 2500}, {NOTE_G5, 250}, {NOTE_A5, 500}
};

int noteIndex = -1;
int totalNotes;

unsigned long tonePrevTime = 0;
int noteDelay = 10;


byte lastButtonState = LOW;
byte ledState = LOW;
unsigned long lastTimeButtonStateChanged = 0;


unsigned long previousMillisLed = 0;  // Time when the previous state change occurred
unsigned long previousMillisButton = 0;
unsigned long previousMillisNotes = 0;

int leds[11] = {3, 5, 6, 9, 10, 11, 10, 9, 6, 5, 3};
int currLed = 0;

void setup() {
    totalNotes = sizeof(aNotes) - 1;
  	Serial.begin(9600);
  	// Configure pins 2 through 7 to behave as outputs(i.o. LEDs)
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
  
    // Configure pin 8 as input(i.o. Button)
    pinMode(BUTTON_PIN, INPUT_PULLUP);

    // Play melody
    for (int i = 0; i < 200; i++) {
        noteIndex++;
        noTone(2);
        tone(2, aNotes[noteIndex].note, aNotes[noteIndex].tempo);

        noteDelay = aNotes[noteIndex].tempo;
      
    }
  
}

void loop() {
  	unsigned long currentMillis = millis();  // Get the current time
  
  	// Obtain speed from potentiometer
  	int potentiometerValue = analogRead(POTENTIOMETER_PIN);
  	int brightness = potentiometerValue / 4;

      // Update button state
     if (currentMillis - previousMillisButton > 50) {
        byte buttonState = digitalRead(BUTTON_PIN);
     	if (buttonState != lastButtonState) {
           lastTimeButtonStateChanged = currentMillis;
           lastButtonState = buttonState;
           if (buttonState == LOW) {
               ledState = (ledState == HIGH) ? LOW: HIGH;
           }
       }
    }
  
  	// Turn on/off leds
    if (currentMillis - previousMillisLed >= potentiometerValue + 5 && ledState == HIGH) {
    	previousMillisLed = currentMillis;  // Update the previous time

        // Turn off previous LED
      	if (currLed == 0) {
        	digitalWrite(leds[1], LOW);
        } else {
        	digitalWrite(leds[currLed-1], LOW);
        }
      
        // Turn on the new LED
        digitalWrite(leds[currLed], HIGH);
      	
        if (currLed == sizeof(leds) - 1) {
			currLed = 0;
        } else {
        	currLed++;
        }
    } else if (ledState == LOW) { // If button state off - turn off all leds
        digitalWrite(3, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        currLed = 0;
    }
}
