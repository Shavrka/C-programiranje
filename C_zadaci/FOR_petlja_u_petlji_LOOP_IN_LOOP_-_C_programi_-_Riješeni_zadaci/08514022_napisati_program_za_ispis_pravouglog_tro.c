/*
 * ZADATAK 55 - 08514022
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514022.htm
 */

#include <stdio.h>

int main()
{
int i, j, k, n;

printf("Do broja: ");
scanf("%d",&n);

k = 0;                         // ispisano do sad brojeva = 0
for (i = 1; i <= n; i++){
k = k + i;                  // dosad ispisanih brojeva + max vrijednost u redu
for (j = 1; j <= i; j++){   // ispis znaka
//       printf("vanjska %d %d %d \n",i, j, k);
printf("%d ", k);
k--;                   // ispis brojava unazad
}
k = k + i;                  // dosad ispisanih
printf("\n");               // novi red
}
return 0;
}