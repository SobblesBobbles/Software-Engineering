//
// Created by Stephen O Brien on 28/06/2018.
//

#ifndef OBSERVEREXAMPLE_OBSERVER_H
#define OBSERVEREXAMPLE_OBSERVER_H
#include <iostream>
using namespace std;
/*
 * The observer class is a class that observers another class's attributes and makes sure that its variable is
 * up-to-date with its Observee. Here the observer monitors the weather balloons temperature variables and makes sure
 * that its own temperature variable is in sync with the weather balloons temperature variable.
 */


class Observer {
public:

// public functions
    Observer();
    //update its current temp to a new temperature
    void update(int);
    // returns the current temperature
    int getTemperature();
    void setID(int s);
    int getID();
    void setName(string s);
    string getName();



    // private variables
private:
    string name;
    int idNumber;
    int temperature;



};


#endif //OBSERVEREXAMPLE_OBSERVER_H
