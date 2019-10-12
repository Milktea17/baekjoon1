#include <stdio.h>

int main(){

	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);

	if( 2 > A || A > 10000)
	{
		printf("[A = %d]A는 2이상, 10000이하의 수를 입력해주세요\n",A);
		return -1;
	}
	if( 2 > B || B > 10000)
	{
		printf("[B = %d]B는 2이상, 10000이하의 수를 입력해주세요\n",B);
		return -1;
	}
	if( 2 > C || C > 10000)
	{
		printf("[C = %d]C는 2이상, 10000이하의 수를 입력해주세요\n",C);
		return -1;
	}

	printf("%d\n",(A+B)%C);
	printf("%d\n",(A%C + B%C)%C);
	printf("%d\n",(A*B)%C);
	printf("%d\n",(A%C * B%C)%C);

	return 0;	
}
