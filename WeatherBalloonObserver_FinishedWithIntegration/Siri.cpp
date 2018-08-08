//
// Created by Stephen O Brien on 08/08/2018.
//

#include "Siri.h"
#include <iostream>
using namespace std;

Siri::Siri() {

    cout<<"Welcome to Siri!"<<endl;


}
void Siri::setObserver(Observer *obs) {
    temp_observer = obs;
    temp_observer->setID(1003);
    temp_observer->setName("Siri");
}

Observer* Siri::getObserver() {
    return temp_observer;
}