//
//  twos_compliment_60.cpp
//  lab_projects
//
//  Created by Sergey Vershinin on 11/27/18.
//  Copyright © 2018 Sergey Vershinin. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    
    int n;
    int x;
    //ask user for a number btw -31 and 31:
    cout<< "Enter a number between -31 and 31: "<<"\n";
    cin >> n;
    
    //check the enterd number on being negative:
    if (n<0) {
        cout<< "1";
        x = 32+n;
    }
    //check the number on being positive:
    if (n>=0) {
        cout<<"0";
        x = n;
    }
    
    int b = 16;
    while (b > 0.5) {
        if (x>=b) {
            cout<<"1";
        } else {
            cout<<"0";
        }
    
    x= x%b;
    b = b/2;
    }
    cout<< "\n";
}

