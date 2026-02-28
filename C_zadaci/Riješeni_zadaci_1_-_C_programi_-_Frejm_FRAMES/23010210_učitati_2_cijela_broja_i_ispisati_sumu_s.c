/*
 * ZADATAK 23010210 - 23010210
 * Učitati 2 cijela broja i Ispisati sumu svih brojeva između njih koji su djeljivi sa 5.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010210.htm
 */

#include <stdio.h>

int main ()
{
int i, a, b, pom, suma;

printf("Prvi broj: ");
scanf("%d",&a);
printf("Drugi broj ");
scanf("%d",&b);

if (a > b) {  // a prima manju vrijednost - swap
pom = a;
a = b;
b = pom;
}

printf( "Izmedju brojeva: %d i %d \n", a, b);   // naslov i opseg ispisa

suma = 0;      // pocetna vrijednost sume
for ( i= a+1; i < b; i++)  // ponavljanje za i=a+1 do i=b-1 - pocetak petlje
if(i%5 == 0)      // da li je broj djeljiv sa 5?
suma += i;    // kumulativna suma - na prethodnu sumu dadaj vrijednost i

printf( "Suma brojeva koji su djeljivi sa 5 je: %d", suma);

return 0;
}