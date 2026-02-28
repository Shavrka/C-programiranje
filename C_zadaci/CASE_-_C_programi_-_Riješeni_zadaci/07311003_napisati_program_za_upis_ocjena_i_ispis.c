/*
 * ZADATAK 8 - 07311003
 * Napisati program za upis ocjena i ispis uspjeha.
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311003.htm
 */

#include <stdio.h>

int main() {
int bb;
printf("Uspjeh (0 - 100): ");
scanf("%i",&bb);

switch (bb) {
case 0 ... 60:
printf("Nedovoljan\n");
break;
case 61 ... 70:
printf("Dovoljan\n");
break;
case 71 ... 80:
printf("Dobar\n");
break;
case 81 ... 90:
printf("Vrlodobar\n");
break;
case 91 ... 100:
printf("Odlican\n");
break;
default:
printf("Greska");
}
return 0;
}

II varijanta sa if-else
// 07311003
#include <stdio.h>
#include <stdlib.h>

int main() {
int bb;
printf("Uspjeh\n");
scanf("%i",&bb);

if ((bb>=0)&&(bb<=60)) {
printf("Nedovoljan\n");
}

else if ((bb>=61)&&(bb<=70)) {
printf("Dovoljan\n");
}

else if ((bb>=71)&&(bb<=80)) {
printf("Dobar\n");
}

else if ((bb>=81)&&(bb<=90)) {
printf("Vrlodobar\n");
}

else if ((bb>=91) && (bb<=100)) {
printf("Odlican\n");
}
else {
printf("Nevalidan unos\n");
}

return 0;
}
Uspjeh (0 - 100): 6
Nedovoljan

II izvođenje
Uspjeh (0 - 100): 63
Dovoljan