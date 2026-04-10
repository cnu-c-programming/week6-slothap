#include <stdio.h>

int main(){
    char *names[5] = {"kim", "lee", "park", "choi", "jeong"};

    for(int i = 0; i<5; i++){
        for (int j = 0; ;j++){
            char c = *(*(names + i) + j);
            if(c == '\0')
                break;
            printf("%c", c);
        }
        printf("\n");
    }

    // name                 (char **), 8(포인터 크기)
    // name + i             -> 8*i
    // *(name + i)          문자열의 시작 주소(char *), 1(글자 크기)
    // *(name + i) + j      -> 1*j
    // *(*(name + i) + j)   이동한 위치의 데이터를 c로 함
    return 0;
}