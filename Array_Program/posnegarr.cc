#include<stdio.h>
int main(){

int a[50],n,i;

printf("Enter a element in array\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}
printf("Postive Elemeent\n");
for(i=0;i<n;i++){

    if(a[i]>0){

        printf("%d",a[i]);
    }
}

printf("\nNeagtive Elment\n");
    for(i=0;i<n;i++){

    if(a[i]<0){

        printf("%d",a[i]);
    }

}
}

