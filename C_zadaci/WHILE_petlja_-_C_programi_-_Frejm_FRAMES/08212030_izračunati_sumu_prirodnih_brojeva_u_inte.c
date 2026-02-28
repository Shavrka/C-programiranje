/*
 * ZADATAK 08212030 - 08212030
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji nisu djeljivi sa 3.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212030.htm
 */

#include <stdio.h>

main()

{
int i, k, n;
float suma;

printf("Unesi K i N: \n");
scanf("%d%d",&k,&n);

i =  k;
while(i<=n)
{
if(k % 3 != 0)
{
suma+=i;  // suma = suma + i;
}
i++;
}
printf("Suma je: %f",suma);

return 0;
getchar();
}