#include <stdlib.h>
#include <stdio.h>
#define MAXN 8
#define MOD 1024
int arr[7]={1,2,3,5,6,7,4};
void QuickSort(int *arr, int low, int high)
{
    if (low >= high) return;
    //������������� ��ʼλ�ú��յ�λ��
    int left = low, right = high;
    //Ĭ�� ��ߵ�һ��Ԫ�� Ϊ��־
    int key = arr[low];
    while (low < high)
    {
        while (low < high && arr[high] <= key) --high;
        arr[low] = arr[high];
        while (low < high && arr[low] >= key) ++low;
        arr[high] = arr[low];
    }
    arr[low] = key;
    //ÿ������󶼷ֳ�������[left, low) (low, right]
    //arr[low]��λ����һ���������
    QuickSort(arr, left, low - 1);
    QuickSort(arr, low + 1, right);
    return;
}
int main(void)
{

    //����
    QuickSort(arr, 0, 6);
    //���
    for (int i = 0; i <= 6; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
