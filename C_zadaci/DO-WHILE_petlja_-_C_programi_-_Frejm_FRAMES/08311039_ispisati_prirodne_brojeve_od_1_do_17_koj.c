/*
 * ZADATAK 08311039 - 08311039
 * Ispisati prirodne brojeve od 1 do 17 koji su djeljivi sa a.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311039.htm
 */

#include <stdio.h>

int main ()
{
int i=1,a;
printf("Unesite djelilac: ");
scanf("%d", &a);
do{
if(i%a==0)
{
printf("%d\n", i);
}
i++;
} while(i <= 17);
return 0;
}