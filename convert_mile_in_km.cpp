//
//  convert_mile_in_km.cpp
//  lab_projects
//
//  Created by Sergey Vershinin on 11/16/18.
//  Copyright © 2018 Sergey Vershinin. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    float miles;
    float km;
    cout << "Enter distance in kilometers: ";
    cin >> km;
    miles = 0.621371*km;
    cout << "The miles are "<<miles<< "\n";
    return 0;
    
}


