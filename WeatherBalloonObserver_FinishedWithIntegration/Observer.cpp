//
// Created by Stephen O Brien on 28/06/2018.
//

#include "Observer.h"
#include <iostream>
using namespace std;


//observer constructor
Observer::Observer() {

    temperature = 1;
    idNumber = 1000;
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

void Observer::setID(int s){
    cout<<"setting";
    idNumber = s;
    cout<<"done";
}
int Observer::getID() {
    return idNumber;
}
void Observer::setName(string s) {
    name = s;
}
string Observer::getName(){
    return name;
}