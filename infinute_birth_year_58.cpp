//
//  infinute_birth_year_58.cpp
//  lab_projects
//
//  Created by Sergey Vershinin on 11/27/18.
//  Copyright © 2018 Sergey Vershinin. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
    
    int year;
    //set the infinute loop
    for ( ; ; ){
    // ask user to enter a year of birth;
    cout <<"PLease enter year born: ";
    cin>> year;
    //determine if the year is not a futer year;
    if (year>=2018){
        cout<<"Entered a futer year"<<"\n";
    }
    //print out the entered year;
    else {
        cout <<"You entered: " << year<<"\n";
        break;
    }
    }
    return 0;
    
}





