#include<stdio.h>
int main (){

int a[50],n,i, high, low, mid , found=0, key;

printf("Enter  elements : ");
scanf("%d",&n);

printf("Enter sorted elemnts : ",n );
for(i=0;i<n;i++){
    scanf("%d", &a[i]);
}

printf("/nEnter element to search : ");
scanf("%d",&key );

low=0;
high=n-1;
while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==key){
        printf("\nElemt%d found at %d ",key, mid+1);
        found=1;
        break;
    }
    else if(a[mid]<key){
        low=mid+1;
    }
    else
        high =mid-1;
}
if(found==0){
    printf("e;emnt not found");
}

}


