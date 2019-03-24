#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	float weight,height,BMI;
	printf("請輸入體重(公斤):");
	scanf("%f",&weight);
	printf("請輸入身高(公尺):");
	scanf("%f",&height);
	BMI=weight/(height*height);
	printf("BMI為:%f",BMI); 
	return 0;
}
