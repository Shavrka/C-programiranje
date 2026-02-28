/*
 * ZADATAK 6 - 07211003
 * Učitati realan broj, ako je broj pozitivan ispisati njegov korijen, a ako je negativan, njegov kvadrat:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211003.htm
 */

#include <stdio.h>
#include <math.h>

int main()
{
float a,y;

printf("Unesite varijablu A: ");
scanf("%f",&a);

if(a > 0)
y=sqrt(a);
else
y=pow(a,2);
printf("%f",y);

return 0;
}