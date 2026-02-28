/*
 * ZADATAK 08311030 - 08311030
 * Napisati program za ispis prirodnih brojeva od 3 do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311030.htm
 */

#include <stdio.h>

main()
{
int i,n;
printf("Unesi N: ");
scanf("%d",&n);

i=3;
do	{
printf("%d ",i);
i++;
} while(i<=n)

return 0;
getchar();
}