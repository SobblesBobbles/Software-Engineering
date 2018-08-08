#include <iostream>
#include "WeatherBalloon.h"
#include "Observer.h"
#include "Siri.h"
#include "Alexa.h"
using namespace std;

int main() {
    /*
     * Idea behind this example is that a UNIT is a hypothetical system that wants the current temperature from
     * the weatherballoon. I've created a sub-class SIRI (apple) that is a class that stores an observer in it, SIRI
     * is not just a temperature receiver, it can have many other functionality but we store the ability to observe
     * in an encapsulated observer object inside the class.
     */

    WeatherBalloon* balloon = new WeatherBalloon();

    Observer* object1 = new Observer();
    Observer* object2 = new Observer();




    //creating a new siri object
    Unit* siri = new Siri();


    Unit* alexa = new Alexa();



    //putting the observer into the memory address of the siri observer object.
    siri->setObserver(object1);

    alexa->setObserver(object2);

    /*
     * This is the connection between the balloon and siri. What we are saying here is that we are putting Siri's
     * observer into the list of the weather balloons observers. They are now connected.
     * This is re-enforced by resetting the temperature and then checking if the temperature changes.
     */
    balloon->addObserver(siri->getObserver());
    balloon->addObserver(alexa->getObserver());

    balloon->setTemperature(99);

    cout<<"Siri's observer temperature is => "<<siri->getObserver()->getTemperature()<<endl;
    cout<<"Alexa's observer temperature is => "<<alexa->getObserver()->getTemperature()<<endl;


    cout<<"Printing the weather balloon's observers"<<endl;
    balloon->printObservers();

    cout<<"*****"<<endl;
    cout<<endl;
    balloon->setTemperature(104);

    cout<<"Siri's observer temperature is => "<<siri->getObserver()->getTemperature()<<endl;
    cout<<"Alexa's observer temperature is => "<<alexa->getObserver()->getTemperature()<<endl;

    cout<<endl;
    cout<<"Printing the weather balloon's observers"<<endl;
    balloon->printObservers();

    balloon->unsubscribeObserver("Alexa");


    cout<<endl;
    cout<<"Printing the weather balloon's observers"<<endl;
    balloon->printObservers();











    return 0;
}