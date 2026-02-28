/*
 * ZADATAK 15111011 - 15111011
 * Učitati niz znakova /STRING/ i ispisati ga.
 * Kategorija: String - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/150c/15111011.htm
 */

#include <stdio.h>

int main()
{
char stringVarijabla[100];

printf("Unesite string: ");
scanf("%s",stringVarijabla);      // ulaz - učitavanje stringa

printf("String =  %s", stringVarijabla);  // izlaz - ispis stringa

return 0;
}