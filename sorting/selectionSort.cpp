/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int
main ()
{
  int arr[] = { 4, 7, 3, 5, 2, 1, 6 };

  int size = sizeof (arr) / sizeof (arr[0]);
  for (int i = 0; i < size; i++)
	{
	  cout << arr[i];
	}

  for (int i = 0; i < size - 1; i++)
	{
	  int mini = i;
	  for (int j = i + 1; j < size; j++)
		{
		  if (arr[j] < arr[mini])
			{
			  mini = j;
			}
		}
	  int temp = arr[i];
	  arr[i] = arr[mini];
	  arr[mini] = temp;
	}

  cout << "............" << endl;
  for (int i = 0; i < size; i++)
	{
	  cout << arr[i];
	}

  return 0;
}
