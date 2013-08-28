//将下列二位数组转置；(提示：行变列，列变行)

#include <stdio.h>

int main(void)
{
	int A[5][5]={{1,6,2,3,7},
				 {2,7,3,2,2},
				 {3,2,5,2,6},
				 {3,2,6,4,2},
				 {4,3,7,4,8}};
	int i = 0,j = 0,tmp;

	for(i = 0; i < 4; i++){
		for(j = i+1; j < 5; j++){
			tmp = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = tmp;
		}
	}
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("%2d",A[i][j]);
		}


	printf("\n");
	}
	return 0;
}
