/*
 * ZADATAK 16 - 06411139
 * Izračunati sumu kubova dva učitana broja.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411139.htm
 */

#include <stdio.h>
int main()
{
int iBroj1, iBroj2, iSuma;          // deklarisanje varijabli
printf("Ucitaj dva broja: ");       // imena varijabli cije vrijednosti se ucitavaju
scanf("%d %d",&iBroj1,&iBroj2);     // ucitavanje vrijednosti varijabli sa tastature

iSuma=(iBroj1*iBroj1*iBroj1)+(iBroj2*iBroj2*iBroj2); // sumu kubova dva broja
printf("Suma kubova je: %d",iSuma); // ispis vrijednosti
return 0;
}

II varijanta
// 06411139
#include <stdio.h>
#include <math.h>
int main()
{
int iBroj1, iBroj2, iSuma;          // deklarisanje varijabli
printf("Ucitaj dva broja: ");       // imena varijabli cije vrijednosti se ucitavaju
scanf("%d %d",&iBroj1,&iBroj2);     // ucitavanje vrijednosti varijabli sa tastature

iSuma = pow(iBroj1, 3) + pow(iBroj2, 3) ;// sumu kubova dva broja
printf("Suma kubova je: %d",iSuma); // ispis vrijednosti
return 0;
}

III varijanta
// 06411139
#include <stdio.h>
int main()
{
int iBroj1, iBroj2;                 // deklarisanje varijabli
printf("Ucitaj dva broja: ");       // imena varijabli cije vrijednosti se ucitavaju
scanf("%d %d",&iBroj1,&iBroj2);     // ucitavanje vrijednosti varijabli sa tastature

printf("Suma kubova je: %d", (iBroj1*iBroj1*iBroj1)+(iBroj2*iBroj2*iBroj2)); // ispis vrijednosti
return 0;
}