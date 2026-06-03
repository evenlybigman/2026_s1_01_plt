#include <stdio.h>
#include <stdlib.h>

void readData(int score1[],int score2[],int* count) {
	FILE* infile;
	infile = fopen("points.txt","r");
	if (infile == NULL) {
		printf(" 파일 읽기 실패\n");
		exit(0);
	}

	while((fscanf(infile,"%d %d", &score1[*count], &score2[*count])) != EOF) {
		(*count)++;
		}

	fclose(infile);
}
