#include <stdio.h>
#include <math.h>

int main() {
    
    //zadatak 1

    float x1, x2, x3;
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &x1, &x2, &x3);
    float y = sqrt(x1) + 10*x2 - (pow(x3, 2) / 2);
    printf("y = %f\n", y);

    //zadatak 2

    int num1, result;
    printf("Enter an integer number: ");
    scanf("%d", &num1);
    result = num1 % 3 == 0;
    printf("Result: %d\n", result);

    //zadatak 3

    float radius, p, o;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    o = 2*radius*3.14;
    p = 3.14*pow(radius, 2);
    printf("Perimeter: %f\n", o);
    printf("Area: %f\n", p);

    //zadatak 4

    float x, a, i;
    printf("Enter a float number: ");
    scanf("%f", &x);
    printf("Enter the value of a: ");
    scanf("%f", &a);
    i = x >= -a && x <= a;
    printf("Result: %f\n", i);

    //zadatak 5

    int a = 1000;
    float b = 10.5;
    int c = 0x2F;
    char d = 'A';
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of int: %zu bytes\n", sizeof(c));
    printf("Size of char: %zu bytes\n", sizeof(d));

    //zadatak 6

    int day, y, w, d;
    printf("Enter a number of days: ");
    scanf("%d", &day);
    y = day / 365;
    w = (day % 365) / 7;
    d = day - (y * 365 + w * 7);
    printf("%d days is equivalent to %d years, %d weeks, and %d days.\n", day, y, w, d);

    //zadatak 7

    int num, result;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    result = (num % 2 == 0 && num > 20) * 1234;
    printf("Result: %d\n", result);

    //zadatak 8

    int a, b, c, result;
    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    result = a+b>c && a+c>b && b+c>a;
    printf("Result: %d\n", result);

    

}