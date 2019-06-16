#include <iostream>
	

	using namespace std;
	

	void bubblesort(int a[], int num) {         // bubble sort method 
	    for (int i = num-1; i>=0; i--){
	        for (int j=0; j<1; j++){
	            if(a[j]>a[j+1]) {
	                int temp=a[j];
	                a[j]= a[j+1];
	                a[j+1]=temp;
	            }
	        }
	    }
	}
	

	void swap(int *x, int *y)               // swap method 
	

	{
	int temp = *x;
	*x = *y;
	*y=temp;
	}
	

	

	

	/*int main(){
	    int n;
	    cout << "Enter size of array:" << endl;
	    cin >>n;
	    int array[n];
	    cout<<"Enter array: " << endl;
	    for (int i=0; i<n; i++){
	        cin>>array[i];
	    }
	    bubblesort(array,n);
	    for (int i=0; i<n-1; i+=2)
	        swap(&array[i], &array[i+1]);
	    for (int i=0; i<n; i++){
	        cout << array[i];
	        if(i!=n-1) cout << " ,";
	    }
	    return 0;
	}
	*/

