// 3-way quick sort
	

	#include<iostream>
	

	using namespace std;
	

	/* function partiitions in 3 ways
	1. a[c..e] contains all elements smaller than pivot
	2. a[e+1..f+1] contains all occurrences of pivot
	3. a[f..o] contains all elements greater than pivot
	*/
	

	void partition (int a[], int c, int o, int &e, int&f){
	    e = c-1, f=o;
	    int p=c-1, q=o;
	    int v=a[o];
	

	    while(true)         // find 1st element >= to v, from left., loop will terminate as v is designated as last element
	    {
	        while (a[++e]< v);
	

	        while (v<a[--f])        // find the 1st element <= to v, from right.,
	            if(f==1)
	                break;
	        if (e>=f) break;        // if e and f cross, then done
	        swap(a[e],a[f]);        // swa so that samllesr goes on left, greater goes on right
	

	    if(a[e]==v)     // move all same left occurrence of pivot to start of array and keep count using p variable
	        p++;
	        swap(a[p],a[f]);
	

	    }
	

	    if(a[e]==v)     // move all same right occurrence of pivot to end of array and keep count using p variable
	    {
	        q--;
	        swap(a[f],a[q]);
	    }
	}
	

	// move pivot element to correct index
	

	swap(a[o],a[e]);
	

	// move from beginning all left same occurences juxtapose to arr[e]
	

	f=e-1;
	for (int k =c; k<p; k++, f--)
	swap(a[k], a[f]);
	

	// move from end all right same occurences juxtapose to arr[e]
	

	e=e+1;
	for (int k =o-1; k>q; k--, e++)
	swap(a[e], a[k]);
	}
	

	// 3-way partition based quick sort
	

	void quicksort(int a[], int l, int r)
	{
	    if (r<=l) return;
	

	    int i,j;
	

	    // note that e and f are passed as reference
	    partition (a,l,r,i,j);
	

	    //recurrence part
	

	    quicksort(a,l,j);
	    quicksort(a,i,r);
	}
	

	//funct. utility to print array
	

	void printarray(int a[], int n)
	{
	    for (int i=0; i<n; ++i)
	        cout << a[i];
	    cout << ("\n");
	

	}
	

	// driver program for int main()
	

	/*int main()
	
	{
	    int a[] = {6,8,2,8,9,1,3,3,7,5,0,9,2};
	
	
	int size = sizeof(a) / sizeof(int);
	
	printarray(a, size);
	quicksort(a,0,size-1);
	printarray(a,size);
	return 0;
	}
	
	
	 output
	 6828913375092    -->     0122335678899
	 */

