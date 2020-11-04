//CSCI1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Recitation: 507-Chakraborty
//Project 2 - Problem 10

//implementing the User and book classes
#include "User.h"
#include "Book.h"
#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

int getUserStats(string username, User users[], int numUsersStored, int numBooks){
    for(int i = 0; i < numUsersStored; i++){ // loops through the array checking if username is unique CASE 2
        if(username == users[i].getUsername()){
            double ratingAverage = 0.0;
            double ratingSum = 0.0;
            double bookCount = 0.0;
            for(int k = 0; k < numBooks; k++){
                if(users[i].getRatingAt(k) != 0){bookCount++;}
                ratingSum += users[i].getRatingAt(k);
            }
            ratingAverage = ratingSum / bookCount;
            if(bookCount == 0){
                cout << username << " has not rated any books." << endl;
                return 0;
            }
            cout << username << " rated " << bookCount << " books" << endl;
            cout << username << "'s average rating was " << setprecision(2) << fixed << ratingAverage << endl;
            return 1;
        }        
    }
    cout << username << " does not exist." << endl;
    return -3;
}

