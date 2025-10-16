#include <stdio.h>

int main(){
	int arr[10], dup[100]={0};
	int i, count;
	
	for(i=0;i<10;i++){
		printf("Enter numbers:");
		scanf("%d", &arr[i]);
	
	if(dup[arr[i]] == 1){
		arr[i]= -1;
	}else{
		dup[arr[i]]=1;
	}
}
	for(i=0;i<10;i++){
	printf(" %d\n", arr[i]);
	}
	return 0;
}
