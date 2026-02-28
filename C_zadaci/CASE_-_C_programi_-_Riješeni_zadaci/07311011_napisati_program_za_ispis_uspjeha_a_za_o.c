/*
 * ZADATAK 9 - 07311011
 * Napisati program za ispis uspjeha a za ostale vrijednosti ispisati greska. Vidi slijedeću tabelu:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311011.htm
 */

#include <stdio.h>

int main() {
int bodovi;

printf("Bodovi (0 - 100): ");
scanf("%d",&bodovi);

switch (bodovi) {
case 0 ... 50:
printf("Nije prosao\n");
break;
case 51 ... 59:
printf("Prosao\n");
break;
case 60 ... 79:
printf("Prosjek\n");
break;
case 80 ... 100:
printf("Super\n");
break;
default:
printf("Greska");
}
return 0;
}

II varijanta sa if-else
//07311011
#include <stdio.h>

int main() {
int bodovi;

printf("Bodovi: ");
scanf("%d",&bodovi);

if((bodovi > 0) && (bodovi <= 50)){
printf("Nije prosao");
}
else if((bodovi > 50) && (bodovi <= 59)) {
printf("Prosao");
}
else if((bodovi > 59) && (bodovi <= 79)) {
printf("Prosjek");
}
else if((bodovi > 79) && (bodovi <= 100)) {
printf("Super");
}
else {
printf("Greska");
}
return 0;
}