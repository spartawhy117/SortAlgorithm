#include <iostream>
using namespace std;
void Merge(int*data,int start,int mid,int end)
{
	int *tmp = new int[end-start+1]{0};
	int lstart = start;
	int rstart = mid + 1;
	int index = 0;
	while (lstart <= mid &&rstart<=end)
	{
		if(data[lstart]<data[rstart])
		{
			tmp[index++] = data[lstart++];
		}
		else
		{
			tmp[index++] = data[rstart++];
		}
	}
	while (lstart!=mid+1)
	{
		tmp[index++] = data[lstart++];
	}
	while(rstart!=end+1)
	{
		tmp[index++] = data[rstart++];
	}

	for(int i=0;i<(end-start+1);++i)
	{
		data[start + i] = tmp[i];
	}
	delete[] tmp;
}

//µü´úÊµÏÖ
void MergeSort(int*data,int start,int end)
{
	if(start<end)
	{
		int mid = (start + end )/ 2;
		MergeSort(data, start, mid);
		MergeSort(data, mid + 1, end);
		Merge(data, start, mid, end);
	}

}

int main(int argc, char* argv[])
{
	int data[] = {5,1,4,2,8 };
	MergeSort(data,0,4);

	for (int i = 0; i<5; ++i)
	{
		cout << data[i] << " ";
	}

	system("pause");
}
