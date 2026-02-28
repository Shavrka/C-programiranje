/*
 * ZADATAK 24010240 - 24010240
 * Za poznatu glavnicu G i kamatna stopa p, program računa kamatu K po formuli K = G * p/100 i novu svotu S = G + K.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010240.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int g,p;
printf("Unesi glavnicu:");
scanf("%d", &g);
printf("Unesi kamatnu stopu:");
scanf("%d", &p);
int k,s;
k=g*p/100;
s=g+k;
printf("Glavnica: %d\n", g);
printf("Kamatna stopa: %d\n", p);
printf("Kamate: %d\n", k);
printf("Nova svota: %d", s);
return 0;
}