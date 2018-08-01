//
// Created by Stephen O Brien on 28/06/2018.
//

#ifndef OBSERVEREXAMPLE_OBSERVER_H
#define OBSERVEREXAMPLE_OBSERVER_H



class Observer {
public:


    Observer();

    void update(int);

    int getTemperature();

private:
    int temperature;


};


#endif //OBSERVEREXAMPLE_OBSERVER_H
