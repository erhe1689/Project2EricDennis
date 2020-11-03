//CSCI 1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Project 2 - Problem 6 -- user driver file

#include "User.h"
#include <string>
#include <cmath>
#include <iostream>
using namespace std;


int main(){
    //User Class test cases
    int user2Ratings[10] = {2,3,4,5,4,3,2,1,2,3};
    User user1 = User();
    User user2 = User("anon1234",10, user2Ratings);

    //tests getters for user1
    cout << user1.getUsername() << endl;
    cout << user1.getRatingAt(3) << endl;
    cout << user1.getNumRatings() << endl;
    cout << user1.getSize() << endl;

    //tests getters for user2
    cout << user2.getUsername() << endl;
    cout << user2.getRatingAt(3) << endl;
    cout << user2.getNumRatings() << endl;
    cout << user2.getSize() << endl;

    //setters for user2
    user2.setUsername("Karl");
    user2.setRatingAt(0,1);
    user2.setNumRatings(8);

    //getters to test that the setters worked 
    cout << user2.getUsername() << endl;
    cout << user2.getRatingAt(0) << endl; //should be 1 if worked, 2 if didnt
    cout << user2.getNumRatings() << endl; // should be 8
    cout << user2.getSize() << endl;

}