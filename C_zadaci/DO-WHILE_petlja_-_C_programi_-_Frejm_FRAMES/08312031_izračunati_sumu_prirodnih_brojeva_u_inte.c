/*
 * ZADATAK 08312031 - 08312031
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji su djeljivi sa 7.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312031.htm
 */

#include <stdio.h>

main()

{
int i, k, n;
float suma;

printf("Unesi K i N: \n");
scanf("%d%d",&k,&n);

i =  k;
do	{
if(k % 7 == 0)
{
suma += i;
}
i++;
} while(i<=n)

printf("Suma je: %f",suma);

return 0;
getchar();
}