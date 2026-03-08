#include<stdio.h>
int main(){
	int a[10],pos,n=5;
	for (int i=0;i<n;i++){
		printf("enter a number for a=[%d]",i);
		scanf("%d",&a[i]);
	     }
	    
	    printf("enter position");
	    
	    for (int i=pos-1;i<n-1;i++){
	    	a[1]=a[i+1];}
	    	n--;
	    	for(int i=0;i<n;i++){
	    		printf("%d",a[i]);
			}
			return 0;
	}

