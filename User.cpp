//CSCI 1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Project 2 - Problem 6 -- .cpp file

//implementing the user class
#include "User.h"
#include <string>
#include <cmath>
using namespace std;

User::User(){ // default constructor
    username = ""; // sets username to blank string
    numRatings = 0; // sets numRatings to 0
    for(int i = 0; i < size; i++){ //sets all values in the array to 0
        ratings[i] = 0;
    }
} 

User::User(string username1, int numRatings1, int ratings1[50]){ // parameterized constructor 
    username = username1; //sets username to user entered "username1"
    numRatings = numRatings1; //sets numRatings to user entered "numRatings1"
    if(numRatings > size){numRatings = size;} // makes sure that there 50 or less ratings to work with
    for(int i = 0; i < numRatings; i++){ //increments through and fills ratings array with user data
        ratings[i] = ratings1[i];
    }
}

string User::getUsername() const{
    return username; // returns username as a string
}

void User::setUsername(string username_1){
    username = username_1; //sets username to user inputted username_1

}

int User::getRatingAt(int index){
    if(index > numRatings || index < 0){return -1;} // checks if index exists
    else{
        return ratings[index]; //returns rating at index
    }
}

bool User::setRatingAt(int index, int value){
    if(0 <= value && value <= 5 && index < numRatings && index >= 0){ //checks that rating value is valid 0-5 and that index is in the array
        ratings[index] = value; //sets rating to the num in value
        return true; // return true if successful
    }
    else{
        return false; // else return false
    }
}

int User::getNumRatings() const{
    return numRatings; // returns numRatings as an integer
}

void User::setNumRatings(int numRatings_1){
    numRatings = numRatings_1; // sets numRatings to user value
}

int User::getSize(){
    return size; // returns size as an integer
}
