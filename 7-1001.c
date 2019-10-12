#include <stdio.h>

int main(){

	int A,B;

	scanf("%d %d",&A,&B);

	if(0 >= A)
	{
		printf("[A = %d]A는 1이상의 정수를 입력해주세요\n",A);
		return -1;
	}

	if(B >= 10)
	{
		printf("[B = %d]B는 9이하의 정수를 입력해주세요\n",B);
		return -1;
	}

	printf("%d\n",A-B);

	return 0;	
}
