#include <stdio.h>

int main()
{
	int arr[5];
	int i, temp;
	for(i=0;i<5;i++){
		printf("Enter a number:");
		scanf("%d", &arr[i]);
	}
	
	temp=arr[4];
	for(i=4;i>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	for(i=0;i<5;i++){
		printf("The output after shifting the numbers :%d\n", arr[i]);
	}
	
	return 0;
	
}
