#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void zadanie1() {
    int year;
    printf("Введите год: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Год %d високосный\n", year);
    else
        printf("Год %d не високосный\n", year);
}

void zadanie2() {
    double x;
    printf("  Вариант 4\nВведите x: ");
    scanf("%lf", &x);
    printf("F(x) = %f\n", (x <= 1) ? 0.0 : (1.0 / (x + 6.0)));
}

int main() {
    setlocale(LC_ALL, "rus");

    zadanie1();
    zadanie2();

    return 0;
}