// C++example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream> 
#include <fstream>
#include <string.h>
using namespace std;

typedef int GradeType[100]; // declares a new data type: 
                                             // an integer array of 100 elements 

float findAverage(const GradeType, int); // finds average of all grades 

int findHighest(const GradeType, int); // finds highest of all grades 

int findLowest(const GradeType, int); // finds lowest of all grades 

int main()
{
    GradeType grades; // the array holding the grades. 
    int numberOfGrades; // the number of grades read. 
    int pos; // index to the array. 
    ifstream myfile;
    myfile.open("gradefiles.txt");
    float avgOfGrades; // contains the average of the grades. 
    int highestGrade; // contains the highest grade. 
    int lowestGrade; // contains the lowest grade. 
    string textifile;

    // Read in the values into the array 

    pos = 0;

    cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;

    //in >> grades[pos];
    float a;

    if (myfile.is_open()) {
        do {
            myfile >> grades[pos];


            if (!myfile.fail()) {
                pos++;

            }
        } while (!myfile.fail());
        myfile.close();
    }
    else {

    }
   

    numberOfGrades = pos;
    cout << numberOfGrades;

    // call to the function to find average 
    avgOfGrades = findAverage(grades, numberOfGrades);

    cout << endl << "The average of all the grades is " << avgOfGrades << endl;

    // Fill in the call to the function that calculates highest grade 
    highestGrade = findHighest(grades, numberOfGrades);
    cout << endl << "The highest grade is " << highestGrade << endl;
    // Fill in the call to the function that calculates lowest grade 
    // Fill in code to write the lowest to the screen 

    return 0;
}


//******************************************************************************** 
// findAverage 
// 
// task: This function receives an array of integers and its size. 
// It finds and returns the average of the numbers in the array 
// data in: array of floating point numbers 
// data returned: average of the numbers in the array 
// 
//******************************************************************************** 


float findAverage(const GradeType array, int size)
{



    float sum = 0; // holds the sum of all the numbers for (int pos = 0; pos < size; pos++) 
    for (int pos = 0; pos < size; pos++) {
        sum = sum + array[pos];
    }
    return (sum / size); //returns the average 
}

//**************************************************************************** 
// findHighest 
// 
// task: This function receives an array of integers and its size. 
// It finds and returns the highest value of the numbers in the array 
// data in: array of floating point numbers 
// data returned: highest value of the numbers in the array 
// 
//**************************************************************************** 

int findHighest(const GradeType array, int size)
{

    // Fill in the code for this function
    int temphighest = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] >= temphighest) {
            temphighest = array[i];
        }
    }

    //highestGrade = temphighest;

    return temphighest;
    // Fill in the code for this function

}


//**************************************************************************** 
// findLowest 
// 
// task: This function receives an array of integers and its size. 
// It finds and returns the lowest value of the numbers in the array 
// data in: array of floating point numbers 
// data returned: lowest value of the numbers in the array 
// 
//**************************************************************************** 

int findLowest(const GradeType array, int size)
{

    // Fill in the code for this function 
    float tempLow = 0;
    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        if (array[i] > tempLow) {
            tempLow = array[i];
        }
    }

    //highestGrade = tempLow;
    // Fill in the code for this function 
    int lowest = (int)tempLow;
    return tempLow;

}