/*
 * ZADATAK 502 - 14511002
 * Izdvojiti cifre iz trocifrenog broja.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14511002.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifreni brojevi sa istim ciframa\n");  // naslov
int tro, j, d, s;       // deklarisanje varijabli
printf("Trocifreni broj: ");
scanf("%d", &tro);      // trocifreni broj

j = tro % 10;           // cifra jedinica
d = (tro / 10);
d = d % 10;             // cifra desetice
s = tro / 100;          // cifra stotice
printf("trocifren broj = %d  stotica = %d  desetica = %d  jedinica = %d, ", tro, s, d, j);   // ispis

return 0;
}