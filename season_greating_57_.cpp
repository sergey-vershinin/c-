//
//  season greating.cpp
//  lab_projects
//
//  Created by Sergey Vershinin on 11/26/18.
//  Copyright © 2018 Sergey Vershinin. All rights reserved.
//



#include <stdio.h>
#include <iostream>
using namespace std;


int main() {
    int month;
    cout << "Enter month (as a number): ";
    cin >> month;
    
    cout << month<<"\n";
    
    if (month >= 3 && month<7)
    {
        cout << "Happy Spring"<<"\n";
    }
    else if (month >=7 && month <9)
    {
        cout << "Happy Summer"<< "\n";
    }
    else if (9 < month && month <= 11)
    {
        cout << "Happy Fall"<<"\n";
    }
    else if (month >0 && month <3)
    {
        cout << "Happy Winter"<<"\n";
    }
    else if (month>=11 && month<=12)
    {
        cout <<"Happy Winter" << "\n";
    }
    return 0;
    
}

