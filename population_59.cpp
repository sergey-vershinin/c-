//
//  population_growth_59.cpp
//  lab_projects
//
//  Created by Sergey Vershinin on 11/27/18.
//  Copyright © 2018 Sergey Vershinin. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <limits>
#include <cmath>
using namespace std;



int main() {
    
    double P;  //population in 2017;
    double Bp;  //birth rate;
    double Dp;  //death rate;
    double PY; //new population;
    int t;    //number of years;
    P = 325.7;
    Bp = 12.4;
    Dp = 8.4;
    
    //askuser to enter a number of years:
    cout<<" Enter a number of years: ";
    cin>> t;
    
    //print put intial year:
    cout<<"Year "<<2017<<" "<< P <<"\n";
    
    //seting the loop for the computing population:
    for(int i = 1; i < t; i++) {
        
        PY = P + (Bp*P)-(Dp*P);
        P=PY;
        
        cout.precision(20);
        
        //printing out the result:
       
        cout<<"Year "<<2017+i<<" "<< P <<"\n";
        
    }
    
}


