//Arduino Uno Code for 7-Segment Display Counter
 
 
const int segmentPins[] = {2, 3, 4, 5, 6, 7, 8}; // a to g 
 
const byte digits[10][7] = { 
  {1,1,1,1,1,1,0}, // 0 
  {0,1,1,0,0,0,0}, // 1 
  {1,1,0,1,1,0,1}, // 2 
  {1,1,1,1,0,0,1}, // 3 
  {0,1,1,0,0,1,1}, // 4 
  {1,0,1,1,0,1,1}, // 5 
  {1,0,1,1,1,1,1}, // 6 
  {1,1,1,0,0,0,0}, // 7 
  {1,1,1,1,1,1,1}, // 8 
  {1,1,1,1,0,1,1}  // 9 
}; 
 
void setup() { 
  for (int i = 0; i < 7; i++) { 
    pinMode(segmentPins[i], OUTPUT); 
  } 
} 
 
void loop() { 
  for (int i = 0; i < 10; i++) {     
    for (int seg = 0; seg < 7; seg++) { 
      digitalWrite(segmentPins[seg], digits[i][seg]); 
    } 
    delay(1000); 
  } 
} 
  
 

 
 
 
