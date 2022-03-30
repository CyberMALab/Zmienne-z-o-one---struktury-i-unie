#include <stdio.h>
#include <stdlib.h>

enum COLORS{COL_WHITE,COL_RED,COL_BLUE, COL_YELLOW, COL_BLACK };
enum BOOL{FALSE, TRUE};
struct rectangle
{
	float coordinates_x, coordinates_y;
	float height, width;
	enum COLORS color;
};
enum BOOL  it_ is_yellow_rectangle(struct rectangle rectangle_object)
{
	if(rectangle_object.color==COL_YELLOW)
		return TRUE;
	else 
		return FALSE;
}

int main() 
{
	struct rectangle object_rectangle = {1, 1, 23, 43, COL_YELLOW};
	if(it_is_yellow_rectangle(object_rectangle)==TRUE)
		printf("Rectangle is YELLOW");	
	return 0;
}

