 
#include <stdio.h>

int main()
{
     int arr[] = {5, 2, 8, 1, 3};
    int n = 5;
    int i, j, temp;
    
    //pass 1 ->  arr[] = {5, 2, 8, 1, 3}
    //pass 2 ->  arr[] = {1 ,2, 3,5,8}
    
    for(i=0; i<n-1 ; i++){         //  for(i=0; 2<4 ; i++){ 
        for(j=0; j<n-1-i ; j++){   //    for(j=0; 2<2 ; j++){
            if(arr[j]>arr[j+1]){   //       if(arr[1]>arr[1+1]){ 
                temp = arr[j];      //          tem = arr[j];
                arr[j] = arr[j+1];   //        arr[j] = arr[j+1];
                arr[j+1] = temp;     //        arr[j+1] = temp;
                
            }
        }
    }
    for(int i=0; i<n ; i++){
        printf("%d", arr[i]);
    }
}
