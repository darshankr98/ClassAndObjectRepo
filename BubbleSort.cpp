#include<iostream>
using namespace std;
void BubbleSort(int arr[],int length)
{
    for(int i = 0;i<length-1;i++)
    {
        for (int j = 0; j < length-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
      
    }
    cout<<"Sorted Array is ";
    for (int i = 0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    //int arr[]={30,43,50,10,90,78,67,99,5,6,9,12,34};
    int arr[]={30,43,50,10};
    int Length = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,Length);

    return 0;

}