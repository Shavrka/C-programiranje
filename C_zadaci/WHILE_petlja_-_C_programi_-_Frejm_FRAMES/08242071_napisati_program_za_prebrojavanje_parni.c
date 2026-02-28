/*
 * ZADATAK 08242071 - 08242071
 * Napisati program za prebrojavanje  parnih brojeva od k do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08242071.htm
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
if(i%2==0)
br++;
i++;
}
printf("Parnih brojeva u datom intervalu ima: %d", br);
return 0;
}

II Varijanta
// 08212071
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
if(k%2==0)
br++;
k++;
}
printf("Parnih brojeva u datom intervalu ima: %d", br);
return 0;
}