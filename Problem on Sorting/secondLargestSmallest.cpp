#include <bits/stdc++.h>
using namespace std;

void approach1(int nums[], int n)
{   
    // This is only applicable when there is no repeating element in the array.
    sort(nums, nums + n);
    cout << "The second smallest number: " << nums[1] << endl;
    cout << "The second largest number: " << nums[(n-2)] << endl;
}
void approach2(int nums[], int n)
{   
    int largest;
    int smallest;
    sort(nums, nums + n);{
        largest = nums[(n-1)];
        smallest = nums[0];
    }

    int sec_largest;
    int sec_smallest;

    for(int i=0; i<n; i++){
        if()
    }
    cout << "The second smallest number: " <<  << endl;
    cout << "The second largest number: " <<  << endl;
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
    approach3(nums, n);

}