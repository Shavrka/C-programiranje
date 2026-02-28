/*
 * ZADATAK 08614022 - 08614022
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614022.htm
 */

#include <stdio.h>

int main()
{
int i, j, n, k;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                 // pocetna vrijednosti i
k = 0;                 // ispisano do sad brojeva = 0
while (i <= n)  {      // dok je i <= n ponavljaj - pocetak petlje
j = 1;             // pocetna vrijednost j
k = k + i;         // dosad ispisanih brojeva + max vrijednost u redu
while (j <= i)  {  // dok je j < i  ponavljaj - pocetak petlje (ispod i glavna dijagonala)
printf("%d ", k);
k--;           // ispis brojava unazad
j++;
}   // kraj While petlje j
k = k + i;         // dosad ispisanih
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}