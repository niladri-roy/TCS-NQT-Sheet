#include <bits/stdc++.h>
using namespace std;

int approach1(int nums[], int n)
{
    sort(nums, nums + n);
    return nums[0];
}
int approach2(int nums[], int n)
{
    int min_element = nums[0];
    for (int i = 0; i < n; i++)
    {
        min_element = min(min_element, nums[i]);
    }
    return min_element;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements inside the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int ans1 = approach1(nums, n);
    int ans2 = approach2(nums, n);

    cout << "The smallest element by approach 1 : " << ans1 << endl;
    cout << "The smallest element by approach 2 : " << ans2 << endl;
}