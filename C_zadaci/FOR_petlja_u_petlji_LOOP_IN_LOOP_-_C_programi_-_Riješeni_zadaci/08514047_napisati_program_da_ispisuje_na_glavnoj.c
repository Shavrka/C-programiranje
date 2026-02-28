/*
 * ZADATAK 36 - 08514047
 * Napisati program da ispisuje na glavnoj dijagonali + a osali su -:
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514047.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i <= n; i++) {
for (j = 1; j <= n; j++)
if (i == j)           // glavna dijagonala?
printf("+");      // na glavnoj dijagonali
else
printf("-");      // izvan glavne dijagonale
printf("\n");
}
return 0;
}