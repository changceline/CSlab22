#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[100]; 
    int numbers[5]; 
    int count = 0;

    printf("Enter an address:\n");
    fgets(input, sizeof(input), stdin); 

    char* token; //紀錄初始位置
    //* context = NULL;//紀錄有沒有切好

    token = strtok(input, ".");
    while (token != NULL) {
        numbers[count] = atoi(token); 
        
        count++;
        token = strtok(input, ".");
    }
    
    if (count != 4) {
        printf("Error in length");
    }
    else {
        if (numbers[0] != 140 || numbers[1] != 115) {
            printf("Error in first two value");
        }
        else {
            if ((numbers[2] > 0 && numbers[2] < 255) && (numbers[3] > 0 && numbers[3] < 255)) {
                printf("Vaild NCU IP");
            }
            else printf("Error in last two value");
        }
    }
    printf("token id %p",token);
    system("pause");
    return 0;
}
   
