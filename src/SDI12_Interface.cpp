/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(AUTOMATIC);

// Run the application and system concurrently in separate threads
SYSTEM_THREAD(ENABLED);

// Show system, cloud connectivity, and application logs over USB
// View logs with CLI using 'particle serial monitor --follow'
SerialLogHandler logHandler(LOG_LEVEL_INFO);

// setup() runs once, when the device is first turned on
int LED = D1;              // LED connected to D1
int LED2 = D2;              // LED connected to D1
//init serial transfer
void setup() {

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  digitalWrite(LED, HIGH); // sets the LED on
  digitalWrite(LED2, HIGH); // sets the LED on
  delay(200);              // waits for 200mS
  digitalWrite(LED, LOW);  // sets the LED off
  digitalWrite(LED2, LOW);  // sets the LED off
  delay(200);              // waits for 200mS

  // Example: Publish event to cloud every 10 seconds. Uncomment the next 3 lines to try it!
  // Log.info("Sending Hello World to the cloud!");
  // Particle.publish("Hello world!");
  // delay( 10 * 1000 ); // milliseconds and blocking - see docs for more info!
  // Hello
  
}
