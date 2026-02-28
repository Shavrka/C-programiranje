/*
 * ZADATAK 98 - 08112177
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji imaju cifru jedinica 7.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112177.htm
 */

#include <stdio.h>

main()
{
int i, k, n;
float suma;

printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);

suma = 0;

for(i = k; i <= n;  i++)
if(i % 10 == 7)
suma+=i;    // suma = suma + i;
printf("Suma je: %f", suma);

getchar();
}

II Varijanta
// 08112177
#include <stdio.h>

main()
{
int k,n;
float suma;

printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);

suma = 0;

for(;k<=n;k++)
if(k % 10 == 7)
suma+=k;
printf("Suma je: %f", suma);

getchar();
}