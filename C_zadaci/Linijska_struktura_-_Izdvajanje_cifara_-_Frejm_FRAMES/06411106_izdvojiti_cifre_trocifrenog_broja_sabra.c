/*
 * ZADATAK 06411106 - 06411106
 * Izdvojiti cifre trocifrenog broja. Sabrati izdvojene cifre.
 * Kategorija: Linijska struktura - Izdvajanje cifara - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/064c/06411106.htm
 */

#include <stdio.h>
int main()
{
int x, y, z, broj, s;      // deklarisanje varijabli
printf("Trocifren broj:"); // ime varijable cija vrijednost se ucitava
scanf("%d", &broj);        // ucitavanje vrijednosti varijable sa tastature

x = broj / 100;            // cifra stotica
y = broj / 10 % 10;        // cifra desetica
z = broj % 10;             // cifra jedinica
s = x + y + z;             // suma cifra
printf("Trocifren broj = %d\n", broj);  // ispis
printf("Cifra stotica= %d  Cifra desetica= %d  Cifra jedinica= %d  Suma cifara= %d", x, y, z, s);  // ispis
return 0;
}

II varijanta
// 06411106
#include <stdio.h>
int main()
{
int  broj, x, y, z, t, s;  // deklarisanje varijabli
printf("Trocifren broj:"); // ime varijable cija vrijednost se ucitava
scanf("%d", &broj);        // ucitavanje vrijednosti varijable sa tastature

x = broj / 100;            // cifra stotica
t = broj / 10;             // prve dvije cifre
y = t % 10;                // cifra desetica
z = broj % 10;             // cifra jedinica
s = x + y + z;             // suma cifra
printf("Trocifren broj = %d\n", broj);  // ispis
printf("Cifra stotica= %d  Cifra desetica= %d  Cifra jedinica= %d  Suma cifara= %d", x, y, z, s);  // ispis
return 0;
}

III varijanta
// 06411106
#include <stdio.h>
int main()
{
int broj;                  // deklarisanje varijabli
printf("Trocifren broj:"); // ime varijable cija vrijednost se ucitava
scanf("%d", &broj);        // ucitavanje vrijednosti varijable sa tastature

printf("Trocifren broj = %d\n", broj);  // ispis
printf("Cifra stotica = %d  Cifra desetica = %d  Cifra jedinica = %d\n", broj / 100, broj / 10 % 10, broj % 10);  // ispis
printf("Suma cifara = %d", broj / 100 + broj / 10 % 10 + broj % 10);  // ispis
return 0;
}