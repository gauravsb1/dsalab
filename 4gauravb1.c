#include<stdio.h>
#define max_size 100

 int staircasesearch(int arr[][max_size],int n ){
    int row=0;
    int col=n-1;
    int key ;
    printf("enter key");
    scanf("%d",&key);
    
    
    while(row<n && col>=0){
        if(arr[row][col]==key){
            printf("key found  at idx :(%d,%d)",row,col);
            return 1;
        }
        else if(arr[row][col]>key){
            col--;
        }
        else{
            row++;
        }
    }
    printf("key not found");
    return 0;
}
int main(){
    int n;
    int arr[max_size][max_size];
    printf("enter size of row and col");
    scanf("%d",&n);
    printf("enter matrix");
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
   
staircasesearch(arr,n);

}