
#include<stdio.h>
void printarray (int n,int arr[]){
	printf("Enter elements of array = ");
	for(int i = 0;i<n;i++){
	scanf("%d",&arr[i]);
}
	printf("Entered elements are = ");
	for(int i = 0;i<n;i++){
	printf("%d ",arr[i]);
		
	}
}

int main(){
	int array[100],n;
	printf("enter no of elements = ");
	scanf("%d",&n);
	printarray(n,array);
	
	
}
