/*
 * ZADATAK 98 - 08514053
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514053.htm
 */

#include <stdio.h>

int main()
{
int i, j, n, lijevo, sredina;
lijevo = 0;    // lijeva granica

printf("Broj redova: ");
scanf("%d",&n);
sredina = 2 * n - 1 ;

for (i = 1; i <= n; i++)
{
for (j = 1; j <= lijevo; j++)
printf(" ");         // praznina sa lijeve strane
printf("***");           // zvijezde sa lijeve strane
lijevo = lijevo + 1;     // mjesto u desno
for (j = 1; j <= sredina; j++)
printf(" ");         // praznina u sredini
printf("***");           // zvijezde desno
sredina = sredina - 2;   // 2 mjesto manje u sredini za svaku stranu po jedan
printf("\n");
}
return 0;
}