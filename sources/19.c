#include <stdio.h>
int main()
{
	char ch = 'A';
	switch (ch + 1)
	{
        case 'A'	:	printf("Case label is A");
		case 'B'	:	printf("Case label is B");
	}
	return 0;
}
