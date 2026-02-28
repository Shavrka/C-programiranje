/*
 * ZADATAK 08112014 - 08112014
 * Izračunati sumu prirodnih brojeva u intervalu od k do n čija je cifra jedinica 8.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112014.htm
 */

#include <stdio.h>

int main()
{
int i, k,n;
float suma;

printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);

suma = 0;

for(i = k; i <= n;  i++)
if(i % 10 == 8)
suma += i;    // suma = suma + i;

printf("Suma je: %f", suma);

return 0;
}

II Varijanta   for(;k<=n;k++)
int main()
{
int k,n;
float suma;

printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);

suma = 0;

for(;k<=n;k++)
if(k % 10 == 8)
suma+=k;
printf("Suma je: %f", suma);

return 0;
}