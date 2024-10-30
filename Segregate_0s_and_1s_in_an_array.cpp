#include <iostream>
#include <vector>
using namespace std;

/* Function to put all 0s on the left and all 1s on the right */
void segregate0and1(vector<int>& arr) {
  
    // Initialize lo and hi indexes
    int lo = 0, hi = arr.size() - 1; 

    while (lo < hi) {
      
        // Increment lo index while we see 0 at lo
        while (arr[lo] == 0 && lo < hi)
            lo++;

        // Decrement hi index while we see 1 at hi
        while (arr[hi] == 1 && lo < hi)
            hi--;

        // If lo is smaller than hi, then there is 
        // a 1 at lo and a 0 at hi
        if (lo < hi) {
            arr[lo] = 0;
            arr[hi] = 1;
            lo++;
            hi--;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 1, 1};

    segregate0and1(arr);

    cout << "Array after segregation: ";
    for (int x : arr)
        cout << x << " ";
    return 0;
}
