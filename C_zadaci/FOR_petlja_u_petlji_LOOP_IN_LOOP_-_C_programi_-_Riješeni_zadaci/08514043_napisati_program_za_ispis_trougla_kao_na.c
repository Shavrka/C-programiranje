/*
 * ZADATAK 97 - 08514043
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514043.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (j = 1; j < (2 * n - 1); j++)  // gornja stranica trougla
printf("x");
printf("x");

printf(" \n"); // stranice trougla
for (i = 2; i < n; i++) {

for (j = 1; j < n; j++) { // desna stranica
if (i == j)           // glavna dijagonala?
printf("x");      // na glavnoj dijagonali
else
printf(" ");      // izvan glavne dijagonale
}
for (j = 1; j <= n - 1; j++) { // lijeva stranica
if ((i + j) == (n + 1))
printf("x");      // na sporednoj dijagonali
else
printf(" ");      // izvan sporedne dijagonale
}
printf("\n");
}
for (j = 1; j < n; j++) { // dno trougla
printf(" ");
}
printf("x");
return 0;
}