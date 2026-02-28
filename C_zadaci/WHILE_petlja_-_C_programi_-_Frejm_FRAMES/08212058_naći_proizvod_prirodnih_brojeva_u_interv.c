/*
 * ZADATAK 08212058 - 08212058
 * Naći proizvod prirodnih brojeva u intervalu od k do n koji su deljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212058.htm
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
while (i<=n)
{
if(i%a==0)
p=p*i;
i++;
}
printf("Proizvod iznosi: %d", p);
return 0;
}

II Varijanta
// 08212058
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
while (k<=n)
{
if(k%a==0)
{p=p*k;}
k++;
}
printf("Proizvod iznosi: %d", p);
return 0;
}