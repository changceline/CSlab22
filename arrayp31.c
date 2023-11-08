#include<stdio.h>
#define SIZE 99

void bubbleSort(int a[]);
void median(int answer[]);
void printArray(const int a[]);

int main(){
    int frequency[10] = {0};
    int response[ SIZE ] = { 6,7,8,9,8,7, 8, 9, 8, 9,
                                7,8,9,5,9,8, 7, 8, 7, 8, 
                                6,7,8,9,3,9, 8, 7, 8, 7, 
                                7,8,9,8,9,8, 9, 7, 8, 9, 
                                6,7,8,7,8,7, 9, 8, 9, 2, 
                                7,8,9,8,9,8, 9, 7, 5, 3, 
                                5,6,7,2,5,3, 9, 4, 6, 4, 
                                7,8,9,6,8,7, 8, 9, 7, 8, 
                                7,4,4,2,5,3, 8, 7, 5, 6, 
                                4,5,6,1,6,5, 7, 8, 7};
    median(response);
    return 0;
}

void median (int answer[]){ //answer 是傳位置
    printf("\n%s\n%s\n%s\n%s","********", " Median", "********", "The unsorted array of responses is" );//輸出初始陣列
    printArray(answer);
    bubbleSort( answer); //傳陣列位置
    printf("\n\nThe sorted array is");
    printArray(answer);
    //傳陣列中間那個
    printf("\n\nThe median is element %d of\n" "the sorted %d element array.\n" "For this run the median is %d\n\n", SIZE / 2, SIZE,answer[SIZE/2]);
}

void printArray( const int a[]){
    int j;
    for(j=0; j<SIZE;j++){
        if( j%20 == 0){ //輸出變好看而已
            printf("\n");
        }
       printf("%2d",a[j]); 
    }
    
}

void bubbleSort( int a[] ) {

    int pass; 
    int j;
    int hold; 

    for(pass=1;pass<SIZE;pass++){ /* loop to control number of comparisons per pass */
        for ( j = 0; j < SIZE - 1; j++ ) {
       
            if ( a[ j ] > a[ j + 1 ] ) {
            hold = a[ j ];
            a[ j ] = a[ j + 1 ];
            a[ j + 1 ] = hold;
            } 

        }
    }
}