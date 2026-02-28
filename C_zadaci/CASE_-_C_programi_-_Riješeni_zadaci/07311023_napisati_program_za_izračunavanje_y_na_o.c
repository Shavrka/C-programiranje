/*
 * ZADATAK 18 - 07311023
 * Napisati program za izračunavanje y na osnovu vrijednosti k:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311023.htm
 */

#include <stdio.h>

int main() {
int a, x;

printf("Ucitaj a (1-3): ");
scanf("%d",&a);

switch(a) {
case 1:
printf("Rezultat je: %d", a+1);  // printf("Rezultat je: %d", x=a+1);
break;
case 2:
printf("Rezultat je: %d", a*3);  // printf("Rezultat je: %d", x=a*3);
break;
case 3:
printf("Rezultat je: %d", a-4);  // printf("Rezultat je: %d", x=a-4);
break;
default:
printf("Greska");
}
return 0;
}