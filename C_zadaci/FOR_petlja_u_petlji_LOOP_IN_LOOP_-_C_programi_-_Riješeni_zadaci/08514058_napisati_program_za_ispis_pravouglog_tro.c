/*
 * ZADATAK 52 - 08514058
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514058.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;
printf("Trougao\n");

printf("Broj redova: ");
scanf("%d",&n);

for (i = 1; i <= n; i++) {          // za i od 1 do n ponavljaj - pocetak petlje
for (j = 0; j < i; j++)         // za j < i  ponavlja
printf("%d ", (int)pow(3, j));  // cjelobrojna vrijednost stepena broja 3**j
printf("\n");
}
return 0;
}