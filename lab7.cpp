#include <iostream>
using namespace std;
#define N 20

int main()
{
    int array[N],max=0,count=0;
    for (int i=0;i<N;i++)
    {
        array[i]=rand()%5;
        cout<<array[i]<<" ";
        if (array[i]>max)
        {
            max = array[i];
            count = 1;
        }
        else
        {
            if (array[i] == max)
                count++;    
        }
    }
    cout<<endl<<"Максимальный элемент: "<<max<<endl<<"Количество: "<<count;
    return 0;
}
