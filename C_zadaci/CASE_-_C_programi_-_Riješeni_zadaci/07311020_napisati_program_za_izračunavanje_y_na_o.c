/*
 * ZADATAK 19 - 07311020
 * Napisati program za izračunavanje y na osnovu vrijednosti x:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311020.htm
 */

#include <stdio.h>

main()
{
int x,y;

printf("Unesite X: ");
scanf("%d",&x);

switch(x)
{
case 1: printf("Rezultat je: %d",y=x+2); break;
case 2: printf("Rezultat je: %d",y=x-2); break;
case 3: printf("Rezultat je: %d",y=x/2); break;
default: printf("Greska");
}
return 0;
}