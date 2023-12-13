#include<stdio.h>

  main(){
	int count,i,n=0;
	printf("Print Any Number:-");
	scanf("%d",&n);	
	while(n!=0){
		n/=10;
		count++;
	}
	printf("Total number of digits:%d\n",count);
  }

