/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 27, 2016, 9:03 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>//Input/Output Library
using namespace std; //Namespace of the System Libraries
#include <cmath>
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salePercent = .62;
    float currentSale = 4.6;
    float prediction;
    //Input Data
    cout << "What is the sales percent?" << endl;
    cin >> salePercent;
    cout << "What is the sales of this year?" << endl;
    cin >> currentSale;
    //Process the Data
     prediction = salePercent*currentSale;
    //Output the processed Data
   
   
    cout << "How much will the East Coast division generate?" <<endl << prediction;
    cout << " millions";
    //Exit Stage Right!
    return 0;
}