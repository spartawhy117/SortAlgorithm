#include<iostream>
using namespace std;
void Quick_Sort(int*data,int start,int end)
{
	if (start < end)
	{
		int lb = start, rb = end;
		while (lb<rb)
		{
			while (data[rb]>=data[start]&&lb<rb)
			{
				rb--;
			}
			while (data[lb]<=data[start]&&lb<rb)
			{
				lb++;
			}

			swap(data[lb], data[rb]);

		}

		swap(data[start], data[lb]);
		Quick_Sort(data, start, lb);
		Quick_Sort(data, lb + 1, end);
	}
}

int main(int argc, char* argv[])
{
	int data[] = { 5,1,4,2,8 };
	Quick_Sort(data,0,4);

	for (int i = 0; i<5; ++i)
	{
		cout << data[i] << " ";
	}

	system("pause");
}
