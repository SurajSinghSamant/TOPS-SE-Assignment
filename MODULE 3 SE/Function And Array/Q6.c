// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include <stdio.h>

int main()
{
    int array1[10][10], array2[10][10], result[10][10];
    int i, j, m, n, option;

    printf("Enter The Dimensions Of Matrices 1 and 2 : ");
    scanf("%d %d", &m, &n);

    printf("Enter Elements Of Matrix 1 : ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Matrix 1 : \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", array1[i][j]);
        }
        printf("\n");
    }

    printf("Enter Elements of Matrix 2 : ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    printf("Matrix 2 : \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", array2[i][j]);
        }
        printf("\n");
    }

    printf("Enter Your Choice (1 - Addition, 2 - Subtraction, 3 - Multiplication) : ");
    scanf("%d", &option);

    switch (option) {
        case 1 :
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    result[i][j] = array1[i][j] + array2[i][j];
                }
            }
            printf("Sum Of Matrices : \n");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    printf("%3d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 2 :
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    result[i][j] = array1[i][j] - array2[i][j];
                }
            }
            printf("Difference Of Matrices : \n");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    printf("%3d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 3 :
            
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    result[i][j] = 0;
                }
            }

            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    for (int k = 0; k < n; k++) {
                        result[i][j] += array1[i][k] * array2[k][j];
                    }
                }
            }

            printf("Product of Matrices : \n");
            for (i = 0; i < m; i++) {
                printf(" Row %3d : ", i + 1);
                for (j = 0; j < n; j++) {
                    printf("%3d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        default :
            
        printf("Enter Valid Values ");
    }
    
    return 0;
}
