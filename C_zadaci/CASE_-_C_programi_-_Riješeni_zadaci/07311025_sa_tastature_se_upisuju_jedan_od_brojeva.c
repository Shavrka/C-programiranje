/*
 * ZADATAK 4 - 07311025
 * Sa tastature se upisuju jedan od brojeva 1, 2, 3, 4. Za očitani broj ispisati tekstualno koji je broj.
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311025.htm
 */

#include <stdio.h>

int main() {
int broj;
printf("Naziv broja 1-4\n");
printf("Vas broj: ");
scanf("%d",&broj);
switch(broj) {
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
default:
printf("Nepostoji");
break;
}

return 0;
}