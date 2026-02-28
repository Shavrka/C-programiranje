/*
 * ZADATAK 08312077 - 08312077
 * Napisati program da nađe proizvod prirodnih brojeva od a do b i koliko ih ima.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312077.htm
 */

#include <stdio.h>

int main ()
{
int a,b,br=0,p=1;
printf("Od broja: ");
scanf ("%d", &a);
printf("Do broja: ");
scanf ("%d", &b);

int i=a;
do
{
p=p*i;
br++;
i++;
} while (i<=b);
printf("Ukupno brojeva ima: %d", br);
printf("Proizvod iznosi: %d", p);
return 0;
}

II Varijanta
// 08312077
#include <stdio.h>

int main ()
{
int a,b,br=0,p=1;
printf("Od broja: ");
scanf ("%d", &a);
printf("Do broja: ");
scanf ("%d", &b);

do
{
p=p*a;
br++;
a++;
} while (a<=b);
printf("Ukupno brojeva ima: %d", br);
printf("Proizvod iznosi: %d", p);
return 0;
}