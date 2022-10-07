#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,x;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&n, &x);
	    n=n*x;
	    if(n%4==0)
	       printf("%d\n",n/4);
	    else
	       printf("%d\n",(n/4)+1);
	    i++;
	}while(i<t);
	return 0;
}

