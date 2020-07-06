#include <iostream>
	using namespace std;
	#define N 20
	
	int main()
	{
	    int array[N],max=0,NN;
	    cout<<"Введите NN: ";
	    cin>>NN;
	    for (int i=0;i<N;i++)
	    {
	        array[i]=rand()%5;
	        cout<<array[i]<<" ";
	        if (array[i]>max)
	        {
	            max = array[i];
	        }

	    }
	    cout<<endl<<"Максимальный элемент: "<<max;
	    for (int i=0;i<NN-1;i++)
	    {
	        cout<<max;
	    }
	    return 0;
	}
