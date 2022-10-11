/*
address(name)	value
-----------------------
#1(s1)			struct Score scores =
					int kor = 1;
					int eng = 2;
					int mat = 3;
				int sum;
				double avg;
				int rank;
*/

#include <stdio.h>

struct Score {
	int kor;
	int eng;
	int mat;

};

struct Student {
	struct Score scores;

	int sum;
	double avg;
	int rank;
};


int main() {
	struct Student s1;
	s1.scores.kor = 1;
	s1.scores.eng = 2;
	s1.scores.mat = 3;

	struct Student s2 = { {4, 5, 6} , 15, 5.0, 3};
	struct Student s3 = { {7, 8, 9} };

	s3.sum = s3.scores.kor + s3.scores.eng + s3.scores.mat;
	s3.avg = s3.sum / 3.0;
	s3.rank = 2;

	return 0;
}