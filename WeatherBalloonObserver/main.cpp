#include <iostream>
#include "WeatherBalloon.h"
#include "Observer.h"
using namespace std;

int main() {

    /*
     * Observer Pattern:
     * As we can see, A Weather Balloon collects the current temperature of Maynooth University. It has observers that
     * want to collect this information and use it. (Weather News, apple weather etc).
     * The idea is to connect the observers to the subject or observee. When the observer/subject/weather balloon
     * changes temperature, it sends an update to the observers and changes their current reading of the temperature.
     */


    // creates an observee on the heap
    WeatherBalloon* balloon = new WeatherBalloon();

    // creating two observers on the heap
    Observer* obs1 = new Observer();
    Observer* obs2 = new Observer();


    // adding the observers to the observee vector
    balloon->addObserver(obs1);
    balloon->addObserver(obs2);

    balloon->unsubscribeObserver();

    cout<<"The weather balloon temperature changes "<<endl;

    // this sets the temperature that the weatherballoon has collected and updated the observers
    balloon->setTemperature(10);


    // this function prints the temps of the different observers
    balloon->printObservers();


    cout<<"The weather balloon temperature changes "<<endl;

    // resets the temperature
    balloon->setTemperature(37);

    // prints the new temperature
    balloon->printObservers();

    // deleting the observee does not delete the observers. This shows that the relationship is aggregation.
    delete balloon;

    // proof that the observers still exist in memory
    cout<<obs1->getTemperature()<<endl;
    cout<<obs2->getTemperature()<<endl;

    // deleting the remaining objects from the heap.
    delete obs1;
    delete obs2;



    return 0;
}