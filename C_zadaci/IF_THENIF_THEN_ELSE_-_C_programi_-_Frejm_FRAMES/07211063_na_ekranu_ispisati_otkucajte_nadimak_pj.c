/*
 * ZADATAK 07211063 - 07211063
 * Na ekranu ispisati "Otkucajte nadimak pjesnika Jovana Jovanovica". Ako se otkuca Zmaj ili ZMAJ ispisati "ODLICNO", inače na druge odgrovore ispisati  "ISPRAVAN ODGOVOR JE ZMAJ".
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211063.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()

{
int zmaj;
char nadimak[5];
char Zmaj[5] = "Zmaj";
char ZMAJ[5] = "ZMAJ";

printf("Unesite nadimak Jovana Jovanovica: ");
scanf(nadimak,5);

if(strcmp(Zmaj, nadimak)== 0 || strcmp(ZMAJ, nadimak)==0)
printf("Odlicno");
else
printf("Ispravan odgovor je Zmaj");
return 0;
}