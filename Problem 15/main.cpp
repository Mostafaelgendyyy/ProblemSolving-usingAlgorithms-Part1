#include <iostream>
#include <set>
using namespace std;
int index_firrepetition(int arr[], int n) {
    int minindex = -1;
    set<int> myset;
    for (int i=n ; i>0; --i) {
        if (myset.find(arr[i]) != myset.end()) {
            minindex = i;
        }
        else
        {
            myset.insert(arr[i]);
        }
    }
    return minindex;
}
int main()
{
    int n ;
    cin >> n ;
    int arr[n];
    for (int i =0 ; i< n ; ++i)
    {
        cin >> arr[i];
    }
    int index =index_firrepetition(arr, n);
    if (index!=-1){
        cout << "The minimum index of the repeating element is " << index;
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}