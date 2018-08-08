//
// Created by Stephen O Brien on 08/08/2018.
//

#ifndef OBSERVEREXAMPLE_UNIT_H
#define OBSERVEREXAMPLE_UNIT_H
#include "Observer.h"


class Unit {

public:
    virtual void setObserver(Observer* obs)=0;
    virtual Observer* getObserver()=0;

};


#endif //OBSERVEREXAMPLE_UNIT_H
