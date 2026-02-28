/*
 * ZADATAK 08112077 - 08112077
 * Napisati program da nađe proizvod prirodnih brojeva od a do b i koliko ih ima.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112077.htm
 */

#include <stdio.h>

int main ()
{
int a,b,br=0,p=1;
printf("Od broja: ");
scanf ("%d", &a);
printf("Do broja: ");
scanf ("%d", &b);

int i;
for (i=a; i <= b; ++i)
{
p=p*i;
br++;
}
printf("Ukupno brojeva ima: %d", br);
printf("Proizvod iznosi: %d", p);
return 0;
}

II Varijanta
// 08112077
#include <stdio.h>

int main ()
{
int a,b,br=0,p=1;
printf("Od broja: ");
scanf ("%d", &a);
printf("Do broja: ");
scanf ("%d", &b);

FOR (a<=b)
{
p=p*a;
br++;
a++;
}
printf("Ukupno brojeva ima: %d", br);
printf("Proizvod iznosi: %d", p);
return 0;
}