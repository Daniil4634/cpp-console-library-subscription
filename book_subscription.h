#ifndef BOOK_SUBSCRIPTION_H
#define BOOK_SUBSCRIPTION_H

#include "constants.h"

struct date
{
    int day;
    int month;
    int year;
};

struct person
{
    char first_name[MAX_STRING_SIZE];
    char middle_name[MAX_STRING_SIZE];
    char last_name[MAX_STRING_SIZE];
};

struct book_subscription
{
    person reader;
    date start;
    date finish;
    person author;
    char title[MAX_STRING_SIZE];
};

#endif
