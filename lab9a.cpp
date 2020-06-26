#include <iostream>
using namespace std;

int main()
{
    int n, *a;
    cout<<"Введите размер матрицы: ";
    cin>>n;
    int array[n],max=0;
    a = (int*)malloc(n*n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           *(a + i*n + j)=rand()%5;
            cout<<*(a + i*n + j)<<" ";
            if(*(a + i*n + j) > max)
            {
                max = *(a + i*n + j);
                array[i]=j;
            }
        }
    cout<<"| max: "<<max<<" | pos: "<<array[i]<<endl;
    max=0;
    }     
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j<array[i])
                *(a + i*n + j)=0;
            cout<<*(a + i*n + j)<<" ";
        }
    cout<<endl;
    }  
    delete a;
    return 0;
}
