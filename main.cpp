#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	float weight,height,BMI;
	printf("�п�J�魫(����):");
	scanf("%f",&weight);
	printf("�п�J����(����):");
	scanf("%f",&height);
	BMI=weight/(height*height);
	printf("BMI��:%f",BMI); 
	return 0;
}
