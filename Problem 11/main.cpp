#include <iostream>
using namespace std;

int main() {
    int num;
    int sumItem=0;
    int sumTotal=0;
    int j=0;
    cout<<"enter number of numbers\n";
    cin>>num;
    int*arr=new int[num];
    for(int i = 0 ; i<num;i++)
    {
        cin>>arr[i];
    }
    for(int i= 0 ; i<num-1;i++)
    {
        int counter=i+2;
        sumItem=arr[i];
        while(counter<num)
        {
            j=counter;
            for(;j<num;j+=2)
            {
                sumItem+=arr[j];
                if(sumItem>sumTotal)
                {
                    sumTotal=sumItem;
                }
            }
            sumItem=arr[i];
            counter++;
        }
    }
    cout<<sumTotal;
}
