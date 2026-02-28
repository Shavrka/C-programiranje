/*
 * ZADATAK 23010220 - 23010220
 * Ispisati najmanji 6-cifreni broj koji je djeljiv sa 3 a nije djeljiv sa 5.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010220.htm
 */

#include <stdio.h>

int main()
{

for (int i=100000; i< 1000000; i++)     // ponavljanje za i= 100 000 do i = 999 999 - pocetak petlje
if (i%3==0 && i%5!=0) {         // da li kontrolna varijabla yadovoljava uslov
printf("Najmanji 6-cifreni broj koje je djeljiv sa 3 a nije sa 5 je: = %d\n", i);;
break;    // izlazak iz petlje
}

return 0;
}