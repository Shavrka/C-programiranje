/*
 * ZADATAK 99 - 08514068
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514068.htm
 */

#include <stdio.h>

int main()
{
int i, j, n, lijevo, sredina;
lijevo = 0;    // lijeva granica

printf("Broj redova: ");
scanf("%d",&n);
sredina = 4 * n - 3 ;

for (i = 1; i <= n; i++)
{
for (j = 1; j <= lijevo; j++)
printf(" ");         // praznina sa lijeve strane
printf("***");           // zvijezde sa lijeve strane
lijevo = lijevo + 2;     // dva mjesto u deso
for (j = 1; j <= sredina; j++)
printf(" ");           // praznina u sredini
printf("***");           // zvijezde desno
sredina = sredina - 4;   // 4 mjesto manje u sredini
printf("\n");
}
return 0;
}