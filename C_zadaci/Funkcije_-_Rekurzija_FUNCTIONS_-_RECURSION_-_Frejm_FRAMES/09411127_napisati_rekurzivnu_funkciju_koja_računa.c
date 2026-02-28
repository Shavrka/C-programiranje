/*
 * ZADATAK 09411127 - 09411127
 * Napisati rekurzivnu funkciju koja računa najveću (maksimalnu) vrijednost cifru datog cijelog broja n.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411127.htm
 */

#include <stdio.h>

int najveca_cifra(int n1, int tek_maks) {  // izdvoja i okrece redoslijed cifara
if(n1 != 0) {                 // ima jos cifara?
if(n1%10 > tek_maks) {    // izdvojena cifra veca od tekuceg maksimuma?
tek_maks = n1%10;     // novi tekuci maksimum
}
return najveca_cifra(n1/10, tek_maks); // slijedeca cifra
}
return tek_maks;             // kraj poredjenja cifara i tekuceg maksimuma - rekurzije
}

int main () {
printf("Najveca cifra datog broja - Rekurzija\n");
int n, maksi;

printf("Broj: ");       // ulazna vrijednost
scanf("%d",&n);

maksi = najveca_cifra(n/10, n%10);     // poziv funkcije prvi maksimu je cifra sa desne strane

printf("Dati broj:     %d \n", n);    // ispis vrijednosti ulaznog broja
printf("Najveca cifra: %d", maksi);    // ispis najvece cifre - maksimum

return 0;
}