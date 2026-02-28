/*
 * ZADATAK 08211039 - 08211039
 * Ispisati prirodne brojeve od 1 do 17 koji su djeljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211039.htm
 */

#include <stdio.h>

int main ()
{
int i=1,a;
printf("Unesite djelilac: ");
scanf("%d", &a);
while (i<=17)
{
if(i%a==0)
{
printf("%d\n", i);
}
i++;
}
return 0;
}