//
// Created by Stephen O Brien on 28/06/2018.
//

#include "WeatherBalloon.h"

#include <iostream>

using namespace std;

WeatherBalloon::WeatherBalloon() {
    // initialising the weather balloons temperature to 1.
    temperature = 1;
}

// sets temperature of the WeatherBalloon function
void WeatherBalloon::setTemperature(int t){
    temperature = t;

    // function to update all of the observers
    updateAll(views);

}

// add observer function
void WeatherBalloon::addObserver(Observer *observer) {
    // pushing a new observer into the weather balloons list of observers.
    views.push_back(observer);
}

// print the observer temperatures
void WeatherBalloon::printObservers(){

    for (int i = 0; i<views.size(); i++){
        // prints the current temperature of all the observers.
        cout<<"Observer "<<i<<" ="<<views[i]->getTemperature()<<endl;
    }
}

// updates all of the observers through iteration of the vector

void WeatherBalloon::updateAll(vector<Observer*> updateView){
    for (int i = 0; i<updateView.size(); i++){
        // updates the current vector index with the new temperature
        updateView[i]->update(temperature);
    }
}
// takes off the last observer added
void WeatherBalloon::unsubscribeObserver() {
 /*
  * just for demonstration purposes, you would want to declare which observer you want to delete.
  * However, since we dont have a unique way to seperating the different observers ( like an ID number).
  * We will just delete the last item using vector.pop_back()
  * */

    views.pop_back();
}
