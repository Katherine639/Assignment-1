/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 27, 2016, 9:03 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cmath>
#include<iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float n,guess,r;
    //Input Data
    cout <<"Program to calculate the square root" <<endl;
    cout << "Input a number to see the repetitive approximation of the";
    cout << "of the square root" <<endl;
    cin >>n;
    //Process the Data
    guess=n/2;
    r=n/guess;
    guess= (guess+r)/2;
            //Output th;e processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<"guess="<<setw(10)<<guess;
            cout <<"sqrt(" <<n<<")="<<setw(10)<<sqrt(n)<<endl;
    
    //Exit Stage Right!
    return 0;
}