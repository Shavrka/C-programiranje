/*
 * ZADATAK 87 - 06411122
 * Napisati program za izračunavanje godišnje kamate.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411122.htm
 */

#include <stdio.h>
int main()
{
float i,n,g,p;
printf("glavnica:");
scanf("%f",&g);
printf("broj godina");
scanf("%f",&n);
printf("iznos koji treba platit");
scanf("%f",&i);
p=(100*(i-g))/(n*g);
printf("godisnja kamata je:%.1f\n",p);
return 0;
}