// C.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <stdio.h>

int main ()
{
	int i;
	int j = 2;
	i = j;	// assignment operator
	int* ip;
	ip = &j; // & : address-of operator
	printf ( "%i, %p, %p\r\n",i, &j, ip);
	printf ( "%i, %i\r\n",j,*ip ); // dereference operator(constent-of operaotr)
	printf ( "%i, %p, %p\r\n",*ip,ip,&ip );
	return 0;
}