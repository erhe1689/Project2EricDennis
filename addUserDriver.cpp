//CSCI1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Recitation: 507-Chakraborty
//Project 2 - Problem 9

//implementing the User and book classes
#include "User.h"
#include "Book.h"
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

int addUser(string userName, User users[], int numRatings, int numUsersStored, int usersArrSize){
    if(userName == ""){return -1;} //case 3, return -1 if empty string
    for(int i = 0; i < numUsersStored; i++){ // loops through the array checking if username is unique CASE 2
        if(userName == users[i].getUsername()){
            return -1;
        }        
    }
    if(numUsersStored >= usersArrSize){return -2;} // case1 error, returns -2
    int ratings[numRatings]; // declares ratings array
    for(int i = 0; i < numRatings; i++){ //sets all values in the array to 0, since newUser has not reviewed any books yet
        ratings[i] = 0;
    }

    User user1 = User(userName, numRatings, ratings);
    users[numUsersStored] = user1; // stores new user in the users array 
    numUsersStored++; // increments the number of users
    return numUsersStored; // returns the number of users in the array

}
