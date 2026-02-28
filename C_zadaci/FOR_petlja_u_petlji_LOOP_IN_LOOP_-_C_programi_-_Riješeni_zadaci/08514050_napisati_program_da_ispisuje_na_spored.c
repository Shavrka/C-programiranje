/*
 * ZADATAK 72 - 08514050
 * Napisati program da ispisuje + na sporednoj dijagonali a osali su -.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514050.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("+ na sporednoj dijagonali a osali su -\n");
printf("Dimanzija kvadratne matrice ");
scanf("%d",&n);

for (i = 1; i<= n; i++) {
for (j = 1; j <= n; j++)  {
if (i + j == n +1)  // if (logicki izraz) sporedna dijagonala
printf("+");    // istinit /true/: +
else
printf("-");    // lazan /false/:  -
}
printf("\n");
}
return 0;
}