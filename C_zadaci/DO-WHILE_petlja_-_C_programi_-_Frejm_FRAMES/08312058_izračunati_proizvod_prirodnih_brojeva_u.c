/*
 * ZADATAK 08312058 - 08312058
 * Izračunati proizvod prirodnih brojeva u intervalu od k do n koji su djeljivi sa a.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312058.htm
 */

#include <stdio.h>

int main ()
{
int k,n,a,p=1;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);
printf("Unesi djelilac: ");
scanf ("%d", &a);

int i=k;
do
{
if(i%a==0)
p=p*i;
i++;
} while (i<=n);
printf("Proizvod iznosi: %d", p);
return 0;
}

II Varijanta
// 08312058
#include <stdio.h>

int main ()
{
int k,n,a,p=1;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);
printf("Unesi djelilac: ");
scanf ("%d", &a);
do
{
if(k%a==0)
{p=p*k;}
k++;
} while (k<=n);
printf("Proizvod iznosi: %d", p);
return 0;
}