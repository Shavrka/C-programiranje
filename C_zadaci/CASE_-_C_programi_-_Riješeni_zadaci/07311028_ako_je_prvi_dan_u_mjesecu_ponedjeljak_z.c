/*
 * ZADATAK 3 - 07311028
 * Ako je prvi dan u mjesecu ponedjeljak. Za upisani dan u mjesecu (mjesec ima 30 dana) ispisati dan u sedmici.
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311028.htm
 */

#include <stdio.h>

int main() {

int dan;
printf("Dan u sedmici\n");
printf("Redni broj dana u sedmici (1 - 31) ");
scanf("%i", &dan);

switch(dan) {
case 1:
case 8:
case 15:
case 22:
case 29:
printf("Ponedjeljak\n");
break;
case 2:
case 9:
case 16:
case 23:
case 30:
printf("Utorak\n");
break;
case 3:
case 10:
case 17:
case 24:
case 31:
printf("Srijeda\n");
break;
case 4:
case 11:
case 18:
case 25:
printf("Cetvrtak\n");
break;
case 5:
case 12:
case 19:
case 26:
printf("Petak\n");
break;
case 6:
case 13:
case 20:
case 27:
printf("Subota\n");
break;
case 7:
case 14:
case 21:
case 28:
printf("Nedjelja\n");
break;
default:
printf("Nepostoji");
break;
}
return 0;
}

II varijanta
// 07311028
#include <stdio.h>

int main() {
int dan;
printf("Dan u sedmici\n");
printf("Redni broj dana u sedmici (1 - 31) ");
scanf("%i", &dan);
switch(dan % 7) {
case 1:
printf("Ponedjeljak\n");
break;
case 2:
printf("Utorak\n");
break;
case 3:
printf("Srijeda\n");
break;
case 4:
printf("Cetvrtak\n");
break;
case 5:
printf("Petak\n");
break;
case 6:
printf("Subota\n");
break;
case 0:
printf("Nedjelja\n");
break;
default:
printf("Nepostoji");
break;
}

return 0;
}