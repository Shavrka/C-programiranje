/*
 * ZADATAK 38 - 08514049
 * Napisati program da ispisuje + iznad glavne dijagonale a osali su -.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514049.htm
 */

#include <stdio.h>
int main()
{
int i, j, n;

printf("- ispod glavne dijagonale ostali +\n");
printf("Dimanzija kvadratne matrice ");
scanf("%d",&n);

for (i = 1; i<= n; i++)
{
for (j = 1; j <= n; j++)
{
if (i < j)          // if (logicki izraz) isti indeksi
printf("+");    // istinit /true/: +
else
printf("-");    // lazan /false/:  -
}
printf("\n");
}
return 0;
}