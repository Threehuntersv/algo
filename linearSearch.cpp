// Linear Search Algorithm.

#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10, i, n, found = 0;
    n = sizeof(arr) / sizeof(arr[0]);
  
    for (i = 0; i < n; i++) {
        if (arr[i] == x){
            found = 1;
            break;
        }
    }

    (found == 0)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << i;
    return 0;
}