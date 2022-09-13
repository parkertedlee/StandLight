#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "View.h"
#include <string>



class Controller
{
private:
    int lightState;
    View *view;
    
public:
    Controller(View *viewer);
    virtual  ~Controller();
    void updateEvent(std::string strBtn);//매개변수를 문자열로 주겠다
};

#endif