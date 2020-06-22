// тест
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void inputMatr_keyboard(int *a,int n,int m)
{
int i, j;
for (i = 0; i < n; i++)
for (j = 0; j < m; j++)
scanf("%d", (a + i*m + j));
}

void output(int *a,int n,int m)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < m; j++)
printf("%d ", *(a + i*m + j));
printf("\n");
}
}

int proizv(int *a,int n,int m)
{
int i, j,g=1;
for (i = 0; i < n; i++)
{
for (j = 0; j<m; j++)	
if (n-j<=i)
g=g*(*(a + i*m + j));
}
return g;
}

void zamena(int *a,int n,int m,int g)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < m; j++)
if (i<j)
{
 *(a + i*m + j)=g;
 }
}
}

int main()
{
  int *a;
  int n, m,i,e[5];
  printf("Введите количество строк: ");
  scanf("%d", &n);
  printf("Введите количество столбцов: ");
  scanf("%d", &m);
  // Выделение памяти
  a = (int*)malloc(n*m * sizeof(int));
  inputMatr_keyboard(a,n,m);
  printf("Исходная матрица:\n ");
output(a,n,m);
zamena(a,n,m,proizv(a,n,m));
printf("Результирующая матрица:\n ");
output(a,n,m);

  if (proizv(a,n,m)% 2 == 0)
    {
       printf("Произведение четное\n");
        for (i=0;i<n;i++)
         e[i]=*(a + i);  
         free(a);
    }
    else
    {
       printf("Произведение нечетное\n");
    for (i=0;i<n;i++)
            e[i]=*(a+(m-1)*n+i);
             free(a);
   }
      for (i=0;i<n;i++)
        printf("%d ",e[i]);
}
