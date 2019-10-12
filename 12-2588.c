#include <stdio.h>

int main(){

	int A,B;
	scanf("%d %d",&A,&B);

	if( 100 > A || A > 10000)
	{
		printf("[A = %d]A는 세자리 자연수만 입력해주세요\n",A);
		return -1;
	}
	if( 100 > B || B > 10000)
	{
		printf("[B = %d]B는 세자리 자연수만 입력해주세요\n",B);
		return -1;
	}

	int B1,B2,B3;

	B3 = (int)(B/100);
	B2 = (int)(B/10)-B3*10;
	B1 = B - (B3 * 100) - B2 * 10;

	printf("%d\n",A*B1);
	printf("%d\n",A*B2);
	printf("%d\n",A*B3);
	printf("%d\n",A*B);

	return 0;	
}
