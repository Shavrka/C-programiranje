/*
 * ZADATAK 34 - 08514026
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514026.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i <= n; i++){
for (j = 1; j <= n; j++)   // ispis znaka
if (i >= j)            // ispod i na glavnoj dijagonali?
printf("1");       //  ispod i na glavnoj dijagonali
printf("\n");              // novi red
}
return 0;
}

II Varijanta
// 08514026
#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i <= n; i++)
{
for (j = 0; j < i; j++)
{
printf("1");
}
printf("\n");
}
return 0;
}