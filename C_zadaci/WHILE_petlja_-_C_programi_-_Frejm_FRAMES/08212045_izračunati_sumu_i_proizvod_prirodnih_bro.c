/*
 * ZADATAK 08212045 - 08212045
 * Izračunati sumu i proizvod prirodnih brojeva od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212045.htm
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
while (i<=n)
{
s=s+i;
p=p*i;
i++;
}
printf("Suma iznosi: %d", s);
printf("Proizvod iznosi: %d", p);
return 0;
}

II Varijanta
#include <stdio.h>

int main ()
{
int k,n,p=1,s=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

while (k<=n)
{
s=s+k;
p=p*k;
k++;
}
printf("Suma iznosi: %d", s);
printf("Proizvod iznosi: %d", p);
return 0;
}