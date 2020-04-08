#include<stdio.h>
// #include<conio.h>
int main(){
    int i,size,a[50];
    printf("Enter size of an array : ");
    scanf("%d",&size);
    printf("Enter elements of the array : ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements in array are : ");
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    // getch();
    return 0;
}