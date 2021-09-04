#ifndef ULTRASONICO_H 
#define ULTRASONICO_H 
#include <Arduino.h> 
class Ultrasonico
{
private:
    byte pinTrigger;
    byte pinEcho;
    int currentDistance;

public:
    Ultrasonico(byte pinTrigger, byte pinEcho);
    void init();
    int read();
};
#endif