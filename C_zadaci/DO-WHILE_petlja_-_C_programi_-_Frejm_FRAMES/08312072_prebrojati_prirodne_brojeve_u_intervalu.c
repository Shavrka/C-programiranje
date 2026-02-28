/*
 * ZADATAK 08312072 - 08312072
 * Prebrojati prirodne brojeve u intervalu od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312072.htm
 */

#include <stdio.h>

int main ()
{
int k,n,br=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

int i=k;
do
{
br++;
i++;
} do while (i<=n);
printf("Brojeva u datom intervalu ima: %d", br);
return 0;
}

II Varijanta
// 08312072
#include <stdio.h>

int main ()
{
int k,n,br=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

do
{
br++;
k++;
} while (k<=n);
printf("Brojeva u datom intervalu ima: %d", br);
return 0;
}