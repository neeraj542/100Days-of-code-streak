// #Problem-Link:  https://practice.geeksforgeeks.org/problems/second-largest3735/1
// #Platform Name: GeeksForGeeks

#include <bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {

        int minIndex = i;

        for (int j = i + 1; j < size; i++)
        {

            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {12, 35, 1, 10, 34, 1};

    int size = 6;

    sortArray(arr, 6);

    return 0;
}
