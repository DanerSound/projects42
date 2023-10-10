
#include<stdio.h>

int main(int argc, char *argv[])
{
	int index = 0;
	while(argv[index])
	{
		printf("attributo %d , argv %s\n",index, argv[index]);
		index++;
	}

	printf(" argc %d \n",argc);
	return (0);
}
