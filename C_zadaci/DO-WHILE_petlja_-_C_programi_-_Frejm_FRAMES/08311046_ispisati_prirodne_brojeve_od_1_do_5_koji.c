/*
 * ZADATAK 08311046 - 08311046
 * Ispisati prirodne brojeve od 1 do 5 koji nisu djeljivi sa a.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311046.htm
 */

#include <stdio.h>

main()
{
int a,i;

printf("Unesite djelioca: ");
scanf("%d",&a);

i=1;
do	{
if(i % a != 0)
{
printf("%d ",i);
}
i++;
} while(i<=5)

return 0;
getchar();
}