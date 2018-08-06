//
// Created by Stephen O Brien on 28/06/2018.
//

#include "Observer.h"
#include <iostream>


//observer constructor
Observer::Observer() {

    temperature = 1;
}

//updating the temperature variable of the observer, this is used by the weather balloon class to update all its
//observer objects.
void Observer::update(int t) {

    temperature = t;

}
// returning the current temperature
int Observer::getTemperature() {
    return temperature;
}