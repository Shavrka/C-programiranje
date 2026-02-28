/*
 * ZADATAK 06411140 - 06411140
 * Izračunati sumu kubova tri učitana broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411140.htm
 */

#include <stdio.h>

int main()

{
int iBroj1,iBroj2,iBroj3,iSuma;              // deklarisanje varijabli

printf("Ucitaj tri broja: ");                // varijable koje se ucitavaju
scanf("%d %d %d",&iBroj1,&iBroj2,&iBroj3);   // varijable koje se ucitavaju

iSuma=(iBroj1*iBroj1*iBroj1)+(iBroj2*iBroj2*iBroj2)+(iBroj3*iBroj3*iBroj3); // sumu kubova

printf("Suma kubova je: %d",iSuma);          // ispis vrijednosti

return 0;
}