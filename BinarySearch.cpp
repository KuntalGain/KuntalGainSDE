#include<iostream>
using namespace std;

//Declaring Function
int BinarySearch(int arr[],int n,int Key)
{
  //declaration
    int s = 0;
    int e = n;
    while(s <= e)
    {
      //algorithm
        int mid = (s+e)/2;

        if(arr[mid] == Key)
        {
            return mid;
        }
        else if (arr[mid] > Key)
        {
            e = mid-1;
        }
        else
        {
            e = mid+1;
        }
    }
    return -1;
}

int main ()
{
    int n;
    cout << "Enter the Value of array : ";
    cin>>n;

    int arr[n];
    cout << "Enter the arrays : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int key;
    cout << "Search : ";
    cin>>key;

    int Search = BinarySearch(arr,n,key);

    cout << Search << endl;
}
