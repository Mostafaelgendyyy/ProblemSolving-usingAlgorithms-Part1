#include<iostream>
using namespace std;
long long m_w,m_z;

int getrandom()
{
    m_z=36969*(m_z&65535)+(m_z>>16);
    m_w=18000*(m_w&65535)+(m_w>>16);
    long long res =(m_z<<16)+m_w;
    return res%1000000000;
}

void swap_elements(int* first, int* second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int partition_function(int arr[], int l, int h)
{
    int p = arr[h];
    int i = (l - 1);

    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] < p)
        {
            i++;
            swap_elements(&arr[i], &arr[j]);
        }
    }
    swap_elements(&arr[i + 1], &arr[h]);
    return (i + 1);
}

void quick_sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p_index = partition_function(arr, l, h);
        quick_sort(arr, l, p_index - 1);
        quick_sort(arr, p_index + 1, h);
    }
}
int main()
{
    int n , k;
    cin >> n >> k >> m_w>>m_z;
    int arr [n];
    for (int i=0;i<n ; ++i)
    {
        arr[i]= getrandom();
    }
    quick_sort(arr,0,n-1);
    cout << arr[k-1];
}