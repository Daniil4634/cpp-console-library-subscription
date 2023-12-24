#include <stdio.h>
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

void display_participant_info(const struct book_subscription* subscription)
{
    printf("Номер: %s\n", subscription->reader.first_name);
    printf("Фамилия: %s\n", subscription->reader.last_name);
    printf("Имя: %s\n", subscription->reader.first_name);
    printf("Отчество: %s\n", subscription->reader.middle_name);
    printf("Старт: %02d.%02d.%d\n", subscription->start.day, subscription->start.month, subscription->start.year);
    printf("Финиш: %02d.%02d.%d\n", subscription->finish.day, subscription->finish.month, subscription->finish.year);
    printf("Клуб: %s\n", subscription->author.last_name);
}

int main()
{
    // Example usage
    struct book_subscription subscription;
    // Set the values of subscription
    
    // Display participant information
    display_participant_info(&subscription);
    
    return 0;
}
