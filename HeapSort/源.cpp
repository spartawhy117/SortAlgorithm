#include<iostream>
using namespace std;

/*
i节点的父节点 parent(i) = floor((i - 1) / 2)
i节点的左子节点 left(i) = 2i + 1
i节点的右子节点 right(i) = 2i + 2
*/
void Max_Heapify(int* data, int beg,int end)
{
	int curr = beg;
	int child = 2 * curr + 1;
	
	//end部分可以取到，所以是小于等于
	while (child<=end)
	{
		//找到当前节点下两个子节点（如果有两个）中最大的那个与当前节点作比较
		//如果当前节点小于的话，则交换 然后递归进行比较
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

	//从最后一个内节点开始构建
	for(int i=length/2-1;i>=0;i--)
	{
		Max_Heapify(data, i, length - 1);
	}
	//每次把堆中的最大值提出，然后放在队尾，并且重新进行堆排序
	//最后一个 即是最小的一个不用交换
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
