/*
 * ZADATAK 06411109 - 06411109
 * Izdvojiti cifre dvocifrenog broja.  Ispisati prvi cifru desetica pa cifru jedinica.
 * Kategorija: Linijska struktura - Izdvajanje cifara - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/064c/06411109.htm
 */

#include <stdio.h>
int main()
{
int x, y, broj;             // deklarisanje varijabli
printf("Ucitaj dvocifren broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&broj);         // ucitavanje vrijednosti varijable sa tastature

x = broj / 10;             // cifra desetica
y = broj % 10;             // cifra jedinica
printf("Broj= %d  Cifra desetica= %d  Cifra jedinica= %d", broj, x, y);  // ispis
return 0;
}

II varijanta
// 06411109
#include <stdio.h>
int main()
{
int broj;                  // deklarisanje varijable
printf("Ucitaj dvocifren broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&broj);        // ucitavanje vrijednosti varijable sa tastature

printf("Broj= %d  Cifra desetica= %d  Cifra jedinica= %d", broj, broj / 10, broj % 10);  // ispis
return 0;
}