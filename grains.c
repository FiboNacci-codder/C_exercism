#include <stdio.h>
#include <stdint.h>

uint64_t square(uint8_t n){
	if(n == 0 || n > 64)
		return 0ULL;
	return (1ULL << (n - 1));
}

uint64_t total(){
	uint64_t s = 0ULL;
	for(uint8_t i = 1; i <= 64; i++)
		s += square(i);
	return s;
}

int main(){
	uint8_t k; scanf("%hhd", &k);
	printf("%lu\n%lu\n", square(k), total());
}
