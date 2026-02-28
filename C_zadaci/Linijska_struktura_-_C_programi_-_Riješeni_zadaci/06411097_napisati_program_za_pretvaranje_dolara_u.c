/*
 * ZADATAK 74 - 06411097
 * Napisati program za pretvaranje dolara u evre.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411097.htm
 */

#include <stdio.h>
int main()
{
float d,e;                    // deklarisanje varijabli
printf("Iznos u dolarima: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &d)            ;  // ucitavanje vrijednosti varijable sa tastature
e = d * 1.3272;               // pretvaranje u evre
printf("Iznos u evrima: %.2f\n", e); // ispis vrijednosti
return 0;
}

II varijanta
// 06411097
#include <stdio.h>
int main()
{
float d,e;                    // deklarisanje varijabli
printf("Iznos u dolarima: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &d)            ;  // ucitavanje vrijednosti varijable sa tastature
printf("Iznos u evrima: %.2f\n", d * 1.3272); // ispis vrijednosti
return 0;
}