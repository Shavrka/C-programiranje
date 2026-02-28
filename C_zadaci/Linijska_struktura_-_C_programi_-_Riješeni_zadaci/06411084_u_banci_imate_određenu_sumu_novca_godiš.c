/*
 * ZADATAK 86 - 06411084
 * U banci imate određenu sumu novca. Godišnja kamata je 17%. Pod predpostavkom da ništa ne podižete u banci, koliko ćete novaca imati nakon tri godine.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411084.htm
 */

#include <stdio.h>
#include <conio.h>
int main()
{
float g;
printf("Vasa glavnica iznosi:");
scanf("%f",&g);
g=g+0.17*g;
g=g+0.17*g;
g=g+0.17*g;
printf("Kolicina novca je:%.1f\n",g);
return 0;
}