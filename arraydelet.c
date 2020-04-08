#include<stdio.h>
// #include<conio.h>
int main(){
    int i,size,a[50],pos;
    printf("Enter size of an array : ");
    scanf("%d",&size);
    printf("Enter elements of the array : ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Form which position do you want to delete : ");
    scanf("%d",&pos);
    if(pos <= 0 || pos > size){
        printf("Invalid position");
    }
    else{
        for(i=pos-1;i<size-1;i++){
            a[i]=a[i+1];
        }
    }
    size--;
    printf("Elements in array are : ");
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    // getch();
    return 0;
}