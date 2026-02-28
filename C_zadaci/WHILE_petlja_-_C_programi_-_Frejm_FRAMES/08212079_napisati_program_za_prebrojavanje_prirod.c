/*
 * ZADATAK 08212079 - 08212079
 * Napisati program za prebrojavanje prirodnih brojeva koji nisu djeljivi sa 3 u intervalu od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212079.htm
 */

#include <stdio.h>

int main ()
{
int k,n,br=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

int i=k;
while (i<=n)
{
if(i%3!=0)
br++;
i++;
}
printf("Nedjeljivih sa 3 ima: %d", br);
return 0;
}

II Varijanta
// 08212079
#include <stdio.h>

int main ()
{
int k,n,br=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

while (k<=n)
{
if(k%3!=0){br++;}
k++;
}
printf("Nedjeljivih sa 3 ima: %d", br);
return 0;
}