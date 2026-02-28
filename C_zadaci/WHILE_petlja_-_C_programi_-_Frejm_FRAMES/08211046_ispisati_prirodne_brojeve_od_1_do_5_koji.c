/*
 * ZADATAK 08211046 - 08211046
 * Ispisati prirodne brojeve od 1 do 5 koji nisu djeljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211046.htm
 */

#include <stdio.h>

int main ()
{
int a,i;

printf("Unesite djelioca: ");
scanf("%d",&a);

i = 1;
while(i <= 5) {
if(i % a != 0)
printf("%d ",i);
i++;
}
return 0;
}