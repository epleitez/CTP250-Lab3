#include <iostream>
#include "MyArray.h"

using namespace std;


int main(){

    int anArray[10] = {1,2,3,4,5,6,7,8,9,10};
    double anArray2[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8,9.9, 10.10};
    char anArray3[10] = {'a', 'b' ,'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};


    MyArray<int> myArr(anArray);
    myArr.displayArray();
    //myArr.countElements(2);
    //myArr.printReverse();
    //myArr.increaseElementsBy(2);
    //myArr.findElement(2);
    //myArr.isFull();
    //myArr.add();
    //myArr.removeLast();



    //MyArray<double> myArr2 (anArray2);
    //myArr2.displayArray();

    //MyArray<char> myArr3(anArray3);
    //myArr3.displayArray();




    return 0;
}



