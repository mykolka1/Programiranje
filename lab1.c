#include<stdio.h>

int main(void) {

    // zadatak 1

    int a;
    printf("unesite broj a");
    scanf("%d", &a);
    printf("Broj u dekadskom zapisu %d\n", a);
    printf("Broj u oktalnom zapisu %hho\n", a);
    printf("Broj u heksadecimalnom zapisu %hhx\n", a);
    return 0;

    // zadatak 2

    char a,b;
    printf("Unesite znak a i b");
    scanf("%c, %c", &a, &b);
    printf("Znak b %c\n", b);
    printf("Znak a %c\n", a);
    
    printf("znak u dekadskom zapisu %d\n", b);
    printf("znak u oktalnom zapisu %hho\n", b);
    printf("znak u heksadecimalnom zapisu %hhx\n", b);
    
    printf("znak u dekadskom zapisu %d\n", a);
    printf("znak u oktalnom zapisu %hho\n", a);
    printf("znak u heksadecimalnom zapisu %hhx\n", a);
    return 0;

}
