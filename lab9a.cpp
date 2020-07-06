#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void input(int **a, int n,int *array)
{
    int i, j,max=0;
    for (i = 0; i<n; i++)
    {
        a[i] = (int*)malloc(n * sizeof(int));
        for (j = 0; j<n; j++)
        {
            a[i][j]=rand()%5;
            printf("%d ",a[i][j]);
            if(a[i][j] > max)
            {
                max = a[i][j];
                array[i]=j;
            }
        }
    printf("max - %d | pos - %d \n",max,array[i]);
    max=0;
    }
    
}


void change(int **a, int n, int *array)
{
    int i, j;
    for (i = 0; i<n; i++)
    {
        for (j = 0; j<n; j++)
        {
            if (j<array[i])
                a[i][j]=0;
            printf("%d ",a[i][j]);
            
        }
    printf("\n");
    }
}
int main()
{
int **a;
int i,n;
printf("Введите размер матрицы: ");
scanf("%d", &n);
int array[n];
a = (int**)malloc(n*n* sizeof(int*));
input(a,n,array);
change(a,n,array);
free(a);
return 0;
}

