/*
 * ZADATAK 83 - 08514006
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514006.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i <= n; i++) {    // redovi
for (j = 1; j <= n; j++)  // kolone
if (i+j >= n+1)           // sporedna dijagonala?
printf("x");      // na sporednoj dijagonali
else
printf(" ");      // izvan sporedne dijagonale
printf("\n");
}
return 0;
}

II verzija
// 08514006
# include <stdio.h>

int main ()
{
int i, j, k, n  ;

printf("Broj redova: ");
scanf("%d",&n);

for (i=1; i<=n; i++)
{
for (j=0; j<=n-i; j++)  // ispis praznina prije znaka
printf(" ");
for (k=1; k<=i; k++)    // ispis znaka
printf("x");
printf("\n");
}
return 0;
}