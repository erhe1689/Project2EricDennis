//CSCI 1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Project 2 - Problem 5 -- .cpp file

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
#include "Book.h"
#include <string>
using namespace std;

//creating function printAuthorGenre with the parameters genre, authorFirstLetter, books[], and numBooksStored
int printAuthorGenre(string genre, char authorFirstLetter, Book books[], int numBooksStored){
        int counter = 0;        //initializing counter variable as 0 so we can know the number of author-genre pairs
        string author = "";     //initializing author string so we can get first character
        for (int i = 0; i < numBooksStored; i++){       //goes through each book and author pair
            author = books[i].getAuthor();      //this is just to get the first character of the author line
            if (books[i].getGenre() == genre && authorFirstLetter == author[0]){        //checking whether or not the author and book genre are correct
                counter++;      //adding 1 to the amount of genre-author pairs
                if (counter == 1){
                    cout << "Here is a list of books that match this genre-author pair:" << endl;
                }
                cout << books[i].getTitle() << " by ";      //printing title of book
                cout << books[i].getAuthor() << endl;       //printing author name
            }
        }
        if (counter == 0){      //checks if at the end of the for loop there are no genre-author pairs
            cout << "No titles found for this genre-author pair." << endl;      //prints that there are no genre-author pairs
        }
    return counter;     //returns the amount of genre-author pairs
}