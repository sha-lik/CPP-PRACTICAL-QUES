// 6. Write a program to search a given elemenl in a set of N numbers using Binary search
// (i) with recursion (ii) without recursion.

#include <bits/stdc++.h>
using namespace std;

// with recursion
int binary_search_with_recursion(int *arr, int s, int e, int target)
{

    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
    {
        return binary_search_with_recursion(arr, mid + 1, e, target);
    }
    else
        return binary_search_with_recursion(arr, s, mid - 1, target);
}

// without recursion
int binary_search_without_recursion(int arr[], int s, int e, int target)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[6] = {1, 3, 5, 7, 34, 44};
    int size = 6;
    int target = 7;
    cout << "Using recursion the element is at index " << binary_search_with_recursion(arr, 0, size - 1, target) << endl;
    cout << "Without recursion the element is at index " << binary_search_without_recursion(arr, 0, size - 1, target);

    return 0;
}
