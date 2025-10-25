#include <stdio.h>
int main(){
	int temperature[7][3];
	int i,j,avg,sum;
	
	for(i=0;i<7;i++){
		printf("Enter temperature values for day %d\n",i+1);
		for(j=0;j<3;j++){
			if (j == 0){
                printf("Morning: ");
            }
            else if (j == 1){
                printf("Afternoon: ");
            }
            else{
                printf("Night: ");
            }
            scanf("%d", &temperature[i][j]);
		}
	}
	printf("\n\n--- Temperature Record Table ---\n");
    printf("Day\tMorning\t     Afternoon\t      Night\n");
    for (i = 0; i < 7; i++) {
        printf("%d\t", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%d\t\t", temperature[i][j]);
        }
        printf("\n");
    }
	
	for(i=0;i<7;i++){
		avg=0;
		sum=0;
		for(j=0;j<3;j++){
			sum=sum+temperature[i][j];
		}
		avg=sum/3;
		printf("The average for day %d is %d\n" , i+1,avg);
	}
}
