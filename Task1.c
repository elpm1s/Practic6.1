#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()

{
    setlocale(LC_ALL, "RUS");

    int year;

    printf("������� ���: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("��� %d ����������\n", year);
    }
    else {
        printf("��� %d �� ����������\n", year);
    }

    return 0;


}