#include<stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))

int main(){
int x;
int d = x*2 - 1;
int i, j, m;
scanf("%d", &x);
for(i = 0; i <= d; i++){
	for(j = 0; j <= d; j++){
		m = min(i, j);
		m = min(m, d - i - 1);
		m = min(m, d - j - 1);
		printf("%d ", x - m);	
	}
	printf("\n");
}
return 0;
}
