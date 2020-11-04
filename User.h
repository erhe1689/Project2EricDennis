//CSCI 1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Project 2 - Problem 6 -- .h file

//header
#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

class User
{
public:
    User(); // default constructor
    User(string username, int numratings, int ratings[]);//parametrized constructor
    string getUsername() const; // username getter
    void setUsername(string username_1); //usernamesetter
    int getRatingAt(int index); // rating getter
    bool setRatingAt(int index, int value);// sets the rating of a specific index to whatever is in "value" 
    int getNumRatings() const; //gets the number of ratings
    void setNumRatings(int numRatings_1);//sets numratings to user value
    int getSize(); //size getter

private:
//private variables exclusive to the user class
    string username;
    int size = 50;
    int ratings[50];
    int numRatings;
};
#endif
