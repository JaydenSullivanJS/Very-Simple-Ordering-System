//
// Created by Jayden Sullivan on 07/11/2025.
//

#ifndef VERY_SIMPLE_ORDERING_SYSTEM_ORDER_HEADER_FILE_H
#define VERY_SIMPLE_ORDERING_SYSTEM_ORDER_HEADER_FILE_H

#endif
/* This is the header file, this type of file should always be the first file that you develop, because you can list
 * functions in this file that you can use later, you are able to keep your code clean and easy to maintain.

 */
typedef struct ordering { /* This is a typedef, this can save us time so we don't have to write the same piece of code over and over again */
    char category[5]; /* This is a char can store a single letter or a string. For a string, you have to add [] and the number inside is the number
    of characters you want to have in the string; however, you have to add one, for example, dog would be 4.
    */
    int parcelweight; // This is an int that stores a number.
    int ETA; // This is also an int.
    char ordered; // This is a char, however, with only one character ( I will explain about this in more detail after )
} orderingstatus; // This is the "nickname" for the typedev for the struct to work.

orderingstatus orderingcheck; /* When working with a typedef, you have to use its nickname. In this case, it's "orderingstatus"; however, it could be apples or bananas
, and you have to give it another nickname that you will use in your other files. This could be, for example, apples, then apple juice.
apples applejuice; ( for example ) */


void checkstatus(void); // This is the name of your function you will be using.
void addparcel(void); // Same as above ^


