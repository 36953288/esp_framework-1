#include "Framework.h"
#include "WiFi.h"

ESPFramework::ESPFramework(unsigned long baud) {
    _baud = baud;
}

void ESPFramework::setup(void) {

    for (ESPFrameworkModule *i : _modules_list) {
        i->setup();
    }
}

void ESPFramework::loop(void) {
    for (ESPFrameworkModule *i : _modules_list) {
        i->loop();
    }
}
