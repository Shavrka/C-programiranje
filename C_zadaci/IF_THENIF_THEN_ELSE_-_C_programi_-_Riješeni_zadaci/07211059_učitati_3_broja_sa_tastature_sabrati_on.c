/*
 * ZADATAK 73 - 07211059
 * Učitati 3 broja sa tastature. Sabrati one koji su u intervalu veći 5 i manji ili jednak 9.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211059.htm
 */

#include<stdio.h>

int main()
{
printf("Od 3 ucitana sabrati brojeva iz opsega 5 do 9\n");

int a1, a2, a3, suma;

printf("1. broj: ");
scanf("%d", &a1);
printf("2.  broj: ");
scanf("%d", &a2);
printf("3.  broj: ");
scanf("%d", &a3);

suma=0;

if((a1 > 5) && (a1 <= 9))
suma = suma + a1;

if((a2 > 5) && (a2 <= 9))
suma = suma + a2;

if((a3 > 5) && (a2 <= 9))
suma = suma + a3;

printf("Suma brojeva koji se nalaze u intervalu od 5 do 9 je: %d", suma);

return 0;
}