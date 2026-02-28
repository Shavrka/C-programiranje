/*
 * ZADATAK 24010120 - 24010120
 * Napisati program koji izračunava koliko je keramičkih pločica potrebno za popločavanje bazena ...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010120.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double a,b,c;
printf("Dimenzije bazena u metrima:");
scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);
double x,y;
printf("Dimenzije plocice u centrimetrima:");
scanf("%lf", &x);
scanf("%lf", &y);
double pbazena=a*b+2*a*c+2*b*c;
double pplocice=(x/100)*(y/100);
int n;
n= int(pbazena/pplocice);
printf("Broj plocica potreban za poplocavanje je:%d", n);

return 0;
}