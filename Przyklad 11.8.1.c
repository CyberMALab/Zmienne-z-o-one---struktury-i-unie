#include <stdio.h>
#include <stdlib.h>

typedef struct pkt
{
	float x;
	float y;	
} punkt;
punkt wczytaj_punkt();
void wyswietl_punkt(punkt point);

int main() {
	punkt point = wczytaj_punkt(); 
	wyswietl_punkt(point);	
	return 0;
}
punkt wczytaj_punkt()
{
	punkt tmp;
	printf("Podaj wspolrzedna x: ");
	scanf(" %f", &tmp.x);
	printf("Podaj wspolrzedna y: ");
	scanf(" %f", &tmp.y);
	return tmp;
	
}
void wyswietl_punkt(punkt pkt)
{
	printf("(%5.2f,%5.2f)",pkt.x,pkt.y); 

}
