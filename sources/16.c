#include <stdio.h>
int main()
{
	int expr = 3;
	switch (expr)
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
