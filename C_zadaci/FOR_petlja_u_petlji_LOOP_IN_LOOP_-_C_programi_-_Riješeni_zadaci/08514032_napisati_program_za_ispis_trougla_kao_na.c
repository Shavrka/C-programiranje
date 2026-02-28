/*
 * ZADATAK 85 - 08514032
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514032.htm
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
if (i+j >= n+1)       // sporedna dijagonala i ispod sporedne dijagonale?
printf("x ");     // znak i jedno prazno mjesto
else                  // iznad sporedne dijagonale
printf("  ");     // dva prazna mjesta
printf("\n");
}
return 0;
}

II verzija
// 08514032
# include <stdio.h>

int main ()
{
int i, j, k, n  ;

printf("Broj redova: ");
scanf("%d",&n);

for (i=1; i<=n; i++)
{
for (j=1; j<=n-i; j++)  // ispis praznina prije znaka
printf("  ");       // po dvije praznine
for (k=1; k<=i; k++)    // ispis znaka
printf("x ");       // poslije znaka praznina
printf("\n");
}
return 0;
}