#include <stdio.h>

int main(){
	int num=65536, div=2;
	for (int i=1; num>0;) {
		printf("%d ", num);
		num=num/div;
		div++;
	}
	printf("0");
}