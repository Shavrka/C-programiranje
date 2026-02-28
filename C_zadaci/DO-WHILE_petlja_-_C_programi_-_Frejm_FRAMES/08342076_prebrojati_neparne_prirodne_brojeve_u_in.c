/*
 * ZADATAK 08342076 - 08342076
 * Prebrojati neparne prirodne brojeve u intervalu od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08342076.htm
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
if(i%2==1)
br++;
i++;
} while (i<=n);
printf("Neparnih brojeva u datom intervalu ima: %d", br);
return 0;
}

II Varijanta
// 08342076;
// prebrojati neparne prirodne brojeve od k do n
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
if(k%2==1)
br++;
k++;
} while (k<=n);
printf("Neparnih brojeva u datom intervalu ima: %d", br);
return 0;
}