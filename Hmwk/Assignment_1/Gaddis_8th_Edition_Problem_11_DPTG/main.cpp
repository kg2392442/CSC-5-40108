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
    int mpg, gallons, distance;
    
    cout << "gallons:" << endl;
    cin>>gallons;
    
    cout << "mpg:" << endl;
    cin>>mpg;
    
    distance = gallons * mpg;
    
    cout<<"distance"<<distance <<endl;

    //Exit stage right!
    return 0;
}