# include <stdio.h>

void main () {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int min,i;
	float total,avg;
	for (i = 0, min = arr[0]; i < 10; i++) {
		if (min > arr[i]) 
			min = arr[i];
	}
	printf("\n Min : %d",min);
	for (i = 0, total = 0; i < 10; i++) {
		total += arr[i];	
	}
	avg = total / 10;
	printf("\n Avg : %.2f",avg);
}
