#include<stdio.h>
// #include<conio.h>
int main(){
    int i,size,a[50],pos,num;
    printf("Enter size of an array : ");
    scanf("%d",&size);
    printf("Enter elements of the array : ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number which you want to insert : ");
    scanf("%d",&num);
    printf("Enter the postion of that you wanna insert ");
    scanf("%d",&pos);
     if(pos <= 0 || pos > size+1){
         printf("Invalid memory size");
     }
     else
{
       for(i=size-1;i>=pos-1;i--){
           a[i+1]=a[i];


    }
    
     }
    
     a[pos-1]=num;
     size++;

    
    printf("Elements in array are : ");
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    // getch();
    return 0;
}