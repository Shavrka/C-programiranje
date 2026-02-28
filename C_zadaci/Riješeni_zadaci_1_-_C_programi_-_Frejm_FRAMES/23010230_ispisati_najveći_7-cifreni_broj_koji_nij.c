/*
 * ZADATAK 23010230 - 23010230
 * Ispisati najveći 7-cifreni broj koji nije djeljiv sa 3 a djeljiv sa 7.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010230.htm
 */

#include <stdio.h>

int main()
{
for (int i = 9999999; i >= 1000000; i--)     // ponavljanje za i=1000000 do i=99 999 999 - pocetak petlje
if (i%3 != 0 && i%7 == 0) {         // da li kontrolna varijabla yadovoljava uslov
printf("Najveci 7-cifreni broj koji nije djeljiv sa 3 a djeljiv sa 7 je: = %d\n", i);;
break;    // izlazak iz petlje
}

return 0;
}