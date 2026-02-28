/*
 * ZADATAK 08211040 - 08211040
 * Ispisati prirodne brojeve od 1 do 17 koji nisu djeljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211040.htm
 */

#include <stdio.h>

main()

{
int a, i;

printf("Unesi djelioca: ");
scanf("%d",&a);

i=1;
while(i<=17)
{
if(i % a !=0)
{
printf("%d ",i);
}
i++;
}
return 0;
getchar();
}