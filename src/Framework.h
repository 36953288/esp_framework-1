#ifndef _ESP_FRAMEWORK_H
#define _ESP_FRAMEWORK_H

#include <list>
#include <Arduino.h>
#include "Module.h"


class ESPFramework {
private:
    unsigned long _baud;
    std::list<ESPFrameworkModule *> _modules_list;

public:
    ESPFramework(unsigned long baud);
    ESPFramework() { ESPFramework(115200); }
    void setup();
    void loop();
    void add_module(ESPFrameworkModule *module) {
        return _modules_list.push_back(module);
    }
};

#endif