/*
 * ZADATAK 24 - 07311030
 * Prvo se učita vrijednost stranice kvadrata. Zatim korisnik bira izračunavanje obima (1) ili površine (2) kvadrata sa tastature.
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311030.htm
 */

#include <stdio.h>

int main() {
int a, p, o, izbor;
printf("Duzina stranice kvadrata: ");
scanf("%d",&a);
if (a>0) {
printf("Racunanje:\n1) povrsine\n2) obima\n datog kvadrata?");
printf("\n\tVas izbor: ");
scanf("%d",&izbor);

switch(izbor)  // izbor operacije
{
case 1:
p = a*a; // povrsina
printf("Povrsina kvadrata je %d", p);
break;
case 2:
o = 4*a; // obim
printf("Obim kvadrata je %d", o);
break;
default:
printf("Pogresan izbor operacije!");
break;
}
}
else
printf("duzina stranice kvadrata mora biti veca od nule!");

return 0;
}