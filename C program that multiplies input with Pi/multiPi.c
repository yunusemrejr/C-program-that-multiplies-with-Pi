#include <stdio.h>

int main() {
	int inptINT;
	float timesPi;
	printf("Hey! Give me an integer and I'll multiply it with Pi: ");
	scanf("%i", &inptINT);
	
	timesPi = inptINT*3.14159265359;
	
	printf("\n %i",inptINT);
	printf(" times Pi is: %f",timesPi);
	printf("\n -Yunus Emre Vurgun");
}
