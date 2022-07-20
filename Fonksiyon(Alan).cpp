#include <stdio.h>

float square(const int r)
{
    float Alan =  3.14 * r * r;
	
	return Alan;
}

int main()
{
	int r;
	float alan;
	printf("Hesaplanacak r degerini giriniz: ");
	scanf("%d",&r);
	alan=square(r);
	printf("Alan: %.2f", alan);
}
	
