/*
 * ZADATAK 09411128 - 09411128
 * Napisati rekurzivne funkcije koja ispisiju dekadne cifre datog cijelog broja, a zatim ispisiju dekadne cifre datog celog broja u obrnutom redoslijedu. Test primjer:12345671 2 3 4  5 6 77 6 5 4 3 2 1.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411128.htm
 */

#include <stdio.h>

void izdvoji_cifru(int n1)  {
if (n1 < 10)                // posljednja cifra sdesna?
printf("%d ", n1);      // na kraju rekurzije pocinje ispis izdvojenih cifara
else
{
izdvoji_cifru(n1/10);   // smanji broj; novo izdvajanje cifara;
printf("%d ", n1%10);   // ispis cifre dobijene u ovom prolazu kroz funkciju
}
}

void izdvoji_cifru2(int n2) {
if (n2 < 10)                //  posljednja cifra sdesna?
printf("%d ", n2);      //  na kraju rekurzije posljednji ispis
else
{
printf("%d ", n2%10);   // ispis cifre dobijene u ovom prolazu kroz funkciju
izdvoji_cifru2(n2/10);  // smanji broj; novo izdvajanje cifara;
}
}

int main()
{
int n;
printf("Broj: ");
scanf("%d", &n);
printf("Cifre su: ");
izdvoji_cifru(n);
printf("\n");
printf("Obrnut redoslijed: ");
izdvoji_cifru2(n);
return 0;
}

Ispis na ekranu:
Broj: 1234567
Cifre su: 1 2 3 4 5 6 7
Obrnut redoslijed: 7 6 5 4 3 2 1