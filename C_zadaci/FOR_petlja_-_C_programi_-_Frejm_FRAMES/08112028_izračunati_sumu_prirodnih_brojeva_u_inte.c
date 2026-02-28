/*
 * ZADATAK 08112028 - 08112028
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji su neparni.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112028.htm
 */

#include <stdio.h>
int main ()
{
int k,n;
float suma;

printf("Unesi K i N: \n");
scanf("%d%d",&k,&n);

for(; k<=n; k++)
if(k % 2 != 0)
suma+=k;

printf("Suma je: %f",suma);

return 0;
}