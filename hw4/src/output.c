#include <stdio.h>
#include <stdlib.h>

void outputData(int score1[], int score2[], int count, double average[]) {
	FILE* outfile;
	outfile = fopen("grade.txt","w");

	if (outfile == NULL) {
		printf("파일 읽기 실패\n");
		exit(0);
	}

	for (int i = 0; i < count; i++) {
		fprintf(outfile,"%d %d %.1lf\n", score1[i],score2[i],average[i]);
		printf("%d %d %.1lf\n", score1[i],score2[i],average[i]);
	}

	fclose(outfile);
}
