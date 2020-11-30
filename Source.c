#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void function () {
	printf("Vveit fuction");

}

int main() {
	int i=0,a,b,k=0;
printf("Test 1 git");
	printf("Vkazit 1 cheslo=");
	scanf_s("%d", &a);
	printf("Vkazit 2 cheslo=");
	scanf_s("%d", &b);	
	printf("Vu vvelu:");
	printf("%d,", a);
	printf("%d\n", b);
	int n = (b - a) + 1;
	if (n < 0) {
		n = -n + 2;
	}
	

	

	int* s = (int*)malloc(n * sizeof(int));
	

	//for (i = 0; i < n; i++) {                    //перевірка скільки створилось масивів
	//	printf("a[%d]= %d  ", i, s[i] + 1);    
	//}              
	
	for (int x = a; x<=b;x++) {
		if ((x%5==0) && (x%2!=0)) {
			continue;
			
		}
		s[i] = x;
		i++;
		printf("%d ", x);
	}
	printf("\n");
	printf("a[%d]", i);
	
	







	return 0;
}