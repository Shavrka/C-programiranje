/*
 * ZADATAK 08242075 - 08242075
 * Napisati program za prebrojavanje prirodnih brojeva od k do n djeljivih sa l.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08242075.htm
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
while (i<=n)
{
if(i%l==0)
br++;
i++;
}
printf("Djeljivih ima: %d", br);
return 0;
}

II Varijanta
// 08242075
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

while (k<=n)
{
if(k%l==0)
br++;
k++;
}
printf("Djeljivih ima: %d", br);
return 0;
}