/*
 * ZADATAK 535 - 14511035
 * Ispisati sve trocifrene brojeva koji imaju osobine da su djeljivi brojem koji se dodbija izbacivanjem srednje cifre.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14511035.htm
 */

#include <stdio.h>

int main()
{
int broj, j, s, dvocifreniBroj;

printf("Trocifren broj djeljiv dvocifrenim brojevem sj\n");  // naslov

for (broj=100; broj<=999; broj++) {      // za trocifrene brojeve radi
j = broj % 10;                       // jedinice
s = broj / 100;                      // stotice
dvocifreniBroj = 10*s + j;           // kreiran dvocifren broj
if (dvocifreniBroj != 0 )            // novi dvocifren broj
if (broj % dvocifreniBroj == 0)  // broj djeljiv sa sd?
//              printf("Trocifren broj djeljiv dvocifrenim brojevem sj: %d \n", broj);
printf("%d, ", broj);        // ispis
}
return 0;
}

Ispis na ekranu:
Trocifren broj djeljiv dvocifrenim brojevem sj
100, 105, 108, 110, 120, 121, 130, 132, 135, 140, 143, 150, 154, 160, 165, 170, 176, 180, 187, 190, 192, 195, 198, 200, 220, 225, 231, 240, 242, 253, 260, 264, 275, 280, 286, 297, 300, 315, 330, 341, 352, 360, 363, 374, 385, 390, 396, 400, 405, 440, 451, 462, 473, 480, 484, 495, 500, 550, 561, 572, 583, 594, 600, 660, 671, 682, 693, 700, 770, 781, 792, 800, 880, 891, 900, 990,