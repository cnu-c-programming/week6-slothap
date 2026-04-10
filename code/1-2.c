#include <stdio.h>

int main(){
    int arr2[2][4] = {{1,2,3,4}, {5,6,7,8}};

    int (*p)[4];

    for(int i = 0; i <2 ; i++){
        p = arr2 + i; //int[4] -> 4*i만큼
        for(int j = 0; j < 4; j++){
            printf("%d\n", *(*p + j)); //p -> [0]/[4]->(+j: *p는 int) -> +j만큼
        }
    }
    // 바깥쪽 루프 - p = arr2 + i;
    // int[4] -> + 4*i만큼

    // 안쪽 루프- *(*p + j)
    // p -> [0]/[4] -> (*p는 int 시작 주소) -> +j 만큼

    return 0;
}