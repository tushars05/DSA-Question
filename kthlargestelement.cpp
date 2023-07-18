// Kth Largest Element in an Array

#include <iostream>
using namespace std;

int main() {
    int array[10];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the numbers:\n"; 
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for(int i=0; i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
         if(array[j]<array[i])
         {
            int temp=array[j];
            array[j]=array[i];
            array[i]=temp;
         }
      }
    }
    int x;
    cout<<"enter the kth number to find the kth highest number:";
    cin>>x;
    cout<<array[n-x];
}
