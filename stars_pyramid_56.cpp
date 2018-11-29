//
//  stars_pyramid.cpp
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
    int rows;
    
    cout << "Enter number: ";
    cin >> rows;
    
    for(int i = 0; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
