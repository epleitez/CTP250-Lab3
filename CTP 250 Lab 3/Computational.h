//
// Created by Emely Pleitez on 9/21/22.
//

#ifndef CTP_250_LAB_3_COMPUTATIONAL_H
#define CTP_250_LAB_3_COMPUTATIONAL_H
#include <string>

using namespace std;
template <typename T>

class Computational {

public:
    virtual T maximumElement() = 0;
    virtual T countElements(T) = 0;
    virtual T printReverse() = 0;
    virtual void increaseElementsBy(T) = 0;
    virtual bool findElement(T) = 0;
    virtual bool isFull() = 0;
    virtual void add(T) = 0;
    //virtual void removeLast() = 0;

};


#endif //CTP_250_LAB_3_COMPUTATIONAL_H
