//Write a program of to sort the array using templates


#include <iostream>

template <typename T>

	void swap(T* a, T* b) 
	{
   		T t = *a;
    	*a = *b;
    	*b = t;
	}

template <typename T>

	void bubbleSort(T arr[], int n) 
	{
    	for (int i = 0; i < n - 1; i++) 
		{
        	for (int j = 0; j < n - i - 1; j++) 
			{
           		if (arr[j] > arr[j + 1]) 
				{
               		swap(&arr[j], &arr[j + 1]);
          		}
       	 	}
    	}
	}

main() 
{
    int intArr[] = {5, 2, 8, 1, 9};
    int n = sizeof(intArr) / sizeof(intArr[0]);

    std::cout << "\n\n\t Before sorting: ";
    
    	for (int i = 0; i < n; i++) 
		{
        	std::cout << intArr[i] << " ";
    	}
    std::cout << std::endl;

    bubbleSort(intArr, n);

    std::cout << "\n\n\t After sorting: ";
   		for (int i = 0; i < n; i++) 
		{
        	std::cout << intArr[i] << " ";
    	}
    std::cout << std::endl;

}
