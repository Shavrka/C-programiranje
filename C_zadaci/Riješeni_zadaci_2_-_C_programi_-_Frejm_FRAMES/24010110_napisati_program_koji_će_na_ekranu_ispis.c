/*
 * ZADATAK 24010110 - 24010110
 * Napisati program koji će na ekranu ispisati vaše lične podatke ...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010110.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
char ime[30];
char datum[10];
char smjer[20];
char grad[20];
gets(ime);
gets(datum);
gets(smjer);
gets(grad);
printf("\n%s\n",ime);
printf("--------------------\n");
printf("%s\n", datum);
printf("%s\n\n", smjer);
printf("%s", grad);
return 0;
}