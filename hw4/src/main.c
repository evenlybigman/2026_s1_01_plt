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
