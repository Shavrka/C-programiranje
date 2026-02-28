/*
 * ZADATAK 08212177 - 08212177
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji imaju cifru 7.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212177.htm
 */

#include <stdio.h>

main()

{
int i, k, n;
float suma;

printf("Unesi K i N: \n");
scanf("%d%d",&k,&n);

i = k;
while (i<=n) {
if(i % 10 == 7)
s = s + i;     // suma += i;
i++;
}

printf("Suma je: %f",suma);

return 0;
getchar();
}

II Varijanta
#include <stdio.h>

main()
{
int suma,k,n;

printf("Unesite K i N: \n");
scanf("%d%d",&k,&n);

while(k<=n)
{
if(k % 10 == 7)
suma+=k;
k++;
}
printf("Suma je: %d",suma);

return 0;
getchar();
}