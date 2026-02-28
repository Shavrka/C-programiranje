/*
 * ZADATAK 5 - 07311027
 * Sa tastature se upisuju jedan od brojeva: 0, 1, 2, 3, 4, 5, 6, 7, 8 ili 9. Za očitanu cifru ispisati tekstualno koja je.
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311027.htm
 */

#include <stdio.h>

int main() {
int broj;
printf("Naziv broja 0-9\n");
printf("Vas broj: ");
scanf("%d",&broj);
switch(broj) {
case 0:
printf("%d nula\n", broj);
break;
case 1:
printf("%d jedan\n", broj);
break;
case 2:
printf("%d dva\n", broj);
break;
case 3:
printf("%d tri\n", broj);
break;
case 4:
printf("%d cetiri\n", broj);
break;
case 5:
printf("%d pet\n", broj);
break;
case 6:
printf("%d sest\n", broj);
break;
case 7:
printf("%d sedam\n", broj);
break;
case 8:
printf("%d osam\n", broj);
break;
case 9:
printf("%d devet\n", broj);
break;
default:
printf("Nepostoji");
break;
}

return 0;
}

Naziv broja 0-9
Vas broj: 0
nula
Naziv broja 0-9
Vas broj: 5
pet
Naziv broja 0-9
Vas broj: 9
devet