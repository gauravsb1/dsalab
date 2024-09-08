#include<stdio.h>
#define max_size 100
void maxrow(int arr[][max_size],int n,int m){
  
    int max_1=-1;
    int max_row_idx=-1;
    
    
    //iterate over each row
    for(int i =0;i<n;i++){
        int j =m-1;
       int count =0;
        
        //check for one in curr row and update count if found
        while( j>=0 && arr[i][j]==1){
        count++;  
        j--;
        
        }

        //update max_1row comparing with count
        if(count>max_1){
            max_1=count;
            max_row_idx=i;
        }
        
    }
        
        if(max_row_idx>=0){
       printf("max no of ones  row:  %d",max_row_idx);

        }
       else{

        printf("no row found");
        }

}
int main(){
    int n ,m;
    printf("enter size of row and col");
    scanf("%d%d",&n,&m);
    int arr[max_size][max_size];
    printf("enter elements in matrix");
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    
    }
    maxrow(arr,n,m);
}