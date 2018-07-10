#include "sum.h"

#if 1

int sum(int n){
	return n * (n + 1) / 2;
}
/* O(1) Algorithm */
#endif

#if 0
int sum(int n){
	int res = 0;
	for(int i = 1;  i <= n; i++){
		res += i;
	}
	return res;
}
/* O(n) Algorithm */
#endif
