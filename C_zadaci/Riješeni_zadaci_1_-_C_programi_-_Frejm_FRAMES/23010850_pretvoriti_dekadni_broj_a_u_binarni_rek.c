/*
 * ZADATAK 23010850 - 23010850
 * Pretvoriti dekadni  broj a u binarni rekurzivnom f-jom.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010850.htm
 */

#include <stdio.h>

int dekadni_binarni(int dekadni) {
int  ostatak;
if (dekadni <= 1) {      // kraj?
printf("%d", dekadni);
return dekadni;
}
ostatak = dekadni % 2  ;         // cifra binarnog broja
dekadni_binarni(dekadni / 2);    // podijeli dekadni broj i poziv funkcije
printf("%d", ostatak);           // ispis cifre binarnog broja
return;
}

int main () {
printf("Konverzija/pretvaranje dekadnog u binarni - Rekurzija\n");
int dekadan_broj;
printf("Dekadan broj: ");     // ulazne vrijednosti
scanf("%d",&dekadan_broj);

printf("Binaran broj: ");     // opis
dekadni_binarni(dekadan_broj);     // poziv funkcije za pretvaranje
return 0;
}

II verzija
// 23010850
#include <stdio.h>

int dekadni_binarni(int dekadni) {
if (dekadni <= 1)     // kraj?
return dekadni;   // posljednja cifra
return dekadni % 2 + 10 * dekadni_binarni(dekadni / 2);  // formiranje binarnog broja i poziv iste funkcije sa kolicnikom broja i 2
}

int main () {
printf("Konverzija/pretvaranje dekadnog u binarni - Rekurzija\n");
int dekadan_broj, banaran;

printf("Dekadan broj: ");      // ulazne vrijednosti
scanf("%d",&dekadan_broj);

banaran = dekadni_binarni(dekadan_broj);    // poziv funkcije za konveryiju

printf("Binarana broj %d", banaran);   // ispis vrijednosti ulaznih i izlaznih varijabli
return 0;
}

Ispis na ekranu:
Konverzija/pretvaranje dekadnog u binarni - Rekurzija
Dekadan broj: 123
Binarana broj 1111011

II izvršavanje
Konverzija/pretvaranje dekadnog u binarni - Rekurzija
Dekadan broj: 3456
Binaran broj: 110110000000