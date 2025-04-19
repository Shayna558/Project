/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: sjmcf
 *
 * Created on April 19, 2025, 3:25 PM
 */

#include <iostream>
#include <string>

using namespace std;

//Generic linear search function
template <typename T>
int linearSearch(const T arr[], int size, T key) {
    for(int i = 0; i < size; i++ ){
        if (arr[i] == key){
            return i; //Found
        }
    }
    return -1; //Not Found
}

/*
 * 
 */
int main(int argc, char** argv) {
    //Testing the function
    int intArr[] = {10, 20, 30, 40, 50};
    double doubleArr[] = {2.5, 3.6, 4.7, 5.8, 6.9};
    string stringArr[] = {"apple", "banana", "cherry", "date", "fig"};
    
    int intKey = 30;
    double doubleKey = 4.7;
    string stringKey = "cherry";
    
    cout << "Linear search for " << intKey << "in int array: " << linearSearch(intArr, 5, intKey) << endl;
    cout << "Linear search for " << doubleKey << "in double array: " << linearSearch(doubleArr, 5, doubleKey) << endl;
    cout << "Linear search for \"" << stringKey << "\" in string array: " << linearSearch(stringArr, 5, stringKey) << endl;

    return 0;
}

