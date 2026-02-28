/*
 * ZADATAK 252 - 08114006
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08114006.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, j, n;

printf("Broj redova: ");
scanf("%d",&n);

for (i=1; i<=n; i++){
for (j=0; j <= n; j++)        // ispis u redu
if ((i + j) >= (n + 1))   // sporedna dijagonala?
printf("x");          // ispod sporedne dijagonale
else
printf(" ");
printf("\n");
}
return 0;
}

II varijanta
// 08114006
# include <stdio.h>

int main ()
{
int i, j, k, n  ;

printf("Do broja: ");
scanf("%d",&n);

for (i=1; i<=n; i++)
{
for (j=0; j<=n-i; j++)  // ispis praznina prije znaka
{
printf(" ");
}
for (k=1; k<=i; k++)    // ispis znaka
{
printf("x");
}
printf("\n");
}
getchar();
}