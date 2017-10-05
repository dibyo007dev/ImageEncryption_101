#include<stdio.h>


int main()
{
	FILE *input;

	input = fopen("image1.jpg","rb");

	printf("Input is done");

	fclose(input);

	return 0;
}