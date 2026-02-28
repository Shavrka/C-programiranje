/*
 * ZADATAK 08212012 - 08212012
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji su deljivi sa 7 i sa 3
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212012.htm
 */

#include <stdio.h>

main()

{
float suma;
int i, n;

printf("Unesite N: ");
scanf("%d",&n);

i=1;
while(i<=n)
{
if((i % 3 == 0) && (i % 7 == 0))
{
suma+=i;
}
i++;
}
printf("Suma brojeva je: %f",suma);

return 0;
getchar();
}