#include <stdio.h>

int DeterminantCount(int massive[2][2]) 
{
    // не побочная
    int a11 = massive[0][0];
    // побочная
    int a22 = massive[0][1];
    // не побочная 
    int a33 = massive[1][0];
    //  побочная
    int a44 = massive[1][1];
    
    int determinant = (a11 * a44) - (a22 * a33);
    return determinant; 
}

int main() 
{
    int massive[2][2];

    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("Enter elems [%d][%d]: ", i, j);
            scanf("%d", &massive[i][j]);
        }
    }

    // Print
    printf("matrix:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("%5d", massive[i][j]);
        }
        printf("\n");
    }

    
    int determinant = DeterminantCount(massive);
    printf("Det: %d\n", determinant);

    return 0;
}