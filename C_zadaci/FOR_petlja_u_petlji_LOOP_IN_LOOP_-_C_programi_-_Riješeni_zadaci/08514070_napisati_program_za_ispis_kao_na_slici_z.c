/*
 * ZADATAK 101 - 08514070
 * Napisati program za ispis kao na slici za 5 i 8 redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514070.htm
 */

#include <stdio.h>

int main ()
{
int i, j, n, k, kraj1, kraj2;

printf("Broj redova: ");
scanf("%d",&n);

brojac = 0;            // brojac ispisanih znakova

if (n % 2 == 0) {      // isti broj rastuci i opadajuci
kraj1 = n / 2;
kraj2 = n / 2;
} else {
kraj1 = n / 2 + 1;  // jedan red sa max broj
kraj2 = n / 2;
}

for (i = 1; i <= kraj1; i++)  {   // red
for (j = 1; j <= i; j++)          // kolona do glavne dijagonale
printf("%d",j);
for (k = j; k <= n; k++)          // ostatak reda
printf("%d",j-1);
printf("\n");
}

for (i = kraj2; i >= 1; i--)  {    // red
for (j = 1; j <= i; j++)       // kolona do sporedne dijagonale
printf("%d",j);
for (k = j; k <= n; k++)       // ostatak reda
printf("%d",j-1);
printf("\n");
}

return 0;
}