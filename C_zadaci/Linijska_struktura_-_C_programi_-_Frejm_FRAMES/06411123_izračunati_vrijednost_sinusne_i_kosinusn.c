/*
 * ZADATAK 06411123 - 06411123
 * Izračunati vrijednost sinusne i kosinusne funkcije za učitani ugao u radijanima.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411123.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float ugao, sinus_ugla, cosinus_ugla;      // deklarisanje varijabli
printf("Vrijednost ugla u radijanima: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&ugao);                         // ucitavanje vrijednosti

sinus_ugla = sin(ugao);                    // sinus ugla
cosinus_ugla = cos(ugao);                  // cosinus ugla
printf("Sinus datog ugla iznosi: %.3f\n", sinus_ugla);     // ispis vrijednosti
printf("Kosinus datog ugla iznosi: %.3f\n", cosinus_ugla); // ispis vrijednosti
return 0;
}

II varijanta
#include <stdio.h>
#include <math.h>
int main()
{
float ugao;                                // deklarisanje varijabli
printf("Vrijednost ugla u radijanima: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&ugao);                         // ucitavanje vrijednosti

printf("Sinus datog ugla iznosi: %.3f\n", sin(ugao));   // ispis vrijednosti
printf("Kosinus datog ugla iznosi: %.3f\n", cos(ugao)); // ispis vrijednosti
return 0;
}