#include <stdio.h>

unsigned int square_of_sum(unsigned int n){
	int s = (n * (n + 1)) / 2;
	return s * s;
}

unsigned int sum_of_squares(unsigned int n){
	return (n * (n + 1) * (2 * n + 1)) / 6;
}

unsigned int difference_of_squares(unsigned int n){
	return square_of_sum(n) - sum_of_squares(n);
}

int main(){
	int k; scanf("%d", &k);
	printf("%d\n", difference_of_squares(k));
	return 0;
}
