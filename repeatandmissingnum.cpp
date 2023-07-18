// //repeat and missing number from array

#include <iostream>
using namespace std;

int main() {
    int nums[10];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the numbers:\n"; 
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int duplicate = 0;
    int missing = 0;
    for (int i = 0; i < n; i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] *= -1;
        } else {
            duplicate = abs(nums[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            missing = i + 1;
            break;
        }
    }

    cout << "Duplicate number is " << duplicate << ", missing number is " << missing << endl;

    return 0;
}
