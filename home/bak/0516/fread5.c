#define CRT_SeCURE_NOWARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int Function(char* file, int *line , char* str) 
{
	FILE *fp;
	char buffer[MAX_LENGTH];
	int lineCnt = -1;

	if((fp = fopen(file, "rb")) != NULL) 
	{
		while(fgets(buffer, MAX_LENGTH, fp) != NULL) {
			lineCnt++;
			if(lineCnt == lineCnt) {
				printf("%s\n", strtok(buffer, str);
						break;
						}
						}
						}
						fclose(fp);
						return 0;
						}
