//CSCI 1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Project 2 - Problem 3 -- .cpp file

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
#include "Book.h"
using namespace std;

void printAllBooks(Book books[], int num){
        
        if (num <= 0){
            cout << "No books are stored" << endl;
        }
        if (num > 0){
            cout << "Here is a list of books" << endl;
        }
        for (int i = 0; i < num; i++){
            cout << books[i].getTitle() << " by "; 
            cout << books[i].getAuthor() << endl;
        }

}