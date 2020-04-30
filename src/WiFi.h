#ifndef _ESP_FRAMEWORK_WIFI_H
#define _ESP_FRAMEWORK_WIFI_H

#include "Module.h"

class ESPFrameworkWiFi: ESPFrameworkModule {

public:
    int setup(void);
    int loop(void);
};

#endif