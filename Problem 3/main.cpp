#include <iostream>
using namespace std;

int MergeSort(int arr[], int temp[], int L, int R);
int merging(int arr[], int temp[], int L, int MIDDLE, int R);

int mergeSort(int arr[], int size)
{
    int temp[size];
    return MergeSort(arr, temp, 0, size - 1);
}

int MergeSort(int arr[], int temp[], int L, int R)
{
    int MIDDLE, count = 0;
    if (R > L) {

        MIDDLE = (R + L) / 2;

        count += MergeSort(arr, temp, L, MIDDLE);
        count += MergeSort(arr, temp, MIDDLE + 1, R);

        count += merging(arr, temp, L, MIDDLE + 1, R);
    }
    return count;
}

int merging(int arr[], int temp[], int L, int MIDDLE, int R)
{
    int i, j, k;
    int swaps = 0;

    i = L;
    j = MIDDLE;
    k = L;
    for (; (i <= MIDDLE - 1) && (j <= R);) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];


            swaps = swaps + (MIDDLE - i);
        }
    }

    for (; i <= MIDDLE - 1;)
        temp[k++] = arr[i++];

    for (; j <= R;)
        temp[k++] = arr[j++];

    for (i = L; i <= R; i++)
        arr[i] = temp[i];

    return swaps;
}


int main()
{
    /***********************************************************************
     *                  Please Enter -1 to stop looping.                   *
     ***********************************************************************/
    int c;
    for(;true;)
    {
        cin >> c;
        if (c==-1)
        {
            return 0;
        }
        int arr[c];
        for (int i =0; i< c; ++i)
        {
            cin >> arr[i];
        }
        int ans=mergeSort(arr,c);
        cout << ans<< endl;
    }
}
