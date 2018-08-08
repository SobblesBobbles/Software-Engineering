//
// Created by Stephen O Brien on 08/08/2018.
//

#ifndef OBSERVEREXAMPLE_SIRI_H
#define OBSERVEREXAMPLE_SIRI_H
#include "Observer.h"
#include "Unit.h"
#include <iostream>
using namespace std;


class Siri : public Unit {

private:
    Observer* temp_observer;
    string name;

public:
    Siri();
    void setObserver(Observer* obs);
    Observer* getObserver();


};


#endif //OBSERVEREXAMPLE_SIRI_H
