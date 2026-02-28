/*
 * ZADATAK 08212072 - 08212072
 * Napisati program  za prebrojavanje prirodnih brojeva od k do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212072.htm
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
while (i<=n)
{
br++;
i++;
}
printf("Brojeva u datom intervalu ima: %d", br);
return 0;
}

II Varijanta
// 08212072
#include <stdio.h>

int main ()
{
int k,n,br=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

while (k<=n)
{
br++;
k++;
}
printf("Brojeva u datom intervalu ima: %d", br);
return 0;
}