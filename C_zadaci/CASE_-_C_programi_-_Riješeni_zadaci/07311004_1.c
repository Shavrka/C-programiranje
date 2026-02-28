/*
 * ZADATAK Programski jezik CRazgranata strukura - CASE1Napisati program za ispis uspjeha, prema slijedećoj tabeli:C2Napisati program za ispis dana u sedmici, prema slijedećoj tabeli:C3Ako je prvi dan u mjesecu ponedjeljak. Za upisani dan u mjesecu (mjesec ima 30 dana) ispisati dan u sedmici.C4Sa tastature se upisuju jedan od brojeva 1, 2, 3, 4. Za očitani broj ispisati tekstualno koji je broj.C5Sa tastature se upisuju jedan od brojeva: 0, 1, 2, 3, 4, 5, 6, 7, 8 ili 9. Za očitanu cifru ispisati tekstualno koja je.C6Za upisani broj mjeseca ispisuje se na ekranu naziv mjeseca.C7Napisati program za ispis osobina zadanog kvadranta, prema slijedećoj tabeli:C8Napisati program za upis ocjena i ispis uspjeha.C9Napisati program za ispis uspjeha a za ostale vrijednosti ispisati greska. Vidi slijedeću tabelu:C10Napisati program za ispis broja dana u mjesecu, prema slijedećoj tabeli:C11Napisati program za ispis broja dana u mjesecu, prema slijedećoj tabeli (Rješenje sa provjerom prestupnosti godina djeljivih sa 100):C12Napisati program za ispis uspjeha, prema slijedećoj tabeli:C13Napisati program koji za upisani samoglasnik (veliko slovo) ispisuje redni broj samoglasnika u abecedi, prema slijedećoj tabeli:C14Napisati program koji za upisani samoglasnik ispisuje redni broj samoglasnika u abecedi, prema slijedećoj tabeli:C15Napisati program koji odredjuje da li je zadani znak veliko ili malo slovo ili cifra, prema slijedećoj tabeli:C16Napisati program koji odredjuje da li je zadani znak slovo, cifra ili specijalna znak, prema slijedećoj tabeli:C17Napisati program za izračunavanje y na osnovu vrijednosti k:C18Napisati program za izračunavanje y na osnovu vrijednosti k:C19Napisati program za izračunavanje y na osnovu vrijednosti x:C20Napisati program za izračunavanje y na osnovu vrijednosti k:C21Napisati program za izračunavanje y na osnovu vrijednosti k:C22Napisati program koji za upisani samoglasnik uveća brojač odgovarajućeg samoglasnika.C24Prvo se učita vrijednost stranice kvadrata. Zatim korisnik bira izračunavanje obima (1) ili površine (2) kvadrata sa tastature.C26Prvo se učita vrijednost stranice kocke. Zatim korisnik bira izračunavanje obima (1) ili površine (2) ili zapremine (3) kocke sa tastature.C31Koristeći naredbu CASE/SWITCH izračunati recipročnu vrijednost učitanog broja.C33Učitati dva broja i jedno slovo koje predstavlja izbor aritmetičke operacije.s - sabiranjeo - oduzimanjem - množenjed - dijeljenje.C34Napisati program za simulaciju rada sabiranja i oduzimanja.C35Napisati program za simulaciju rada kalkulatora, prema slijedećoj tabeli:C43Napisati program za ispis manjeg od dva učitana broja (koristiti naredbu CASE/SWITCH).C44Napisati program za ispis većeg od dva učitana broja (koristiti naredbu CASE/SWITCH).C - 07311004
 * 1
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311004.htm
 */

#include <stdio.h>

int main() {
int bb;
printf("Uspjeh\n");
scanf("%i",&bb);

switch(bb) {
case 1:
printf("Nedovoljan\n");
break;

case 2:
printf("Dovoljan\n");
break;

case 3:
printf("Dobar\n");
break;

case 4:
printf("Vrlodobar\n");
break;

case 5:
printf("Odlican\n");
break;

default:
printf("Nevalidan unos\n");
break;
}

return 0;
}