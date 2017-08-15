#ifndef GarageDoor_h
#define GarageDoor_h

#define MQTT_VERSION MQTT_VERSION_3_1_1

// Wifi: SSID and password
const char* WIFI_SSID = "****";
const char* WIFI_PASSWORD = "****";

//Wifi: IP Gateway Subnet DNS Setup
IPAddress ip(10, 1, 1, 243);
IPAddress gateway(10, 1, 1, 1);
IPAddress subnet(255, 255, 255, 0);
IPAddress dns (10, 1, 1, 1);

// MQTT: ID, server IP, port, username and password
const PROGMEM char* MQTT_CLIENT_ID = "Garage_Control";
const PROGMEM char* MQTT_SERVER = "10.1.1.103";
const PROGMEM uint16_t MQTT_SERVER_PORT = 1883;
const PROGMEM char* MQTT_USER = "****";
const PROGMEM char* MQTT_PASSWORD = "****";

//MQTT: State and Command Topics
const char* MQTT_SENSOR_STATE_TOPIC = "garage/door/status";
const char* MQTT_SENSOR_COMMAND_TOPIC = "garage/door/command";

//MQTT: Payloads
const char* DOOR_OPEN = "OPEN";
const char* DOOR_CLOSED = "CLOSED";
const char* DOOR_CLOSING = "CLOSING";
const char* DOOR_OPENING = "OPENING";
const char* DOOR_ERROR = "ERROR";
const char* DOOR_STATE_PREVIOUS = "UNKNOWN";
const char* DOOR_STOPPED = "STOPPED";
const char* DOOR_RESTORING = "RESTORING";

//Door Setup: Max time for door to open and close | button hold down length, 1000= 1 seconds
const int Door_Transition_Seconds = 20;
const int Door_Button_Press_Length = 500;

int closeswitchPin = 5;
int openswitchPin = 4;

//Testing digital pin: 1 for command state from HASS. Will blink when button pressed from HASS
int GARAGE_RELAY = 14;
int AUX_RELAY = 12;


#endif
