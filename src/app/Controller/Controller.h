#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Led.h"
#include <string>

enum {LIGHT_OFF, LIGHT_ON};

class Controller
{
private:
    int lightState;
    Led *light;
    
public:
    Controller(Led *Led);
    virtual  ~Controller();
    void updateEvent(std::string strBtn);//매개변수를 문자열로 주겠다
};

#endif