#include<iostream>
using namespace std;

void Selection_Sort(int* data,int length)
{
	for(int i=0;i<length;++i)
	{
		int min = i;
		for(int j=i+1;j<length;++j)
		{
			if (data[j] < data[min])
				min = j;
		}

		swap(data[i], data[min]);
	}

	
}

int main(int argc, char* argv[])
{
	int data[] = { 5,1,4,2,8 };
	Selection_Sort(data, 5);

	for (int i = 0; i<5; ++i)
	{
		cout << data[i] << " ";
	}

	system("pause");
}
