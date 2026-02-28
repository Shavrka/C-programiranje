/*
 * ZADATAK 08212077 - 08212077
 * Napisati program da nađe proizvod prirodnih brojeva od a do b i koliko ih ima.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212077.htm
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
while (i<=b)
{
p=p*i;
br++;
i++;
}
printf("Ukupno brojeva ima: %d", br);
printf("Proizvod iznosi: %d", p);
return 0;
}

II Varijanta
// 08212077
#include <stdio.h>

int main ()
{
int a,b,br=0,p=1;
printf("Od broja: ");
scanf ("%d", &a);
printf("Do broja: ");
scanf ("%d", &b);

while (a<=b)
{
p=p*a;
br++;
a++;
}
printf("Ukupno brojeva ima: %d", br);
printf("Proizvod iznosi: %d", p);
return 0;
}