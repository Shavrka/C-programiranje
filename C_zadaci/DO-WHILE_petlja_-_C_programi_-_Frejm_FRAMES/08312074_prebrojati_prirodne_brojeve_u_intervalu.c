/*
 * ZADATAK 08312074 - 08312074
 * Prebrojati prirodne brojeve u intervalu od k do n koji su djeljivi sa 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312074.htm
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
if(i%3==0)
br++;
i++;
} while (i<=n);
printf("Djeljivih sa 3 ima: %d", br);
return 0;
}

II Varijanta
// 08312074
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
if(k%3==0)
br++;
k++;
} while (k<=n);
printf("Djeljivih sa 3 ima: %d", br);
return 0;
}