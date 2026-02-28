/*
 * ZADATAK 20 - 07311018
 * Napisati program za izračunavanje y na osnovu vrijednosti k:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311018.htm
 */

#include <stdio.h>

main() {
int k,y;

printf("Unesi K: ");
scanf("%d",&k);

switch(k) {
case 1: case 4: printf("Rezultat je: %d",y=k+2); break;
case 2: case 6: printf("Rezultat je: %d",y=k-2); break;
case 3: case 5: case 7: printf("Rezultat je: %d",y=k*2); break;
default: printf("Greska");
}
return 0;
}