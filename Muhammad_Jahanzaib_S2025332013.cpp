// #include<iostream>
// using namespace std;

// Code for linear search

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int key = 30;
//     bool found = false;


//     for(int i = 0; i < 5; i++) {
//         if (arr[i] == key) {
//             cout << "Key is found at index" << i ;
//             found = true;
//             break;
//         }
//     }

//     if (!found) {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }


// Code for binary search

#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10,20,30,40,50};
    int key = 40;

    int start = 0, end = 4;
    int mid, index = -1;

    while(start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == key) {
            index = mid;
            break;
        }

        else if (key < arr[mid]) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
    }


    if (index != -1)
        cout << "Element found at index:" << index;

    else 
        cout << "Element not found";

    return 0;
}