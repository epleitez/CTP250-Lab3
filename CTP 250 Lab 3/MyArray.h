//
// Created by Emely Pleitez on 9/21/22.
//

#ifndef CTP_250_LAB_3_MYARRAY_H
#define CTP_250_LAB_3_MYARRAY_H
#include "Computational.h"
using namespace std;

template <typename T> //<class T>
class MyArray : public Computational<T>
{
public:
    MyArray();
    MyArray(T []);
    MyArray(T [], int);

    void displayArray();
    T maximumElement();
    T countElements(T);
    T printReverse();
    void increaseElementsBy(T);
    bool findElement(T);
    bool isFull();
    void add(T);
    //void removeLast();


private:
    T theArray[10];

};

template <typename T>
MyArray<T>::MyArray (){
    for (int i = 0; i < 10; i++)
        theArray[i] = 0;

}//end default constructor

template <typename T>
MyArray<T>::MyArray(T arr[]){
    for (int i = 0; i < 10; i++)
        theArray[i] = arr[i];
}//end second constructor

template <typename T>
MyArray<T>::MyArray(T arr[], int size){
    for (int i = 0; i < 10; i++)
        theArray[i] = arr[i];
}//end third constructor

/*
 * Displays all the elements in the array
 */
template <typename T>
void MyArray<T>::displayArray(){
    for (int i = 0; i < 10; i++)
        cout << "[" << i << "] = " << theArray[i] << endl;
}

/*
 * Finds the maximum value element in the array
 */

template<typename T>
T MyArray<T>::maximumElement(){
    T max = theArray[0];

    for (int i = 1; i < 10; i++)
        if (theArray[i] > max)
            max = theArray[i];

    return max;
}

/*
 * Counts the occurrences of the element in the parameter in the array
 * @param T element is the element that is being searched for in the array
 * @returns the count of occurrences of the parameter in array
 */

template<typename T>
T MyArray<T>::countElements(T element) {
    T count = 0;
    cout << "Looking for: " << element << endl;

    for (int i = 0; i < 10; i++){
        if (element == theArray[i])
            count++;

    }
    if(count == 0){
        cout << "No Occurrences..." << endl;
    }
    cout << "Number of Occurrences: " << count << endl;

    return count;
}

/*
 * displays the original array in reverse order
 */
template<typename T>
T MyArray<T>::printReverse() {
    T size = 10;

    for(int i = size; i >= 0; i--){
        cout << theArray[i] << " ";
    }
    return 0;
}

/*
 * Increases all the elements in the array by the parameter
 * @param T element is the amount that the array is being increased by
 */
template <typename T>
void MyArray<T>::increaseElementsBy(T element) {
    T size = 10;
    T increasedElement = 0;
    cout << "Elements increased by: " << element << endl;

    for (int i = 0; i < 10; i++){
        increasedElement = element + theArray[i];
        cout << "[" << i << "] = " << increasedElement << endl;
    }
}

/*
 * Determines if the parameter exists in the array
 * @param T element is the parameter that is being searched for in the array
 * @returns the bool found; either true or false
 */

template <typename T>
bool MyArray<T>::findElement(T element) {
    bool found = false;
    T position = 0;
    cout << "Looking for: " << element << endl;

    for (int i = 0; i < 10; i++){
        if (element == theArray[i]) {
            found = true;
            position = i;
        }
    }
    if(!found)
        cout << "Not found..." << endl;
    else
        cout << "Yes, found at position: " << position << endl;

    return found;
}

/*
 * Determines if the array is full or not
 * @returns the bool full; either true or false
 */
template <typename T>
bool MyArray<T>::isFull() {
    bool full = false;
    T count = 10;
    T size = sizeof(theArray)/sizeof(theArray[0]);

    if (size == count)
        full = true;

    if(!full)
        cout << "Array is not full" << endl;
    else
        cout << "Array is full" << endl;

    return full;

}
/*
 * Adds the parameter at the end of the array if array is not full
 * @param T element is the parameter that is being added to the array
 */

template <typename T>
void MyArray<T>::add(T element){
    T count = 10;
    T size = sizeof(theArray)/sizeof(theArray[0]);

    if(size != count){
        theArray[10] = element;
    }
}

/*
 * removes the last element in the array

template <typename T>
void MyArray<T>::removeLast() {
    T size = sizeof(theArray)/sizeof(theArray[0]);
    T newSize = size - 1;

    for(int i = 0; i < size; i ++){
        if(theArray[i] == theArray[newSize]){
            for(int j = i; j < newSize; j++){
                theArray[j] = theArray[j+1];
            }
        }
    }

    cout << "The New Array: " << endl;
    for(int k = 0; k < newSize; k++)
        cout << "[" << k << "] = " << theArray[k] << endl;

}

*/



#endif //CTP_250_LAB_3_MYARRAY_H
