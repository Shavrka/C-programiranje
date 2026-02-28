/*
 * ZADATAK 88 - 06411126
 * Napisati program za izračunavanje pređenog puta (s) pri jednolikom ubrzanom kretanju ( s=v0t + at2/2 ).
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411126.htm
 */

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
float v0,t,a,s;
printf("unjeti pocetnu brzinu:");
scanf("%f",&v0);
printf("unjeti vrijeme kretanja");
scanf("%f",&t);
printf("unjeti ubrzanje");
scanf("%f",&a);
s=v0*t+(a*sqrt(t))/2;
printf("predeni put je:%.1f\n",s);
return 0;
}