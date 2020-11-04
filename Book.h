//CSCI 1300 Fall 2020
//Author: Eric Heising - Dennis Pozhidaev
//Project 2 - Problem 1 -- .h file

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;

class Book{
private:
    string title, author, genre;

public: 
Book(string title, string author, string genre){
    this->title = title;
    this->author = author;
    this->genre = genre;
}
Book(){
    this->title = "";
    this->author = "";
    this->genre = "";
    }
string getTitle(){
    return this->title;
}
void setTitle(string newTitle){
    this->title = newTitle;
}
string getAuthor(){
    return this->author;
}
void setAuthor(string newAuthor){
    this->author = newAuthor;
}
string getGenre(){
    return this->genre;
}
void setGenre(string newGenre){
    this->genre = newGenre;
}
};