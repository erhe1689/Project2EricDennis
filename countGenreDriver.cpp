//CSCI 1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Project 2 - Problem 4 -- .cpp file

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
#include "Book.h"
using namespace std;

//creating function countGenre with the parameters genre, books[], and numBooksStored 
int countGenre(string genre, Book books[], int numBooksStored){
    int counter = 0;        //initializing counter as 0
    for (int i = 0; i <= numBooksStored; i++){      //goes through each book
        if (books[i].getGenre() == genre){      //checks whether or not the genre in the file is the same as the parameter
            counter++;      //if genre is the same adds 1 to the counter
        }
    }
        if (counter == 0){      //checks if there are no books that match the parameter genre
            return 0;
        }
    return counter;     //returns the ammount of books that match the parameter genre
}