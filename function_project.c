#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void){
    // 문이 5개가 있고, 각 문마다 점점 여러운 수식 퀴즈가 출제 (랜덤)
    // 맞히면 통과, 틀리면 실패

    srand(time(NULL));
    int count = 0; // 맞힌 문제의 개수
    for(int i = 1; i <= 5; i++){
        // x * y = ?
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        // printf("%d * %d ?", num1, num2); 
        showQuestion(i, num1, num2);

        int answer = -1;
        scanf_s("%d", &answer);
        if(answer == -1){
            printf("프로그램을 종료 합니다 \n");
            exit(0); // break와 다르게 프로그램을 종료 시켜주는 메서드이다.
        }else if(answer == num1 * num2){
            // 성공
            success();
            count++;
        }else{
            // 실패
            fail();
        }
    }
    printf("\n\n 당신은 5개의 비밀번호 중 %d 개를 맞췄습니다.\n", count);
    return 0;
}

int getRandomNumber(int level){
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2){
    printf("\n\n\n######### %d 번째 비밀번호 #########\n", level);
    printf("\n\t%d * %d 는? \n\n", num1, num2);
    printf("##################################\n", level);
    printf("\n비밀번호를 입력하세요 (종료 : -1) >> \n");

}

void success(){
    printf("성공입니다. \n");
}
void fail(){
    printf("실패입니다. \n");
}