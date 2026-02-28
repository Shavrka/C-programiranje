/*
 * ZADATAK 08714022 - 08714022
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714022.htm
 */

#include <stdio.h>

int main()
{
int i, j, n, k;

printf("Broj redova: ");
scanf("%d",&n);
k = 0;                // ispisano do sad brojeva = 0
i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
k = k + i;        // dosad ispisanih brojeva + max vrijednost u redu
do {                 // pocetak do-while petlje j
if (j <= i) {    // na i ispod glavne dijagonale
printf("%d ", k);
}
k--;              // ispis brojava unazad
j++;
} while (j <= i);     // sve dok je j <= n ponavljaj
k = k + i;            // dosad ispisanih
printf("\n");
i++;
} while (i <= n);         // sve dok je i <= n ponavljaj
return 0;
}