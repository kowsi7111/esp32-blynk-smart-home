//Include the library files
#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID " "//Your Template Id
#define BLYNK_TEMPLATE_NAME " "//your Template Name
#define BLYNK_AUTH_TOKEN " "//your Auth Token

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

//Define the relay pins
#define relay1 26  // Change the pin as per your ESP32 board
#define relay2 27  // Change the pin as per your ESP32 board
#define relay3 32  // Extra bulb
#define relay4 33  // Extra bulb

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = ""; //Enter your WiFi name
char pass[] = ""; //Enter your WiFi password

//Get the button values
BLYNK_WRITE(V0) {
  bool value1 = param.asInt();
  // Check these values and turn the relay1 ON and OFF
  digitalWrite(relay1, value1 ? LOW : HIGH);
}

//Get the button values
BLYNK_WRITE(V1) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  digitalWrite(relay2, value2 ? LOW : HIGH);
}

//Get the button values
BLYNK_WRITE(V2) {
  bool value3 = param.asInt();
  // Check these values and turn the relay3 ON and OFF
  digitalWrite(relay3, value3 ? LOW : HIGH);
}

//Get the button values
BLYNK_WRITE(V3) {
  bool value4 = param.asInt();
  // Check these values and turn the relay4 ON and OFF
  digitalWrite(relay4, value4 ? LOW : HIGH);
}

void setup() {
  Serial.begin(115200);
  //Set the relay pins as output pins
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);

  // Turn OFF the relay
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);

  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}
