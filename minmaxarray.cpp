//Maximum and Minimum Element in an Array

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
      cout<<array[i]<<"";
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
   cout<<"\nthe sorted array is : ";
   for(int i=0;i<n;i++)
   {
      cout<<array[i]<<" ";
   }
}
