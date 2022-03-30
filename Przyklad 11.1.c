#include <stdio.h>
#include <stdlib.h>

struct punkt
{
	float x;
	float y;	
};
struct punkt wczytaj_punkt();
void wyswietl_punkt(struct punkt point);

int main() {
	struct punkt point; /* Deklaracja zmiennej złożonej point */
/* Przypisanie struktury tego samego typu do innej struktrury spowoduje skopiowanie wszystkich jej zmiennych składowych */
	point = wczytaj_punkt();
	wyswietl_punkt(point);	
	return 0;
}
struct punkt wczytaj_punkt()
{
	struct punkt tmp;
/* odwołanie się do poszczególnych zmiennych składowych przy użyciu '.' */
	printf("Podaj wspolrzedna x: ");
	scanf(" %f", &tmp.x);
	printf("Podaj wspolrzedna y: ");
	scanf(" %f", &tmp.y);
	return tmp;
	
}
void wyswietl_punkt(struct punkt pkt)
{
/* odwołanie się do poszczególnych zmiennych składowych przy użyciu '.' */
	printf("(%5.2f,%5.2f)",pkt.x,pkt.y); /* identyfikator.identyfikator*/

}
