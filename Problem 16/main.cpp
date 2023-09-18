#include <iostream>
#include <unordered_map>
using namespace std;

int* arr_occ(int arr[], int n)
{
    unordered_map<int, int> umap;

    for (int i = 0; i < n; i++) {
        ++umap[arr[i]];
    }
    int *Arr= new int [n];
    int z =0;
    for (int i = 0; i < n; i++)
    {
        if (umap.find(arr[i]) != umap.end())
        {
            for (int j=0; j<umap[arr[i]];++j){
                Arr[z]= arr[i];
                ++z;
            }
            umap.erase(arr[i]);
        }
    }
    return Arr;
}
int main()
{
    int n ;
    cin >> n;
    int arr[n];
    for (int i=0; i<n ; ++i)
    {
        cin >> arr[i];
    }
    int *newarr;
    newarr=arr_occ(arr,n);
    for (int i =0; i< n ; ++i)
    {
        cout << newarr[i]<<" ";
    }
    return 0;
}