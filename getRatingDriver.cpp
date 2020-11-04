//CSCI1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Recitation: 507-Chakraborty
//Project 2 - Problem 8

//implementing the User and book classes
#include "User.h"
#include "Book.h"
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

int getRating(string username, string title, User users[], Book books[], int numUsers, int numBooks){
    int i = 0; 
    int j = 0;
    for(i; i < numUsers; i++){ // finds the index value of the desired user in the users array
        if(username == users[i].getUsername()){break;}
    }
    for(j; j < numBooks; j++){ // finds the index value of the desired book in the books array
        if(title == books[j].getTitle()){break;}
    }
    if(users[i].getUsername() != username || books[j].getTitle() != title){return -3;}
    return users[i].getRatingAt(j);
}