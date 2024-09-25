#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()

{
    setlocale(LC_ALL, "RUS");

    int year;

    printf("Введите год: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Год %d високосный\n", year);
    }
    else {
        printf("Год %d не високосный\n", year);
    }

    return 0;


}