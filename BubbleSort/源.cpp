#include<iostream>
using namespace std;

void Bubble_Sort(int *data,int length)
{
	for(int i=0;i<length-1;++i)
	{
		for(int j=0;j<length-1-i;++j)
		{
			if(data[j]>data[j+1])
			{
				swap(data[j], data[j + 1]);
			}
		}
	}
}

int main(int argc, char* argv[])
{
	int data[] = {5,1,4,2,8};
	Bubble_Sort(data, 5);

	for(int i=0;i<5;++i)
	{
		cout << data[i] << " ";
	}

	system("pause");
}
