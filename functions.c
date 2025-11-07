//
// Created by Jayden Sullivan on 07/11/2025.
//

#include <stdio.h> // THIS IS VERY IMPORTANT! You always have to include this in your file so the printf will work :)
#include <string.h> // This is used for the str copy ( more on that later )
#include "order_header_file.h" // This links back to the header file so the program can check the data.

orderingstatus orderingcheck; // This is the nickname you created for your typedef.


void addparcel(void) { /* The start of your function, you must include void. "Add Parcel is the name of your function
    (it should be the same as the one in your header file */

    orderingstatus *checkingpointer = &orderingcheck; /* This is where it starts to get very complicated, the ordering status
    is the nickname you created for your typedef in the header file. The checking pointer is pointing to your ordering check
    This is what you have on line 9. ( I understand this is very confusing, don't worry, I recommend looking at a YouTube tutorial
    for more detailed information. ) */
    strcpy(checkingpointer->category, "Food"); // This is the string for the catrgory. You must include the string copy for this to work.
    checkingpointer->parcelweight = 50; // This is the weight of the parcel, it is 50. [ Remember never put 50 in quotation marks ]
    checkingpointer->ETA = 50; // This is the ETA of the parcel.
    checkingpointer->ordered = 'Y'; // This is the single latter char unlike the category.
}

void checkstatus(void) { // This is your seccond function.
    if (orderingcheck.ordered == 'Y') { // This checks if the parcel has been ordered. If it has, it will say text below.
        printf("Order Success here is your order infomation\n"); // The \n is a line break
        printf("--- Parcel Info ---\n");
        printf("Category is %s\n", orderingcheck.category); // [VERY IMPORTANT] When using a string, you don't use a %c, you have to use an %s
        printf("Weight is: %d\n", orderingcheck.parcelweight); // To display a number you have to use a %d a good way to remember this is just practise :)
        printf("The Estimated time until the parcel will arrive is %d mins", orderingcheck.ETA);
    } else { // If the value of ordered is not 'Y', then it will say the text below.
        printf("You have not ordered a parcel");
    }
}

// When done, please read the read me first file :)