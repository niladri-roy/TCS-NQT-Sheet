#include <bits/stdc++.h>
using namespace std;

void approach1(int nums[], int n)
{
    sort(nums, nums + n);
    cout << "The second smallest number: " << nums[1] << endl;
    cout << "The second largest number: " << nums[(n-2)] << endl;
}
void approach2(int nums[], int n)
{
    int min_element = nums[0];
    for (int i = 0; i < n; i++)
    {
        min_element = min(min_element, nums[i]);
    }
    cout << "The second smallest number: " << nums[1] << endl;
    cout << "The second largest number: " << nums[(n - 2)] << endl;
}
void approach3(int nums[], int n)
{
    
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

    approach1(nums, n);
    approach2(nums, n);
    //approach3(nums, n);

}