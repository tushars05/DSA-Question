//Reverse the Array

#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"enter number of elements less than 10:\n";
   cin>>n;
   int array[10];
   cout<<"enter elements of array:\n";
   for(int i=0;i<n;i++)
   {
      cin>>array[i];
   }
   cout<<"the array is : ";
   for(int i=0;i<n;i++)
   {
      cout<<array[i]<<" ";
   }
   int reverse[10];
   int x=n;
   for(int i=0;i<n;i++)
   {
        reverse[i]=array[x-1];
        x--;
   }
   cout<<"\nthe reversed array is : ";
   for(int i=0;i<n;i++)
   {
      cout<<reverse[i]<<" ";
   }
}
