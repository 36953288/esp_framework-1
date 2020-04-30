#ifndef _ESP_FRAMEWORK_WIFI_H
#define _ESP_FRAMEWORK_WIFI_H

#define ESP_MODULE_NOT_IMPLEMENT    100

class ESPFrameworkModule {

public:
    virtual int setup(void) { return -ESP_MODULE_NOT_IMPLEMENT; }
    virtual int loop(void) { return -ESP_MODULE_NOT_IMPLEMENT; }
};

#endif