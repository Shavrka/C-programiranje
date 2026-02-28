/*
 * ZADATAK 08312045 - 08312045
 * Izračunati sumu i proizvod prirodnih brojeva od k do n. Koristiti jednu i dvije petlje.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312045.htm
 */

#include <stdio.h>

int main ()
{
int k,n,p=1,s=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

int i=k;
do
{
s=s+i;
p=p*i;
i++;
} while (i<=n);
printf("Suma iznosi: %d", s);
printf("Proizvod iznosi: %d", p);
return 0;
}

// 08312045
II Varijanta
#include <stdio.h>

int main ()
{
int k,n,p=1,s=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

do
{
s=s+k;
p=p*k;
k++;
} while (k<=n);
printf("Suma iznosi: %d", s);
printf("Proizvod iznosi: %d", p);
return 0;
}