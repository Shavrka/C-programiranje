/*
 * ZADATAK 06411137 - 06411137
 * Izračunati sumu kvadrata dva učitana broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411137.htm
 */

#include <stdio.h>
int main()
{
int iBroj1,iBroj2,iSuma;                // deklarisanje varijabli

printf("Ucitaj dva broja: ");           // ime varijable cije vrijednosti se ucitavaju
scanf("%d %d",&iBroj1,&iBroj2);         // ucitavanje vrijednosti varijabli sa tastature

iSuma=(iBroj1*iBroj1)+(iBroj2*iBroj2);  //suma kvadrata dva broja

printf("Suma kvadrata je: %d",iSuma);   // ispis vrijednosti

return 0;
}

II varijanta
#include <stdio.h>
int main()
{
int iBroj1, iBroj2;                     // deklarisanje varijabli

printf("Ucitaj dva broja: ");           // ime varijable cije vrijednosti se ucitavaju
scanf("%d %d",&iBroj1,&iBroj2);         // ucitavanje vrijednosti varijabli sa tastature

printf("Suma kvadrata je: %d", (iBroj1*iBroj1)+(iBroj2*iBroj2));   // ispis vrijednosti

return 0;
}