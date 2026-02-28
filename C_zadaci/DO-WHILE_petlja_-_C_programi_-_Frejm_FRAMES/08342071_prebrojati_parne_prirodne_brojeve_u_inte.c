/*
 * ZADATAK 08342071 - 08342071
 * Prebrojati parne prirodne brojeve u intervalu od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08342071.htm
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
if(i%2==0)
br++;
i++;
} while (i<=n);
printf("Parnih brojeva u datom intervalu ima: %d", br);
return 0;
}

II Varijanta
// 08312071
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
if(k%2==0)
br++;
k++;
} while (k<=n);
printf("Parnih brojeva u datom intervalu ima: %d", br);
return 0;
}