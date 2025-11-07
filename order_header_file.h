//
// Created by Jayden Sullivan on 07/11/2025.
//

#ifndef VERY_SIMPLE_ORDERING_SYSTEM_ORDER_HEADER_FILE_H
#define VERY_SIMPLE_ORDERING_SYSTEM_ORDER_HEADER_FILE_H

#endif //VERY_SIMPLE_ORDERING_SYSTEM_ORDER_HEADER_FILE_H

typedef struct ordering {
    char catogry[5];
    int parcelweight;
    int ETA;
    char orderd;
} orderingstatus;

orderingstatus orderingcheck;

void checkstatus(void);
void addparcel(void);

