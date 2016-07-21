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
    int purchase = 52;
    int stateTax = .04;
    int countyTax = .02;
    int totalTax = stateTax + countyTax;
    //Input Data
    cout << "How much is the purchase?";
    cin >> purchase;
    cout << "How much is the state tax?";
    cin >> stateTax
    cout << "How much is the county tax?";
    cin >> countyTax;
    //Process the Data
    int totalSalesTax = purchase * totalTax;
    //Output the processed Data
    cout << "What is the total sales tax on the purchase?";
    cout << endl << totalSalesTax; 
    //Exit Stage Right!
    return 0;
}