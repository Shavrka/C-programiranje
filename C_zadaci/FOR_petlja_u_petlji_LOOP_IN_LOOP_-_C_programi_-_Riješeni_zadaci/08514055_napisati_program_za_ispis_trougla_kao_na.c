/*
 * ZADATAK 56 - 08514055
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514055.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;
char znak;

printf("Broj redova: ");
scanf("%d",&n);
getchar();

printf("Znak: ");
scanf("%c", &znak);

for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (i <= j)               // na glavnoj i iznad glavne dijagonale?
printf("%c", znak);   // na glavnoj i iznad glavne dijagonale
else              // ispod glavne dijagonale?
printf(" ");          // ispod glavne dijagonale
}
printf("\n");
}
return 0;
}

II verzija
// 08514055
#include <stdio.h>

int main()
{
int i, j, n;
char znak;

printf("Broj redova: ");
scanf("%d",&n);
getchar();

printf("Znak: ");
scanf("%c", &znak);

for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (i <= j)               // na glavnoj i iznad glavne dijagonale?
printf("%c", znak);   // na glavnoj i iznad glavne dijagonale
if (i > j)               // ispod glavne dijagonale?
printf(" ");          // ispod glavne dijagonale
}
printf("\n");
}
return 0;
}