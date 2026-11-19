
#include <stdio.h>

int main() {
    int r, c, i, j ,r1,c1,k;
    int A[r][c], B[r1][c1];
   int C[r][c], D[r][c1];
    
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("Enter the number of rows: ");
    scanf("%d", &r1);

    printf("Enter the number of columns: ");
    scanf("%d", &c1);


    printf("\nEnter the elements of Matrix A:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

     printf("\nEnter the elements of Matrix B:\n");

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n Matrix A:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\n Matrix B:\n");

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Transpose Matrix

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            B[j][i] = A[i][j];
        }
    }

    printf("\nTranspose of Matrix A:\n");

    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    //addition of matrix
    
        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        printf("\nMatrix Addition:\n");

        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }   

//multiplication
for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {

                D[i][j] = 0;

                for(k = 0; k < c1; k++) {
                    D[i][j] = D[i][j] + A[i][k] * B[k][j];
                }
            }
  printf("\nMatrix Multiplication:\n");

        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                printf("%d\t", D[i][j]);
            }
            printf("\n");
        }
}
    return 0;

}

    