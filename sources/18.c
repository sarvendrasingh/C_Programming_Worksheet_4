#include <stdio.h>
int main()
{
	float expr = 1.0;
	switch ((int)expr)
	{
		default	:	printf("Three");
					break;  
		case 1	:	printf("One");
					break;
		case 2	:	printf("Two");
					break;
	}	
	return 0;
}
