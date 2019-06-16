#include <iostream>
	#include <QuickSort.h>
	using namespace std;
	void Problem4a (int [], int mySize){
	    Quicksort thisSort;                         // using quicksort 
	    int arrayfind[mySize];
	    int c=0;
	    int a=0;
	    int b=(mySize-1);
	    int j= mySize/2; 
	    thisSort.actualSort(arr,i,j);               // pointers and arrays to find value/increment in array  
	    while (a<=j){
	        if (a!=b){
	            arrayfind[c]=arr[a];
	            c++;
	            a++;
	            arrayfind[c]=arr[b];
	        }
	        else if (a==b){
	            arrayfind[a] = arr[a];
	        }
	    }
	    for (a=0,b=0; a<mySize; a++, c++){          // find array values within array size 
	        arr[a] = arrayfind[c];
	    }
	

	}

