/*
 * ZADATAK 13 - 07211040
 * Napisati program za odredjivanje y po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211040.htm
 */

#include<stdio.h>

int main()
{
int a, y;                          // deklarisanje varjabli

printf("Broj: ");
scanf("%d", &a);                   // upis a

if (a % 2 == 0) {                  // ako je a parno ?
y = a + 3;                     // da, a parno; y = a + 3
printf("Rezultat je: %d",y);   // ispis
}
else {                             // inace
y = a - 2;                     // da, a parno; y = a - 2
printf("Rezultat je: %d",y);   // ispis
}

return 0;
}