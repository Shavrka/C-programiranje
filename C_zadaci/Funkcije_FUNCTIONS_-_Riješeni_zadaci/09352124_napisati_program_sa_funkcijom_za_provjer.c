/*
 * ZADATAK 64 - 09352124
 * Napisati program sa funkcijom za provjeru da li je prvo učitani broj djeljiv sa drugim.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09352124.htm
 */

#include <stdio.h>
#include <stdbool.h>   // bool tip nije u standardnoj biblioteci u C-u i mora se dodati biblioteka stdbool.h

bool djeljiv(int a, int b) {
int ostatak = a % b; // izracunaj ostatak dijeljenja a i b

if(ostatak == 0) {
return true;     // ostatak je 0 prvi broje je djeljiv sa drugim
} else {
return false;    // inace nije djeljiv
}
}

int main ()
{
printf("Provjera djeljivosti dva broja\n"); // naslov
int broj1, broj2;           // deklarisanje varijabli

printf("Prvi broj: ");    // ulazne vrijednosti
scanf("%d",&broj1);           // prvi broj
printf("Drugi broj: ");
scanf("%d",&broj2);           // drugi broj

if(djeljiv(broj1, broj2))
printf("%d je djeljivo sa %d", broj1, broj2); // ispis vrijednosti ulaznih i izlaznih varijabli
else
printf("%d nije djeljivo sa %d", broj1, broj2); // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

Ispis na ekranu:
Provjera djeljivosti dva broja
Prvi broj: 5
Drugi broj: 2
nije djeljivo sa 2