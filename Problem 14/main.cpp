#include <iostream>
#include <unordered_set>
using namespace std;
bool getPairs(int arr[], int n, int sum)
{
    bool flag= false;
    unordered_set<int> uset;
    for (int i = 0; i <n; ++i)
    {
        int temp=sum-arr[i];
        if (uset.find(temp) != uset.end())
        {
            if(flag)
            {
                cout << " Or ";
            }
            cout << "Pair found "<< "(" << temp << ","<<arr[i]<< ")";
            flag =true;
        }
        uset.insert(arr[i]);
    }
    return flag;
}
int main()
{
    int n ;
    cin >>n;
    cout << "Numbers:";
    int arr[n];
    for (int i =0; i< n ; ++i)
    {
        cin >> arr[i]; //O(n)
    }
    int target ;
    cout << "Target:";
    cin >> target;
    if (!getPairs(arr,n,target)) //O(n)
    {
        cout << "Pair not found";
    }
    return 0;
}