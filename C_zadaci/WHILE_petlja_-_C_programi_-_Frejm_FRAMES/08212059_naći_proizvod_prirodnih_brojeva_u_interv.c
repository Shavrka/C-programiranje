/*
 * ZADATAK 08212059 - 08212059
 * Naći proizvod prirodnih brojeva u intervalu od k do n čija je cifra jedinica 4.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212059.htm
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
while (i<=n)
{
if(i%10==4)
p=p*i;
i++;
}
printf("Proizvod iznosi: %d", p);
return 0;
}

II Varijanta
// 08212059;
USES
#include <stdio.h>

int main ()
{
int k,n,p=1;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

while (k<=n)
{
if(k< 100 && k%10==4)
{p=p*k;}
k++;
}
printf("Proizvod iznosi: %d", p);
return 0;
}