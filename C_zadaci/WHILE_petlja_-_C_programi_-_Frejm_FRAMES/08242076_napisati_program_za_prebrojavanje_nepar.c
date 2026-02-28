/*
 * ZADATAK 08242076 - 08242076
 * Napisati program  za prebrojavanje neparnih brojeva od k do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08242076.htm
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
if(i%2==1)
br++;
i++;
}
printf("Neparnih brojeva u datom intervalu ima: %d", br);
return 0;
}

II Varijanta
// 08242076;
// prebrojati neparne prirodne brojeve od k do n
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
if(k%2==1)
br++;
k++;
}
printf("Neparnih brojeva u datom intervalu ima: %d", br);
return 0;
}