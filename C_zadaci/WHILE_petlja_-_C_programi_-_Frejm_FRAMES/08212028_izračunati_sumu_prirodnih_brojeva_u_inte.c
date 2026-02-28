/*
 * ZADATAK 08212028 - 08212028
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji su neparni.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212028.htm
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
if(i % 2 != 0)
{
suma+=i;
}
i++;
}
printf("Suma je: %f",suma);

return 0;
getchar();
}