#include <stdio.h>

void cube(int a[10][10], int n)
{
    int i, j;

    printf("Cubes of all elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", (*(*(a + i) + j)) *
                          (*(*(a + i) + j)) *
                          (*(*(a + i) + j)));
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], n, i, j;

    printf("Enter array's size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cube(a, n);

    return 0;
}
