/*
 * ZADATAK 08112144 - 08112144
 * Izračunati proizvod prirodnih brojeva u intervalu od 1 do n koji su djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112144.htm
 */

#include <stdio.h>

main()

{
int i,n,p=1;

printf("Unesi N: ");
scanf("%d",&n);

for(i=1; i <= n; i++)	   // i=1; for(; i <= n;i++)
if(i % 3 == 0)
p*=i;

printf("Gornja granica je %d \nProizvod je: %d",n,p);

return 0;
getchar();
}