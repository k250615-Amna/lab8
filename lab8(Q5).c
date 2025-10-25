#include <stdio.h>
int main(){
	int i,j,sum;
	float avg;
	int marks[5][3] = {
		{80, 75, 90},
        {60, 70, 65},
        {78, 82, 88},
        {92, 85, 89},
        {55, 60, 58}
    };
    for(i=0;i<5;i++){
    	sum = 0;
    	for(j=0;j<3;j++){
    		sum = sum + marks[i][j];
		}
	printf("Total marks for student %d are %d\n", i+1,sum);
	}
	
	for(i=0;i<3;i++){
		sum =0;
		avg =0;
		for(j=0;j<5;j++){
			sum = sum +marks[j][i];
		}
		avg = sum/5;
		printf("Average of subject %d is %.2lf\n", i+1,avg);
	}
    
}  
