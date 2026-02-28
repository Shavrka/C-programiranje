/*
 * ZADATAK 08112027 - 08112027
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji su parni.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112027.htm
 */

#include <stdio.h>
int main ()
{
int n,k;
float suma;

printf("Unesite K i N: \n");
scanf("%d%d",&k,&n);

for(;k<=n;k++)
if(k % 2 == 0)
suma+=k;

printf("Suma je: %f",suma);

return 0;
}