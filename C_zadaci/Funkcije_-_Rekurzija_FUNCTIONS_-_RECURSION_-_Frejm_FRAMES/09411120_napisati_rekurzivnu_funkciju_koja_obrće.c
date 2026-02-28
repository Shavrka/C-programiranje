/*
 * ZADATAK 09411120 - 09411120
 * Napisati rekurzivnu funkciju koja obrće cifre datog cijelog broja n. Test primjer:12345677654321
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411120.htm
 */

#include <stdio.h>

int izdvoji_okreni(int n, int p) {  // izdvoja i okrece redoslijed cifara
int cifra;
if(n == 0) {            // cio dio dijeljenja broja sa 10 = 0 ?
return p;             // kraj dijeljenja - rekurzije
}
cifra = n % 10;         // izdvoji cifru
p = 10 * p  + cifra;    // formanje novog broja sa obrnutim redoslijed

return izdvoji_okreni(n / 10, p);   // poziv iste funkcije sa umanjenim n za jednu cifru sdesna
}

int main()
{
printf("Obrni redoslijed cifara datog broja - Rekurzija\n");
int n, p;

printf("Broj: ");       // ulazne vrijednosti
scanf("%d",&n);

p = izdvoji_okreni(n, 0);    // poziv funkcije izdvoji_okreni

printf("Dati broj:         %d \n", n);        // ispis vrijednosti ulaznih i izlaznih varijabli
printf("Obrnut redoslijed: %d", p);   // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

Ispis na ekranu:
Obrni redoslijed cifara datog broja - Rekurzija
Broj: 1234567
Dati broj:         1234567
Obrnut redoslijed: 7654321