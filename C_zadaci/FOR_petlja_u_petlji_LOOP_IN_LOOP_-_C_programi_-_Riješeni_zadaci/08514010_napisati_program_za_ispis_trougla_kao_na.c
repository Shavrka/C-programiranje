/*
 * ZADATAK 94 - 08514010
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514010.htm
 */

#include <stdio.h>

int main ()
{
int i, j, n;
char znak;
printf("Trougao\n");

printf("Broj redova: ");
scanf("%d",&n);
getchar();

printf("Znak: ");
scanf("%c", &znak);

for (i = n; i >= 1; i--) {          // zamjenjen redosljied
for (j = 1; j <= n; j++)
if ((i + j) >= (n + 1))     // iznad glavne/sporedne dijagonale ?
printf("%c ", znak);    // ispis
else
printf(" ");
printf("\n");
}
return 0;
}