#include<iostream>
using namespace std;
void ShellSort(int*data,int length)
{
	int d = length / 2;
	while (d>=1)
	{
		//每个间隔d里是插入排序
		for (int i = d; i < length; i++)
		{
			int j = i ;
			for(;j>=0;j-=d)
			{
				if (data[j - d] > data[j])
				{
					swap(data[j], data[j - d]);
				}
				else
					break;
			}
		}

		d = d / 2;
	}
}

int main(int argc, char* argv[])
{
	int data[] = { 5,1,4,2,8 };
	ShellSort(data, 5);

	for (int i = 0; i<5; ++i)
	{
		cout << data[i] << " ";
	}

	system("pause");
}
