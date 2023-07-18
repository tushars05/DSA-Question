// to find duplicate elements in array
#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter the number of elements (less than 10):\n";
   cin >> n;
   int array[10];
   cout << "Enter the elements of the array: ";
   for(int i = 0; i < n; i++) {
      cin >> array[i];
   }
   
   cout << "The array is: ";
   for(int i = 0; i < n; i++) {
      cout << array[i] << " ";
   }
   
   cout << "\nDuplicate elements are: ";
   for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
         if(array[i] == array[j]) {
            cout << array[i] << " ";
         }
      }
   }
}