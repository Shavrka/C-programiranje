/*
 * ZADATAK 08212002 - 08212002
 * Izračunati i ispisati sumu prirodnih brojeva od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212002.htm
 */

#include <stdio.h>

int main ()
{
int s=0,n,k;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);
while (k <= n)
{
s=s+k;
k++;
}
printf("Suma iznosi: %d", s);
return 0;
}

II Varijanta
//  p08212002;
#include <stdio.h>

int main ()
{
int s=0, i, k, n;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);

i = k;
while (i <= n)
{
s = s + i;
i++;
}
printf("Suma iznosi: %d", s);
return 0;
}