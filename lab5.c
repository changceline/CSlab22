#include <stdio.h>
#include <stdlib.h>
int main(){
    float n[10000];//若使用動態陣列容易出事，所以先給陣列大小
    float total=0; int n_size = 0; //total = 陣列加總、n_size = 陣列大小
    float a;//輸入暫存到a

    //輸入陣列數值
    while (1){
        printf("enter a element:");
        scanf("%f",&a);
        if (a == 0) break; // a=0 跳出迴圈
        n[n_size] = a;
        n_size++;
    }
    //加總陣列數值
    for(int i=0 ; i<n_size ; i++){
        total += n[i];
    }

    float part;
    part = total / 3;
    int a1=0 , a2=0;//切割陣列做記號
    float total_1 = 0 , total_2 = 0 , total_3 = 0;//加總陣列分組數值
    
    for(int i=0 ; i<n_size ; i++){
        if(part == total_1) break;
        a1++;
        total_1 += n[i];
    }
    for(int i=a1; i<n_size ; i++){
        if(part == total_2) break;
        a2++;
        total_2 += n[i];
    }

    for(int i=0 ; i<n_size ; i++){
        if(part == total_3) break;
        
        total_3 += n[i];
    }

    printf("%f\n",part);
    // 輸出陣列分組
    if((total_1 == total_2) && (total_2 == total_3)){
        printf("True\n");
        printf("1:\n");
        for(int i=0;i<a1;i++){
            printf("%f ",n[i]);
        }
        printf("\n");
        printf("2:\n");
        for(int i=a1;i<(a1+a2);i++){
            printf("%f ",n[i]);
        }
        
        printf("\n");
        printf("3:\n");
        for(int i=(a1+a2);i<n_size;i++){
            printf("%f ",n[i]);
        }
    }
    else {printf("False");}
    
    return 0;

}
