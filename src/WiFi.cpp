
#include "WiFi.h"
#if defined(ARDUINO_ARCH_ESP8266)
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#elif defined(ARDUINO_ARCH_ESP32)
#include <WiFi.h>
#include <WebServer.h>
#endif
#include <AutoConnect.h>

#if defined(ARDUINO_ARCH_ESP8266)
static ESP8266WebServer Server;
#elif defined(ARDUINO_ARCH_ESP32)
static WebServer Server;
#endif

static AutoConnect       Portal(Server);
static AutoConnectConfig Config;

int ESPFrameworkWiFi::setup(void) {
    Portal.begin();

    return 0;
}

int ESPFrameworkWiFi::loop(void) {
    Portal.handleClient();

    return 0;
}