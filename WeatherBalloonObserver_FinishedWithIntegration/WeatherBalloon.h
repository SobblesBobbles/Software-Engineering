//
// Created by Stephen O Brien on 28/06/2018.
//

#ifndef OBSERVEREXAMPLE_WEATHERBALLOON_H
#define OBSERVEREXAMPLE_WEATHERBALLOON_H


#include "Observer.h"
#include <vector>
using namespace std;


/*
 * This class is the "OBSERVEE" part of the observer pattern. The class will act as a place where
 * other classes will get their information from. This weather balloon class will act as the only place
 * we can access the current temperature. It contains a vector (list) of all the objects that are watching (observing)
 * for the current temperature and will update the temperature within these observing objects when a new temperature
 * reading occurs.
 */

// class declaration
class WeatherBalloon {

    //public functions
public:
    //initialisation
    WeatherBalloon();
    //adding a new observer to the list of observers of the weather balloon
    void addObserver(Observer* observer);
    //delete an observer

    void unsubscribeObserver();
    //printing this list
    void printObservers();
    // this function calls "updateAll" inside of it.
    void setTemperature(int);
    // this is where we update the observer list
    void updateAll();

    void unsubscribeObserver(string);


    // private variables
private:

    int temperature;
    vector<Observer*> views;
};


#endif //OBSERVEREXAMPLE_WEATHERBALLOON_H
