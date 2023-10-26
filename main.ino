#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

const char* ssid = "Honor - 6X";
const char* password = "abc123**";

const int relayPin = D4; // Define the pin connected to the relay

ESP8266WebServer server(80);

// Variables to store charging timeout and status
int chargingTimeout = 0;
bool chargingEnabled = true;

void setup() {
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  // Print the URL to access the web interface
  Serial.print("Access the web interface at: http://");
  Serial.println(WiFi.localIP()); // Print the IP address
  // Define server routes
  server.on("/", HTTP_GET, handleRoot);
  server.on("/set_timeout", HTTP_POST, handleSetTimeout);
  server.on("/toggle_charging", HTTP_GET, handleToggleCharging);

  // Initialize the relay pin
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // Initially, turn on the relay (enable charging)

  // Start the server
  server.begin();
}
