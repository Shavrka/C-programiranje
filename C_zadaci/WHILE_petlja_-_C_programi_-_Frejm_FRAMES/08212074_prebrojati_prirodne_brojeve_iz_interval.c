/*
 * ZADATAK 08212074 - 08212074
 * Prebrojati prirodne  brojeve iz intervala od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212074.htm
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
if(i%3==0)
br++;
i++;
}
printf("Djeljivih sa 3 ima: %d", br);
return 0;
}

II Varijanta
// 08212074
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
if(k%3==0)
br++;
k++;
}
printf("Djeljivih sa 3 ima: %d", br);
return 0;
}