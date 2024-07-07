/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void
selectionSort (vector < int >&arr)
{
  for (int i = 0; i < arr.size () - 1; i++)
	{
	  int mini = i;
	  for (int j = i + 1; j < arr.size (); j++)
		{
		  if (arr[mini] > arr[j])
			{
			  mini = j;
			}
		}
	  swap (arr[i], arr[mini]);
	}
}

void
bubbleSort (vector < int >&arr)
{
  for (int i = 0; i < arr.size () - 1; i++)
	{
	  for (int j = 0; j < arr.size () - i - 1; j++)
		{
		  if (arr[j] > arr[j + 1])
			{
			  swap (arr[j + 1], arr[j]);
			}
		}
	}
}

void
insertionSort (vector < int >&arr)
{
  for (int i = 0; i < arr.size (); i++)
	{
	  int j = i;
	  while (j > 0 && arr[j - 1] > arr[j])
		{
		  swap (arr[j - 1], arr[j]);
		  j--;
		}
	}
}

void
merge (vector < int >&arr, int low, int mid, int high)
{
  vector < int >temp;
  int left = low;
  int right = mid + 1;

  while (left <= mid && right <= high)
	{
	  if (arr[left] <= arr[right])
		{
		  temp.push_back (arr[left]);
		  left++;
		}
	  else
		{
		  temp.push_back (arr[right]);
		  right++;
		}
	}
  while (left <= mid)
	{
	  temp.push_back (arr[left]);
	  left++;
	}

  while (right <= high)
	{
	  temp.push_back (arr[right]);
	  right++;
	}

  for (int i = low; i <= high; i++)
	{
	  arr[i] = temp[i - low];
	}
}

void
mergeSort (vector < int >&arr, int low, int high)
{
  if (low >= high)
	return;
  int mid = (low + high) / 2;
  mergeSort (arr, low, mid);
  mergeSort (arr, mid + 1, high);
  merge (arr, low, mid, high);
}

int pivot (vector < int >&arr, int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;
  
  while(i < j){

  while (arr[i] <= pivot && i <= high - 1)
	{
	  i++;
	}
  while (arr[j] > pivot && j >= low + 1)
	{
	  j--;
	}
  if (i < j)
	swap (arr[i], arr[j]);
}
swap (arr[j], arr[low]);
return j;
}

void qs(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndex = pivot(arr,low,high);
        qs(arr, low, pIndex-1);
        qs(arr,pIndex+1, high);
    }
}


int
main ()
{

  vector < int >arr = { 5, 3, 6, 2, 1, 4 };
  for (int i = 0; i < arr.size (); i++)
	{
	  cout << arr[i] << " ";
	}
  cout << endl << "..........." << endl;
  // selectionSort(arr);
  // bubbleSort(arr);
  //insertionSort(arr);
  //mergeSort (arr, 0, arr.size () - 1);
  qs(arr, 0, arr.size()-1);
  for (int i = 0; i < arr.size (); i++)
	{
	  cout << arr[i] << " ";
	}
  return 0;
}
