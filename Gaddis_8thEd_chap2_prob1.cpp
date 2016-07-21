/* 
 * File:   main.cpp
 * Author: Katherine Way
 * Created on June 29, 2016, 6:01pm
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
 int num1= 62;
 int num2= 99;
 int total = num1 + num2;
    //Input Data
 cout << "Input first integer.";
 cin >> num1;
 cout << "Input second integer.";
 cin >> num2; 

    //Process the Data

    //Output the processed Data
     cout << "What is the total of the two integers?" << total <<endl;
    //Exit Stage Right!
    return 0;
}
