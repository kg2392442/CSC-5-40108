/* 
  File:   main.cpp
  Author: Katie Garriott
  Created on January 10, 2017, 2:15 PM
  Purpose:  Calculate MPG's!
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int gallons, miles, mpg;
    
    cout << "miles:" << endl;
    cin>>miles;
    
    cout << "gallons:" << endl;
    cin>>gallons;
    
    mpg = miles / gallons;
    
    cout<<"mpg"<<mpg <<endl;

    //Exit stage right!
    return 0;
}