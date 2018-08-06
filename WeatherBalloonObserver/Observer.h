//
// Created by Stephen O Brien on 28/06/2018.
//

#ifndef OBSERVEREXAMPLE_OBSERVER_H
#define OBSERVEREXAMPLE_OBSERVER_H



class Observer {
public:

// public functions
    Observer();
    //update its current temp to a new temperature
    void update(int);
    // returns the current temperature
    int getTemperature();

    // private variables
private:
    int temperature;


};


#endif //OBSERVEREXAMPLE_OBSERVER_H
