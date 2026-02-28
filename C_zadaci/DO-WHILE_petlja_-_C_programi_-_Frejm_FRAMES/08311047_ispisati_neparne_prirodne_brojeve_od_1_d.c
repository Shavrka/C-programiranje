/*
 * ZADATAK 08311047 - 08311047
 * Ispisati neparne prirodne brojeve od 1 do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311047.htm
 */

#include <stdio.h>

main()
{
int i, n;

printf("Unesite gornju granicu: ");
scanf("%d",&n);

i=1;
do	{
if(i % 2 != 0)
{
printf("%d ",i);
}
i++;
} while(i<=n)

return 0;
getchar();
}