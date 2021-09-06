// File Name: cppPointer.cpp
//
// Auther Samuel Manzanares
// Date: 09/06/2021
// Assignment: C++ Pointers
// CS 2318.001
// Instructor: Charles Rick King


#include <iostream>
#include <string>

using namespace std;


//*******************************************
// ReverseIt: reverses name to sir name

// o: char array; holds original copy of name
// r:char array; will hold sir name from original copy
// void return type  
//*******************************************
void ReverseIt(char* o, char* r);

int main()
{

    char original[] = "Conan The Barbarian\0"; // original char name array
    char reversed[100]; // reversed array decleration

    ReverseIt(original, reversed);

    cout << original << " reversed is " << reversed << endl;

}

void ReverseIt(char* o, char* r) {
    char* i = o; // used to cycle through o array

    int len = 0; // length of o array
    int endLen = 0; // length of last name of o array
    int frontLen = 0; // length of beginning of sir name of o array

    while (*i != '\0') {
        i++;
        len++;
    }
    while(*i != ' ') {
        i--;
        endLen++;
    }
    i++;
    endLen--;

    frontLen = len - endLen;

    char * newArray = new char[frontLen]; // creates char array for reverse copy

    for (int i = 0; i < frontLen; i++) {
        *(newArray + i) = *(o + i);
    }

    strcpy(r, i);
    strcat(r, ", ");
    strcat(r, newArray);

    delete[] newArray;
    
}
