//CSCI 1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Project 2 - Problem 2 -- .cpp file

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
#include "Book.h"
using namespace std;

int readBooks(string fileName, Book books[], int numBooksStored, int booksArrSize){
    if(numBooksStored == booksArrSize){
        return -2;
    }
    ifstream in;
    in.open(fileName);
    if(!(in)){
        return -1;
    }
    int counter = 0;
    string line;
    while(getline(in, line)){
        string arr[3];
        if(!(line.empty()) && counter + numBooksStored != booksArrSize){
            split(line, ',',arr,3);
            string author = arr[0];
            string title = arr[1];
            string genre = arr[2];
            Book book = Book(title, author, genre);
            if(numBooksStored+counter < booksArrSize){
                books[numBooksStored+counter] = book;
            }
            counter++;
        }
    }
    return counter + numBooksStored;
}