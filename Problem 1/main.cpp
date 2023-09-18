#include <iostream>
using namespace std;

int main() {
    int numbers=0;
    int counter=0;
    cout<<"How many numbers do you want to sort ?\n";
    cin>>numbers;
    int* arr =new int [numbers];
    cout<<"Enter the numbers\n";
    for(int i = 0 ; i < numbers;i++)
    {
        cin>>arr[i];
    }

    for(int i = 1 ;i<numbers;i++)
    {
        int key = arr[i];
        int j = i - 1;
        for (;(j>=0&&arr[j]>key);j--)
        {
            arr[j+1]=arr[j];
            counter++;
        }
        arr[j+1]=key;
    }
    cout<<counter;
}
