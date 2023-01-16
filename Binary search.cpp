/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << *a << endl
         << *b << endl;
}

int main()
{
    int find;
    cout << "findthiskey" << endl;
    cin >> find;
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = size;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == find)
        {
            cout << "found" << mid << endl;
        }
        else if (arr[mid] > find)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        return 1;
    }
    return 0;
}
