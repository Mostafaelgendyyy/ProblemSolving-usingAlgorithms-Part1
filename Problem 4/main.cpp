#include <bits/stdc++.h>

using namespace std;

int arr[100];

int solve(int left , int right , int m)
{
    if(right <= left)
        return 0 ;
    int i = min_element(arr + left , arr + right) - arr ;
    return min(right-left , arr[i] - m + solve(left, i, arr[i]) + solve(i + 1, right, arr[i]));
}

int main()
{
    int n ;
    cin >> n ;
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];

    cout<<solve(0,n,0);
    return 0;
}
/*
 {1 , 2.2.2.2 , 3 , 4}
 {2.2.2} after 1st .. using 1st operation
 {} after 2nd .. using 2nd operation
 out =2 "Minimum Number of Operations"
 **************************************
 {1 , 3 , 5}
 {3 , 5} after 1st .. using 2nd operation
 {5} after 2nd .. using 2nd operation
 {} after 3rd .. using 2nd operation
 out =  3 "Minimum Number of Operations"
 */