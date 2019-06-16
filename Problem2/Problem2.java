public class Problem2 {
			int mergeSort(int a[]) {			// merge sort information --> using different in-place merge sort algorithm that does not use O(N) extra space to merge the two halves
				int first=0;
				int last = a.length-1;
				if(last-first==1) {
					if(a[first]>a[last]) {
						int temp = a[first];			// arranging/equating first and last temps 
						a[first] = a[last];
						a[last] = temp;
					}
				}
				else
				{
					int mid = (first+last)/2;			// finding middle for mergeSort 
					mergeSort(a);
				}
				return 0;
			}
	}

