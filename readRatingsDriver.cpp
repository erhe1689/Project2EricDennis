//CSCI1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Recitation: 507-Chakraborty
//Project 2 - Problem 7

//implementing the User class
#include "User.h"
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

//previously made split function
int split(string inputString, char splitter, string finalArray[], int arrayLength){
    //declaring variables
    int arraySpot = 0;
    int chunkLength = 0;
    for(int i = 0; i < inputString.length(); i += (chunkLength + 1)){
        //looping through string until the end of the string, adding chunksize cuts
        chunkLength = 0;
        while(inputString[i + chunkLength] != splitter && (i + chunkLength) < inputString.length()){
            //while each char isnt the splitter, make the chunklength longer
            chunkLength++;
        }
       finalArray[arraySpot] = inputString.substr(i, chunkLength); // find how many chunks/substrings
       arraySpot ++;
       if(arraySpot >= arrayLength){ // invalidation
           return -1;
       }
    }
    return arraySpot;
}

int readRatings(string filename, User users[100], int numUsersStored, int usersArrSize, int maxCol) {// declaring function parameters
    ifstream file; //starting stream
    string line;
    string ratings[maxCol]; // acts as 'finalArray" to store rest of string ratings into cells
    string userArray[1]; //temp username storage array
    int ratingArray[maxCol]; //integer converted rating array
    int i = numUsersStored; // incrementor variable
    if(numUsersStored >= usersArrSize) return -2; // checks case1 error
    file.open(filename); // opens desired file
    if(file.is_open()){ // will loop as long as file is open
        while(getline(file, line) && i < usersArrSize){
            if(line != ""){
                split(line, ',', userArray, 1); // splits the username from the string and stores into userArray
                split(line.substr(line.find(',') + 1, (2 * maxCol)-1), ',', ratings, maxCol); 
                for(int j = 0; j < maxCol; j++){
                    ratingArray[j] = stoi(ratings[j]);
                }
                User username = User(userArray[0], maxCol, ratingArray);
                users[i] = username; // stores created user object into users array
                i++; // incrementor variable
            }
        }
        return i;
    }
    return -1; // will jump to this return if the "file.is_open()" fails to open
}

int main(){
    User users[86];
    readRatings("ratings.txt", users, 0, 500, 50);
    for(int i = 0; i < 86; i++){
        cout << users[i].getUsername() << " ";
        cout << users[i].getRatingAt(0) << " ";
        cout << users[i].getNumRatings() << endl;
    }
    return 0;

}
