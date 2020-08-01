#include <iostream>

using namespace std;

void mergeSort(int arr[], int start, int end);
void print(int arr[], int n);

int main()
{

    int arr[10] = {1, 3, 2, 4, 6, 5, 6, 8, 7, 0};
    print(arr, 10);
    mergeSort(arr, 0, 9);
    print(arr, 10);
}

void mergeSort(int arr[], int start, int end)
{

    if (start < end)
    {

        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        int temp[end - start + 1];

        int i = start, j = mid + 1, k = 0;

        while (i <= mid && j <= end)
        {
            if (arr[i] <= arr[j])
            {
                temp[k] = arr[i];
                k += 1;
                i += 1;
            }

            else
            {
                temp[k] = arr[j];
                k += 1;
                j += 1;
            }
        }

        while (i <= mid)
        {
            temp[k] = arr[i];
            k += 1;
            i += 1;
        }

        while (j <= end)
        {
            temp[k] = arr[j];
            k += 1;
            j += 1;
        }

        for (i = start; i < end; i++)
        {
            arr[i] = temp[i - start];
        }
    }
}

void print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}