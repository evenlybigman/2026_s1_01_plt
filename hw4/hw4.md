# HW-4, 김주혁



####  1. main.c

```c
#include <stdio.h>
 
void readData(int score1[], int score2[], int* count);
void calcData(int score1[], int score2[], int count, double average[]);
void outputData(int score1[], int score2[], int count, double average[]);

int main() {
	int count = 0;
	int score1[100], score2[100];
	double average[100];
	
	readData(score1,score2,&count);
	calcData(score1,score2,count,average);
	outputData(score1,score2,count,average);

	return 0;
}
```



#### 2. input.c

```c
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
```



#### 3. calc.c

```c
#include<stdio.h>

void calcData(int score1[], int score2[], int count, double average[]) {
	for (int i = 0; i < count; i++) {
		average[i] = (score1[i] + score2[i]) / 2.0;
	}
}
```



#### 4. output.c

```c
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
```



#### 5. makefile

```c
hw4: main.o input.o calc.o output.o
        gcc -o hw4 main.o input.o calc.o output.o
main.o: main.c
        gcc -c main.c
input.o: input.c
        gcc -c input.c
calc.o: calc.c
        gcc -c calc.c
output.o: output.c
        gcc -c output.c
```



#### 6. LINUX에서의 실행 화면

![실행 결과](C:\WorkSpace\2026_s1_01_plt\hw4\실행 결과.png)











