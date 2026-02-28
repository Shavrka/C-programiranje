/*
 * ZADATAK 24010210 - 24010210
 * Napisati program koji traži da se sa tastature unesu dva realna broja a i b, i prirodan broj n, a koji zatim računa i ispisuje vrijednost dvojnog razlomkana n decimala.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010210.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double a,b;
printf("Unesite a i b:");
scanf("%lf", &a);
scanf("%lf", &b);

if((a==0 && b==1) || a*a==b*b)
printf("Nemoguce je dijeliti sa nulom!");
else
{
double c=(a+b)/(1+((a*a+b*b)/(a*a-b*b)));
printf("c=%lf", c);
}
return 0;
}