/* Enter your solutions in this file */
#include <stdio.h>
#include <limits.h>

int max(int arr[],int n)
{
	int largest=INT_MIN;
	for(int a=0 ;a<n;a++)
	{
        if(largest==INT_MIN || arr[a]>largest)
        {
        	largest=arr[a];
        }
        
	}
	return largest;
}


int min(int arr[],int n)
{
	int smallest=INT_MAX;
	for(int a=0 ;a<n;a++)
	{
        if(smallest==INT_MAX || arr[a]<smallest)
        {
        	smallest=arr[a];
        }
        
	}
	return smallest;
}




float average(int arr[],int n){
	float sum=0;
	for(int i=0;i<n;i++){
        sum=sum+arr[i];
	}
	float avg=sum/n;
	return avg;

}



int mode(int arr[],int n){

	int a = min(arr,n);
	int b = max(arr,n);
	int s = b-a+1;
	int keys[s];
	int counts[s];

	for(int i=0;i<s;i++){

		counts[i]=0;
	}

	for(int i = a;i<=b;i++){

		keys[i-a]=i;
	}
	for(int j=0;j<s;j++){

		for(int i=0;i<n;i++){

			if(keys[j]==arr[i]){

				counts[j]=counts[j]+1;
				

			}
		}

	}
	int t=0;
	int largest=INT_MIN;

	for(int x=0;x<s;x++){
		if(counts[x]>largest){

			largest=counts[x];
			t=x;

		}
	}

	return t+a;
}


int factors(int n,int arr[]){
	int n=t;
	int idx=0;

	for(int i=2;i<=n;i++){
		while(t%i==0){
			t=t/i ;
			arr[idx]=i;
			idx++;

		}
	}
	
	return idx;
}
