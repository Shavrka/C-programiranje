/*
 * ZADATAK 08114008 - 08114008
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08114008.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i=n; i>=1; i--)
{
for (j = 0; j < i; j++)    // ispis znaka
{
printf("x");
}
printf("\n");              // novi red
}
getchar();
}

II varijanta
#include <stdio.h>

int main()
{
int i, j, k, n;

printf("Do broja: ");
scanf("%d",&n);

for (i=1; i<=n; i++) {
for (j=0; j<=n-i; j++)   // ispis znaka
printf("x");
printf("\n");            // novi red
}
getchar();
}