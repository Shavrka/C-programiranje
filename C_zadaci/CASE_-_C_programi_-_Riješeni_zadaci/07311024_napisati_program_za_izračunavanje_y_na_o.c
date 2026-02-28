/*
 * ZADATAK 21 - 07311024
 * Napisati program za izračunavanje y na osnovu vrijednosti k:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311024.htm
 */

#include <stdio.h>

int main() {
int k,y;

printf("Ucitaj k: ");
scanf("%d",&k);

switch(k) {
case 1: case 7: printf("Rezultat je: %d", k-2); break;
case 3: case 4: printf("Rezultat je: %d", k+2); break;
case 2: case 5: case 6: printf("Rezultat je: %d",y=k*3); break;
default: printf("Greska");
}
return 0;
}