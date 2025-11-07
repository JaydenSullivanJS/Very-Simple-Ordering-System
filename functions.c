//
// Created by Jayden Sullivan on 07/11/2025.
//

#include <stdio.h>
#include <string.h>
#include "order_header_file.h"

orderingstatus ordering = {"N/A", '0', '0', 'N'};


void addparcel(void) {
    orderingstatus *checkingpointer = &ordering;
    strcpy(checkingpointer->catogry, "Food");
    checkingpointer->parcelweight = '50';
    checkingpointer->ETA = '30';
    checkingpointer->orderd = 'Y';
}

void checkstatus(void) {
    if (ordering.orderd == 'Y') {
        printf("Order Success here is your order infomation\n");
        printf("--- Parcel Info ---\n");
        printf("Cateogry is %c\n", ordering.catogry);
        printf("Weight is: %d", ordering.parcelweight);
        printf("The Estimated time until the parcel will arrive is %d mins", ordering.ETA);
    } else {
        printf("You have not orderd a parcel");
    }
}