/*
 * ZADATAK 24010130 - 24010130
 * Napisati program koji izračunava proteklo vrijeme između dva vremenska trenutka (u satima, minutama i sekundama)...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010130.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int a, b, c, d, e, f, sat, min, sek;

printf("Razlika dva ucitana vremena\n");
printf("Prvo vrijeme (h, min, sec):  ");
scanf("%d %d %d", &a, &b, &c);
printf("Drugo vrijeme (h, min, sec): ");
scanf("%d %d %d", &d, &e, &f);

int razlika = (d - a) * 3600 + (e - b) * 60 + f - c;

sat = razlika / 3600;   //  sati
min = (razlika - sat * 3600) / 60;    // min
//   min = (razlika - sat * 3600) / 60;    // min
sek = razlika % 60;   // sekunde

printf("\nRazlika izmedju ova dva vremena: %dh %dmin %dsec", sat, min, sek);

return 0;
}