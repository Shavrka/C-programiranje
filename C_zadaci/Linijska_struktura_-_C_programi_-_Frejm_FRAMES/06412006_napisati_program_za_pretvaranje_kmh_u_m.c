/*
 * ZADATAK 06412006 - 06412006
 * Napisati program za pretvaranje km/h u m/s.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06412006.htm
 */

#include <stdio.h>
#include <conio.h>
int main()
{
float v,v1;
printf("unesi brzinu u km/h:");
scanf("%f",&v);
v1=v*1000/3600;
printf("%.1f km/h je %.1f m/s ",v,v1);
return 0;
}