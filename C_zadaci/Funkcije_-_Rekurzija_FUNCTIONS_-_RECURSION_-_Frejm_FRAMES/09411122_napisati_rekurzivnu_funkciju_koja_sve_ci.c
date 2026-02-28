/*
 * ZADATAK 09411122 - 09411122
 * Napisati rekurzivnu funkciju koja sve cifre datog nenegativnog cijelog broja ispisuje s lijeva na desno.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411122.htm
 */

#include <stdio.h>

int izdvoji_cifru(int n, int p) {
int cifra;
if(n == 0) {            // cio dio dijeljenja broja sa 10 = 0 ?
return p;             // kraj dijeljenja - rekurzije
}
cifra = n % 10;         // ispis cifre
p = 10 * p  + cifra;    // formanje broja obrnut redoslijed

return izdvoji_cifru(n / 10, p);   // brojac uvecaj za 1, podijeli broj sa 10 i pozovi istu funkciju
}
int prikaz_ekran(int p) {
int cifra;
if(p == 0) {            // cio dio dijeljenja broja sa 10 = 0 ?
return ;              // kraj dijeljenja - rekurzije
}
cifra = p % 10;         // izdvoji cifru
printf("%d ", cifra);   // ispis vrijednosti cifre

return prikaz_ekran(p / 10);   // nova vrijednost broja i pozovi istu funkciju
}

int main ()
{
printf("Obrni redoslijed cifara datog broja - Rekurzija\n");
int n, p, r;

printf("Dati broj: ");      // ulazne vrijednosti
scanf("%d",&n);

p = izdvoji_cifru(n, 0);      // poziv funkcije suma

printf("Broj %d \nCifre broja ", n);     // ispis vrijednosti ulaznih i izlaznih varijabli
prikaz_ekran(p);      // poziv funkcije prikaz_ekran

return 0;
}

Ispis na ekranu:
Obrni redoslijed cifara datog broja - Rekurzija
Dati broj: 234567
Broj 234567
Cifre broja 2 3 4 5 6 7