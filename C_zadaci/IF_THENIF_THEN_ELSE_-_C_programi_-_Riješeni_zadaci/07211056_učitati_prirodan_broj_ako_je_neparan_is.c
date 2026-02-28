/*
 * ZADATAK 16 - 07211056
 * Učitati prirodan broj. Ako je neparan ispisati njegovu recipročnu vrijednost, a ako je paran ispisati kvadratni korijen njegovog sljedbenika:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211056.htm
 */

#include<stdio.h>
#include<math.h>

main()

{
float y;
int a;
printf("Unesi A: ");
scanf("%d",&a);

if(a % 2 != 0)
{
y=1/a;
printf("Rezultat je: %f.",y);
}
else
{
y=sqrt(a+1);
printf("Rezultat je: %f.",y);
}
return 0;
}