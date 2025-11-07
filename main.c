// I want to say congrats for getting this far I understand C is not easy :)

#include <stdio.h> // Always include this for the printf
#include "order_header_file.h" // This links back to the header file.

int main() { // This is just like a normal function. [ IMPORTANT ] It has to always be called main.
    printf("Welcome to the very simple ordering checking system this was made for people that want to learn c and want to get better :)\n"); // \n is a line break
    printf("-------------------\n");
    addparcel(); // This is your function it adds a parcel.
    checkstatus(); // This checks the parcel.
}

// After reading all of this please go back to the read me first file.