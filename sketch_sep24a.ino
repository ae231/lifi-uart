/*
 * Li-Fi UART Transmitter
 * Sends serial data through an LED using UART.
 */

//transimmiter*/
void setup() {
  Serial.begin(9600); // Start UART at 9600 baud
}

void loop() {
  Serial.println("HELLO FROM LIFI UART!");
  delay(1000); // Send once every second
}
  /*
 * Li-Fi UART Receiver
 * Reads light data from a photodiode and displays it on the serial monitor.
 */



/*reciver code*/

void setup() {
  Serial.begin(9600); // Start UART at the same baud rate
}

void loop() {
  if (Serial.available()) {
    String data = Serial.readStringUntil('\n');
    Serial.print("Received: ");
    Serial.println(data);
  }
}
