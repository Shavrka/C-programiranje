/*
 * ZADATAK 100 - 08514069
 * Napisati program za ispis kao na slici za 5 i 8 redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514069.htm
 */

#include <stdio.h>

int main ()
{
int i, j, n, brojac;

printf("Broj redova: ");
scanf("%d",&n);

brojac = 0;                     // brojac ispisanih znakova
for (i = 0; i < n; i++)  {      // red
for (j = n; j >= 1; j--) {  // kolona
switch(brojac % 6) {
case 0: case 1: case 2: printf("/"); break;
case 3: case 4: case 5: printf("\\");  break;
}
brojac ++;
}
printf("\n");
}
return 0;
}