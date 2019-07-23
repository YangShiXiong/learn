#include <stdlib.h>
#include <stdio.h>
#define MAXN 8
#define MOD 1024
int arr[7]={1,2,3,5,6,7,4};
void QuickSort(int *arr, int low, int high)
{
    if (low >= high) return;
    //保存排序区间的 起始位置和终点位置
    int left = low, right = high;
    //默认 左边第一个元素 为标志
    int key = arr[low];
    while (low < high)
    {
        while (low < high && arr[high] <= key) --high;
        arr[low] = arr[high];
        while (low < high && arr[low] >= key) ++low;
        arr[high] = arr[low];
    }
    arr[low] = key;
    //每次排序后都分成两部分[left, low) (low, right]
    //arr[low]的位置是一定是有序的
    QuickSort(arr, left, low - 1);
    QuickSort(arr, low + 1, right);
    return;
}
int main(void)
{

    //快排
    QuickSort(arr, 0, 6);
    //输出
    for (int i = 0; i <= 6; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
