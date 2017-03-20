#include<iostream>
using namespace std;

/*
i�ڵ�ĸ��ڵ� parent(i) = floor((i - 1) / 2)
i�ڵ�����ӽڵ� left(i) = 2i + 1
i�ڵ�����ӽڵ� right(i) = 2i + 2
*/
void Max_Heapify(int* data, int beg,int end)
{
	int curr = beg;
	int child = 2 * curr + 1;
	
	//end���ֿ���ȡ����������С�ڵ���
	while (child<=end)
	{
		//�ҵ���ǰ�ڵ��������ӽڵ㣨������������������Ǹ��뵱ǰ�ڵ����Ƚ�
		//�����ǰ�ڵ�С�ڵĻ����򽻻� Ȼ��ݹ���бȽ�
		if(child+1<=end&&data[child]<data[child+1])
		{
			child++;
		}
		if(data[curr]<data[child])
		{
			swap(data[curr], data[child]);

			curr = child;
			child = 2 * curr + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int*data,int length)
{

	//�����һ���ڽڵ㿪ʼ����
	for(int i=length/2-1;i>=0;i--)
	{
		Max_Heapify(data, i, length - 1);
	}
	//ÿ�ΰѶ��е����ֵ�����Ȼ����ڶ�β���������½��ж�����
	//���һ�� ������С��һ�����ý���
	for(int i=length-1;i>0;i--)
	{
		swap(data[i], data[0]);
		Max_Heapify(data, 0, i-1);
	}

}

int main(int argc, char* argv[])
{
	int data[] = { 5,1,4,2,8 };
	HeapSort(data, 5);

	for (int i = 0;i<5; ++i)
	{
		cout << data[i] << " ";
	}

	system("pause");
}
