#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
	float coordinates_x, coordinates_y;
	float height, width;
	int color;
};
int  it_ is_yellow_rectangle(struct rectangle rectangle_object)
{
	if(rectangle_object.color==3)
		return 1;
	else 
		return 0;
}

int main() 
{
	struct rectangle object_rectangle = {1, 1, 23, 43, 3};
	if(it_is_yellow_rectangle(object_rectangle)==1)
		printf("Rectangle is YELLOW");	
	return 0;
}


