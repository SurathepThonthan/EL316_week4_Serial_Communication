

#define LED_PIN     10      /* specify LED PIN
#define SW_PIN      2      /* specify Switch PIN
//char received_data ;         /* variable to store read data */


void setup() {
  
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  
}

void loop() {
  char received_data ;  
  if (Serial.available() > 0) {             /* check for any data received */
    received_data = Serial.read();          /* read received data */
    Serial.print("Received data is: ");

    /* check for received command for action */
    if (received_data == '1') {
      digitalWrite(LED_PIN, HIGH);
      Serial.println(received_data);
    }
    else if (received_data == '0') {
      digitalWrite(LED_PIN, LOW);
      Serial.println(received_data);
    }
    else
      Serial.println("Invalid input"); 
  }
}
