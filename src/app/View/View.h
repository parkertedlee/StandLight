#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Led.h"

enum {LIGHT_OFF, LIGHT_ON};

class View
{
private:
    int lightState;
    Led *light[6];
    

public:
    View(Led *led0,Led *led1,Led *led2,Led *led3,Led *led4);
    virtual ~View();
    void lightView();
    void updateState(std::string strState);
    void lightOn();
    void lightOff();
};

#endif