#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

int main()
{
	    FILE* fp = fopen("a.txt","w"); //test파일을 w(쓰기) 모드로 열기

		fputs("test fwrite2.c\n",fp);
		fputs("option : 0123", fp);

		fclose(fp); //파일 포인터 닫기

			    return 0;
}
