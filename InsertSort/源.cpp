#include<iostream>
using namespace std;

void InsertSort(int* data,int length)
{
	for(int i=0;i<length;++i)
	{
		for(int j=i;j>0;--j)
		{
			//已排序的部分从后向前找比他小的位置
			if(data[j]<data[j-1])
			{
				swap(data[j], data[j - 1]);
			}
			else
				break;
		}
	}
}

int main(int argc, char* argv[])
{
	int data[] = { 5,1,4,2,8 };
	InsertSort(data, 5);

	for (int i = 0; i<5; ++i)
	{
		cout << data[i] << " ";
	}

	system("pause");
}
