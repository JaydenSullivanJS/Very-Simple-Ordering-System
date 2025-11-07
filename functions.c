//
// Created by Jayden Sullivan on 07/11/2025.
//

#include <stdio.h>
#include <string.h>
#include "order_header_file.h"

orderingstatus orderingcheck;


void addparcel(void) {
    orderingstatus *checkingpointer = &orderingcheck;
    strcpy(checkingpointer->catogry, "Food");
    checkingpointer->parcelweight = 50;
    checkingpointer->ETA = 50;
    checkingpointer->ordered = 'Y';
}

void checkstatus(void) {
    if (orderingcheck.ordered == 'Y') {
        printf("Order Success here is your order infomation\n");
        printf("--- Parcel Info ---\n");
        printf("Cateogry is %s\n", orderingcheck.catogry);
        printf("Weight is: %d\n", orderingcheck.parcelweight);
        printf("The Estimated time until the parcel will arrive is %d mins", orderingcheck.ETA);
    } else {
        printf("You have not ordered a parcel");
    }
}
