#include <iostream>
using namespace std;

int InputMatr()
{
    int n;
    cin>>n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j]=rand()%5;
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }      
    return a[n][n];
}

int main()
{
    InputMatr();
    return 0;
}
