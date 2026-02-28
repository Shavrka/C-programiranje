/*
 * ZADATAK 08614020 - 08614020
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614020.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                 // pocetna vrijednosti i
while (i <= n)  {      // dok je i <= n ponavljaj - pocetak petlje
j = 1;             // pocetna vrijednost j
while (j <= i)  {       // dok je j <= i (ispod i glavna dijagonala) ponavljaj - pocetak petlje
printf("%d ", j);   // ispis indesa unutrasnje petlje
j++;
}   // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}