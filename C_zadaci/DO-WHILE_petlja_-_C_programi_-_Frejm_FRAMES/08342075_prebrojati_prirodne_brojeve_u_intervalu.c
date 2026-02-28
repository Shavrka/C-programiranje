/*
 * ZADATAK 08342075 - 08342075
 * Prebrojati prirodne brojeve u intervalu od k do n koji su djeljivi sa l.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08342075.htm
 */

#include <stdio.h>

int main ()
{
int k,n,l,br=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);
printf("Djelilac: ");
scanf ("%d", &l);

int i=k;
do
{
if(i%l==0)
br++;
i++;
} while (i<=n);
printf("Djeljivih ima: %d", br);
return 0;
}

II Varijanta
// 08342075
#include <stdio.h>

int main ()
{
int k,n,l,br=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);
printf("Djelilac: ");
scanf ("%d", &l);

do
{
if(k%l==0)
br++;
k++;
} while (k<=n);
printf("Djeljivih ima: %d", br);
return 0;
}