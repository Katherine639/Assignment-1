/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 27, 2016, 9:03 PM
 * Purpose:  Template
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
    float mealCharge = 44.50;
    float tax = 6.75;
    float tip = 15;
    float totalBill= (tax*mealCharge) + tip;
    //Input Data
    cout << "What is the meal price?";
    cin >> mealCharge;
    cout << "What is the percent of the tax?";
    cin >> tax;
    cout << "what is the tip?";
    cin >> tip;
    //Process the Data
    
    //Output the processed Data
    cout << "What is the total bill?" << endl << totalBill; 
    //Exit Stage Right!
    return 0;
}