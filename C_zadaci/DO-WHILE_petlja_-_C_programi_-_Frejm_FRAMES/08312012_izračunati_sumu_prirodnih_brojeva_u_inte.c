/*
 * ZADATAK 08312012 - 08312012
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji su djeljivi sa 7 i sa 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312012.htm
 */

#include <stdio.h>

main()

{
float suma;
int i, n;

printf("Unesite N: ");
scanf("%d",&n);

i=1;
do	{
if((i % 3 == 0) && (i % 7 == 0))
{
suma+=i;
}
i++;
} while(i<=n)

printf("Suma brojeva je: %f",suma);

return 0;
getchar();
}