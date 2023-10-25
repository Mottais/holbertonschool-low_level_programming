#include <stdio.h>

int main(void)
{
	char Car;
	Car = 'z';
	printf("%c\n", Car);

	Car = Car + (Car == 'A') * 3;
	printf("%c\n", Car);

	if ( (1 != 1) * ((1 == 1)+(1 == 1)))
		printf("%c\n", Car);
return(0);
}
