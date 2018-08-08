//
// Created by Stephen O Brien on 08/08/2018.
//

#ifndef OBSERVEREXAMPLE_ALEXA_H
#define OBSERVEREXAMPLE_ALEXA_H
#include "Unit.h"

class Alexa : public Unit{

private:
    Observer* temp_observer;

public:
    Alexa();
    void setObserver(Observer* obs);
    Observer* getObserver();



};


#endif //OBSERVEREXAMPLE_ALEXA_H
