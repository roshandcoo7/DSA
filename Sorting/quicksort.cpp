#include<iostream>
#include<cstdlib>
 
using namespace std;
 
// Function to swap to values
void swap(int *a, int *b)
{
	int temp; 
	temp = *a;
	*a = *b;
	*b = temp;
}
 
// Partitioning the array on the basis of value at high as pivot value.
int Partition(int a[], int low, int high)
{
	int pivot, index, i;
	index = low; // starts from first location
	pivot = high; // ending is the pivot for now
 
	// Getting index of the pivot.
	for(i=low; i < high; i++)
	{
		if(a[i] < a[pivot])
		{
			swap(&a[i], &a[index]); 
			index++;
		}
	}

	// Swapping value at high and at the index obtained.
	swap(&a[pivot], &a[index]);
 
	return index; // this is the index from where partition is happening
}
 
// Random selection of pivot.
int RandomPivotPartition(int a[], int low, int high)
{
	int pvt, n, temp;
	n = rand();
	// Randomizing the pivot value in the given subpart of array.
	pvt = low + n%(high-low+1);
 
	// Swapping pivot value from high, so pivot value will be taken as a pivot while partitioning.
	swap(&a[high], &a[pvt]);
 
	return Partition(a, low, high);
}
 
int QuickSort(int a[], int low, int high)
{
	int pindex;
	if(low < high)
	{
		// Partitioning array using randomized pivot.
		pindex = RandomPivotPartition(a, low, high);
		// Recursively implementing QuickSort.
		QuickSort(a, low, pindex-1); // for left part
		QuickSort(a, pindex+1, high); // for right part
	}
	return 0;
}
 
int main()
{
	int n, i;

	cout<<"\nEnter the number of data elements to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	QuickSort(arr, 0, n-1); // 0 --> low, n-1 --> high
 
	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        	cout<<"->"<<arr[i];
 
	return 0;
}