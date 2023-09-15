# include <stdio.h>

void main () {
	int i, max, sum;
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	for (i = 0, max = 0; i < 10; i++) {
		if (max <= array[i]) 
			max = array[i];		
	}
	printf("\n Max : %d",max);
	
	for (i = 0,sum = 0; i < 10; i++) {
		sum += array[i];
	}
	printf("\n Sum : %d",sum);
									  
	
	
	
}
