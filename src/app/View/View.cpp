#include "View.h"
#include <wiringPi.h>

View:: View(Led *led0,Led *led1,Led *led2,Led *led3,Led *led4)
{
    light[0] = led0;
    light[1] = led1;
    light[2] = led2;
    light[3] = led3;
    light[4] = led4;
    lightState =LIGHT_OFF;
}

View::~View()
{

}

void View::updateState(std::string strState)
{
    switch (lightState)
    {
       case LIGHT_OFF:
        if (strState == "StateOn"){
            lightState = LIGHT_ON;
        }
        break;

       case LIGHT_ON:
        lightOn();
        if(strState == "StateOn"){
            lightState = LIGHT_ON;
        }
        break;
    }
}


void View::lightView()
{
    switch (lightState)
    {
       case LIGHT_OFF:
        

        break;

       case LIGHT_ON:
        lightOn();
        lightState=LIGHT_OFF;
        break;
    }
}

void View::lightOn()
{
    static int i;
    light[i++]->On();
    if(i>=6)
    {
        light[0]->Off();
        light[1]->Off();
        light[2]->Off();
        light[3]->Off();
        light[4]->Off();
        i=0;
    }
}

void View::lightOff()
{
    light[0]->Off();
}

