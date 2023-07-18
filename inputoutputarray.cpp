//array input and output
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
}
