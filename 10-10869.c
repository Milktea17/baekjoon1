#include <stdio.h>

int main(){

	int A,B;

	scanf("%d %d",&A,&B);

	if(1 > A)
	{
		printf("[A = %d]A는 1이상의 정수를 입력해주세요\n",A);
		return -1;
	}

	if(B > 10000)
	{
		printf("[B = %d]B는 10000이하의 정수를 입력해주세요\n",B);
		return -1;
	}
	printf("%d\n",A+B);
	printf("%d\n",A-B);
	printf("%d\n",A*B);
	printf("%d\n",A/B);
	printf("%d\n",A%B);

	return 0;	
}
