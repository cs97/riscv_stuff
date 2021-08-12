#include <stdio.h>

void main(){
	mat_mat();
	mat_vec();   
    
}

void mat_mat() {
    int matA[2][2]={0,1,2,3};
    int matB[2][2]={0,1,2,3};
    int matC[2][2];
    int i, j, k;
    printf("matrix x matrix\n");
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
            printf("%d\n",matC[i][j]);
        } 
    }
}

void mat_vec(){
    int mat[2][3]={{1,2,3}, {1,2,3}};
    int vec[3]={1,2,3};
    int out[2]={0,0};
    int i, j;
    printf("matrix x vector\n");
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            out[i] += mat[i][j] * vec[j];
        } 
        printf("%d\n",out[i]);
    }
}

