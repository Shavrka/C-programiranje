/*
 * ZADATAK 08312059 - 08312059
 * Izračunati proizvod prirodnih brojeva u intervalu od k do n čija je cifra jedinica 4.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312059.htm
 */

#include <stdio.h>

int main ()
{
int k,n,p=1;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

int i=k;
do
{
if(i%10==4)
p=p*i;
i++;
} while (i<=n);
printf("Proizvod iznosi: %d", p);
return 0;
}

II Varijanta
// 08312059;
USES
#include <stdio.h>

int main ()
{
int k,n,p=1;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

do
{
if(k< 100 && k%10==4)
{p=p*k;}
k++;
} while (k<=n);
printf("Proizvod iznosi: %d", p);
return 0;
}