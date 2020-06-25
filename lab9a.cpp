#include <iostream>
using namespace std;

void InputMatr()
{
    int n;
    cout<<"Введите размер матрицы: ";
    cin>>n;
    int a[n][n],max=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j]=rand()%5;
            cout<<a[i][j]<<" ";
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    cout<<"| max: "<<max<<" "<<endl;
    }      
}


int main()
{
    
    InputMatr();
    return 0;
}
