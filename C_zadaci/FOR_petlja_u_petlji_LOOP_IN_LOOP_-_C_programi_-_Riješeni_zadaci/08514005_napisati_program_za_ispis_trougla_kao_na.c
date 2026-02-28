/*
 * ZADATAK 88 - 08514005
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514005.htm
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

for (i = 1; i<= n; i++) {
for (j = 1; j <= n; j++)
if ((i + j) >= (n + 1))     // ispod i na sporednoj dijagonali
printf("%c ", znak);    // ispis
else
printf(" ");
printf("\n");
}
return 0;
}