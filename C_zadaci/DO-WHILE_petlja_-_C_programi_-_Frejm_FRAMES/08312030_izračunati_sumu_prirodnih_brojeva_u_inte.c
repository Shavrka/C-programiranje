/*
 * ZADATAK 08312030 - 08312030
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji nisu djeljivi sa 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312030.htm
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
if(k % 3 != 0)
{
suma+=i;  // suma = suma + i;
}
i++;
} while(i<=n)

printf("Suma je: %f",suma);

return 0;
getchar();
}