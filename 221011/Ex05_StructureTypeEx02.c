/*
address(name)	value
----------------------------------
#1(st1)			int kor = 1;
				int eng = 2;
				int mat = 3;
				int sum = 6;
				double avg = 2.0;
				int rank = 4;

#2(st2)			int kor = 4;
				int eng = 5;
				int mat = 6;
				int sum = 15;
				double avg = 5.0;
				int rank = 3;
...

#5(st5)			int scores[3] = {1, 2, 3};
				int sum = 6;
				double avg = 2.0;
				int rank = 4;


*/


#include <stdio.h>

struct grade {
	int kor;
	int eng;
	int mat;
	int sum;
	double avg;
	int rank;
};

struct grade2 {
	int scores[3];

	int sum;
	double avg;
	int rank;
};

int main() {
	struct grade st1 = {1, 2, 3, 6, 2.0, 4};
	struct grade st2 = {4, 5, 6, 15, 5.0, 3};
	struct grade st3 = {7, 8, 9};

	st3.sum = st3.kor + st3.eng + st3.mat;
	st3.avg = st3.sum / 3.0;
	st3.rank = 2;

	struct grade2 st4;
	st4.scores[0] = 1;
	st4.scores[1] = 2;
	st4.scores[2] = 3;

	struct grade2 st5 = { {1, 2, 3}, 6, 2.0, 4 };

	return 0;
}