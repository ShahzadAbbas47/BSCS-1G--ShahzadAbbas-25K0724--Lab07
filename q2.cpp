#include <stdio.h>

int main()
{
	int arr[10];
	int i, search, count=0;
	for(i=0;i<10;i++){
		printf("Enter a number:");
		scanf("%d", &arr[i]);
	}
	printf("Enter the number you want to search:");
	scanf("%d", &search);
	
	for(i=0;i<10;i++){
		if(search == arr[i]){
			count++;
		}
	}	
		if(count == 0){
			printf("Number not found\n");
		}else{
		printf("The number of times this number is %d\n", count);
		}
	
	return 0;
}
