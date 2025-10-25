#include <stdio.h>
int main(){
	//assuming that a element does not repeat itself in the same array//
	int i,j, size,a,b,c=0,;
	printf("Enter the size of the array 1: ");
	scanf("%d", &i);
	printf("Enter the size of the array 2: ");
	scanf("%d", &j);
	
	int arr1[i];
	int arr2[j];
	for(a=0;a<i;a++){
		printf("Enter numbers for array 1: ");
		scanf("%d", &arr1[a]);
	}
	for(a=0;a<j;a++){
		printf("Enter numbers for array 2: ");
		scanf("%d", &arr2[a]);
	}
	
	for(a=0;a<i;a++){
		for(b=0;b<j;b++){
			if(arr1[a]==arr2[b]){
			    c++;
				break;
			}
		}
   	
	}
	printf("\n number of intersection elements: %d ", c);
	

}


