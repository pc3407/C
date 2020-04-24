// C.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <stdio.h>
#include <string.h>

typedef unsigned char byte;
typedef char STRING[20];

void Test ( char a[] )
{
	printf ( "%s\r\n",a );
}

int main ()
{
	//char a[6] = {'h','e','l','l','o', 0};
	STRING a = "hello";
	//strcpy_s ( a,"world");
	Test ( a );

	return 0;
}