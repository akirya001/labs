#pragma warning(disable:4703)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdbool.h>
#define N 5
void inputMatr_File(int a[][N])
{
int i, j;
FILE* fp;
fp = fopen("in.txt", "r");
if (fp)
{
for (i = 0; i < N; i++)
for (j = 0; j < N; j++)
fscanf(fp, "%d", &a[i][j]);
}
else printf("Входного файла не существует\n");
}
void inputMatr_keyboard(int a[N][N])
{
int i, j;
printf("Матрица А: \n");
for (i = 0; i < N; i++)
for (j = 0; j < N; j++)
scanf("%d", &a[i][j]);
}

void outputAll(const int x[], const int a[N][N])
{
int i, j;
FILE* fp;
fp = fopen("out.txt", "w");
printf("Матрица А:\n");
for (i = 0; i < N; i++)
{
for (j = 0; j < N; j++)
printf("%d ", a[i][j]);
printf("\n");
}
printf("Массив Х:\n");
for (i = 0; i < N; i++)
printf("%d ", x[i]);
printf("\n");
for (i = 0; i < N; i++)
{
for (j = 0; j < N; j++)
fprintf(fp,"%d ", a[i][j]);
fprintf(fp,"\n");
}
fprintf(fp,"Массив Х:\n");
for (i = 0; i < N; i++)
fprintf(fp, "%2d ", x[i]);
fclose(fp);
}

int* massiv(int(*a)[N], int* x, void (*pfunc)(int[N][N]))
{
int i, j,max;
pfunc(a);
for(i=0;i<N;i++)
{
    max=a[i][0];
    for (j=1; j<N; j++)
    {
        if ( a[i][j]>max) 
        {
            max=a[i][j];
        }
    }
    x[i]=max;
}
return x;
}

int minMassiva(int* x, unsigned size,int min,int i)
{
    if (i < size)
    {
        if( x[i]>0 && x[i]<min )
            min = x[i];
        i++;
        return minMassiva(x, size, min, i );
    }
    else
        return min;
}

int main() {
setlocale(LC_CTYPE, "");
int a[N][N], x[N] = { 1,1,1,1,1 }, key;
void (*pfunc)(int[N][N]);
do
{
printf("Введите матрицу:\n1 - с клавиатуры\n2 - из файла\n");
scanf("%d", &key);
} while (key != 1 && key != 2);
switch (key)
{
case 1: pfunc = &inputMatr_keyboard;
break;
case 2: pfunc = &inputMatr_File;
}
outputAll(massiv(a, x, pfunc), a);
if (minMassiva(x, N,x[0],0)>0)
printf("%d", minMassiva(x, N,x[0],0));
else
printf("Положительных чисел в массиве нет");
}