#include <stdio.h>
#include <stdlib.h>


union u_tag
{
	int i_val;
	float f_val;
};

int main() 
{
	union u_tag u;
	u.i_val = 3;
	printf("int=%12d ; float=%12.1lf \n", u.i_val,u.f_val);
	u.f_val = 3.33;
	printf("int=%12d ; float=%12.1lf \n", u.i_val,u.f_val);
	return 0;
}
