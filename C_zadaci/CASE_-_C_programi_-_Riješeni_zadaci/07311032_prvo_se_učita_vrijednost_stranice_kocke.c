/*
 * ZADATAK 26 - 07311032
 * Prvo se učita vrijednost stranice kocke. Zatim korisnik bira izračunavanje obima (1) ili površine (2) ili zapremine (3) kocke sa tastature.
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311032.htm
 */

#include <stdio.h>

int main() {
int a, p, v, o, izbor;
printf("Duzina stranice kocke: ");
scanf("%d",&a);
if (a>0) {
printf("Racunanje:\n1) povrsine\n2) obima\n3) zapremine\n date kocke?");
printf("\n\tVas izbor: ");
scanf("%d",&izbor);

switch(izbor)  // izbor operacije
{
case 1:
p = 6 * a*a; // povrsina
printf("Povrsina kocke je %d", p);
break;
case 2:
o = 12 * a; // obim
printf("Obim kocke je %d", o);
break;
case 3:
v = a * a * a; // zapremina
printf("Zapremina kocke je %d", o);
break;
default:
printf("Pogresan izbor operacije!");
break;
}
}
else
printf("duzina stranice kocke mora biti veea od nule!");

return 0;
}

Duzina stranice kocke: 2
Racunanje:
1) povrsine
2) obima
3) zapremine
date kocke?
Vas izbor: 1
Povrsina kocke je 54
II izvodjenje
Duzina stranice kocke: 4Racunanje:
1) povrsine
2) obima
3) zapremine
date kocke?
Vas izbor: 2
Obim kocke je 48
III izvodjenje
Duzina stranice kocke: 2
Racunanje:
1) povrsine
2) obima
3) zapremine
date kocke?
Vas izbor: 3
Zapremina kocke je 8