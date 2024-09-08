#include<stdio.h>
#define maxsize 100
void rotate(int arr[][maxsize],int n){
int sr=0;
int sc=0;
int er=n-1;
int ec=n-1;
int cur=0,prev=0;
   
while(sr<=er && sc<=ec){
      prev=arr[sr+1][sc]; 
    //top
    for(int j =sc;j<=ec;j++){
        cur=arr[sr][j];
        arr[sr][j]=prev;
        prev=cur;
    }
    //right
    for(int i=sr+1;i<=er;i++){
        cur= arr[i][er];
        arr[i][er]=prev;
        prev=cur;

    }
    //bottom
    for(int j=ec-1;j>=sc;j--){
         cur= arr[er][j];
        arr[er][j]=prev;
        prev=cur;
        

    }
    //left
    for(int i=er-1;i>=sr+1;i--){
           cur= arr[i][sc];
        arr[i][sc]=prev;
        prev=cur;
        

    }
sr++;
sc++;
er--;
ec--;


}

printf("rotated matrix is \n");
for(int i =0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d  ",arr[i][j]);
    }
  printf("\n");
}

}


int main(){
    
    int n =0 ;
    printf("enter size of matirx");
    scanf("%d",&n);
    int arr[maxsize][maxsize];
    printf("enter matrix");
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
           scanf("%d" ,&arr[i][j]);
        }
        printf("\n");
    }
rotate(arr,n);

}