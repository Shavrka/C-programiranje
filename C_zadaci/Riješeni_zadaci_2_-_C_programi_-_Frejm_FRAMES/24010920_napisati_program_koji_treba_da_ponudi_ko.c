/*
 * ZADATAK 24010920 - 24010920
 * Napisati program koji treba da ponudi korisniku sljedeće tri opcije: a) Rješavanje linearne jednačine b) Rješavanje kvadratne jednačine c) Kraj programa
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010920.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
mat a;
for(int i=0; i < 3; i++)
{
for(int j=0; j < 2; j++)
scanf("%lf ",&a[i][j]);
}
if(det(a))
printf("jes!");
else
printf("no!");
return 0;
}