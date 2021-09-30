#include <vector>

int bSearch(std::vector<int> arr, int leftBound, int rightBound, int target){

    // find middle
    int mid = 1 + (rightBound - leftBound) / 2;

    // if target exists in array
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        bSearch(arr,leftBound,mid-1,target);
    else if (arr[mid] < target)
        bSearch(arr,mid + 1,rightBound,target);
    else{
        return mid+1;   //index where needs to be inserted
    }

     return -1;
 }
