//
// Created by Stephen O Brien on 08/08/2018.
//
#include <iostream>
using namespace std;

#include "Alexa.h"
Alexa::Alexa() {
    cout<<"Welcome to Alexa!"<<endl;


}

void Alexa::setObserver(Observer *obs) {
    temp_observer = obs;
    temp_observer->setID(1002);
    temp_observer->setName("Alexa");
}

Observer* Alexa::getObserver() {
    return temp_observer;
}