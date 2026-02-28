/*
 * ZADATAK 08212082 - 08212082
 * Napisati program da nađe proizvod prirodnih brojeva od a do b djeljivih sa 5 i koliko ih ima.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212082.htm
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
if(i%5==0)
{
p=p*i;
br++;
}
i++;
}
printf("Brojeva djeljivih sa 5 ima: %d", br);
printf("Proizvod iznosi: %d", p);
return 0;
}

II Varijanta
// 08212082
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
if(a%5==0)
{
p=p*a;
br++;
}
a++;
}
printf("Brojeva djeljivih sa 5 ima: %d", br);
printf("Proizvod iznosi: %d", p);
return 0;
}