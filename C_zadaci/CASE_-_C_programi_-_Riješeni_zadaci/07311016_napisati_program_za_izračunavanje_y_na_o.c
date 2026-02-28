/*
 * ZADATAK 17 - 07311016
 * Napisati program za izračunavanje y na osnovu vrijednosti k:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311016.htm
 */

#include <stdio.h>

main() {
int y,k;

printf("Unesite k (1-3): ");
scanf("%d",&k);

switch(k) {
case 1:
printf("Rezultat je: %d",y=k+2);
break;
case 2:
printf("Rezultat je: %d",y=k-2);
break;
case 3:
printf("Rezultat je: %d",y=k*2);
break;
default:
printf("Greska");
}
return 0;
}