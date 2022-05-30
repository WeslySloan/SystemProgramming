#define CRT_SeCURE_NOWARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int main(int argc, char *argv[]) {
	FILE *fp;
	char buffer[MAX_LENGTH];

	printf("fileName / lineNumber / string");
	char filename[];
	int linenumber;
	char str[];
	scanf("%s", &filename);
	scanf("%d", &linenumber);
	scanf("%s", &str);

	int lineCnt = 0;
	if((fp = fopen(filename, "rb")) != NULL) {
		while(fgets(buffer, MAX_LENGTH, fp) != NULL) {
			lineCnt++;
			if(lineCnt == linenumber) {
				printf("%s\n", strtok(buffer, str));
				break;
			}
		}
	}
	fclose(fp);
	return 0;
}
