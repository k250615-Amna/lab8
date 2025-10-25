#include <stdio.h>

int main(){
	//assuming that a single array does not have duplicating elements//
	int i,j, size,a,b,c,duplicate=0;
	printf("Enter the size of the array 1: ");
	scanf("%d", &i);
	printf("Enter the size of the array 2: ");
	scanf("%d", &j);
	
	int arr1[i];
	int arr2[j];
	int output[100];
	for(a=0;a<i;a++){
		printf("Enter numbers for array 1: ");
		scanf("%d", &arr1[a]);
	}
	c=i;
	for(a=0;a<j;a++){
		printf("Enter numbers for array 2: ");
		scanf("%d", &arr2[a]);
	}
	for(a=0;a<i;a++){
		output[a]=arr1[a];
	}
	for(a=0;a<j;a++){
		duplicate=0;
		for(b=0;b<c;b++){
			if(arr2[a]==output[b]){
				duplicate++;
				break;
			}
		}
		if(duplicate==0){
			output[c++]=arr2[a];
		}
   	
	}
	 printf("\nUnion: ");
    for (a = 0; a < c; a++) {
        printf("%d ", output[a]);
    }
    printf("\n");
}
