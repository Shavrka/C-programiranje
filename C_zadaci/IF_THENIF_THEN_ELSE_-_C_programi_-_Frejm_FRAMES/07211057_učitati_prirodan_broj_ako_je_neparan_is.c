/*
 * ZADATAK 07211057 - 07211057
 * Učitati prirodan broj. Ako je neparan ispisati njegovu recipročnu vrijednost, a ako je paran ispisati kvadrat njegovog prethodnika.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211057.htm
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
y=pow(a-1,2);
printf("Rezultat je: %f.",y);
}
return 0;
}