/*
 * ZADATAK 08312082 - 08312082
 * Napisati program da nađe proizvod prirodnih brojeva od a do b djeljivih sa 5 i koliko ih ima.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312082.htm
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
if(i%5==0)
{
p=p*i;
br++;
}
i++;
} while (i<=b);
printf("Brojeva djeljivih sa 5 ima: %d", br);
printf("Proizvod iznosi: %d", p);
return 0;
}

II Varijanta
// 08312082
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
if(a%5==0)
{
p=p*a;
br++;
}
a++;
} while (a<=b);
printf("Brojeva djeljivih sa 5 ima: %d", br);
printf("Proizvod iznosi: %d", p);
return 0;
}