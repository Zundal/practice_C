#include <stdio.h>

int main(void){
    // 포인터

    // [철수] : 101호 -> 메모리 공간의 주소
    // [영희] : 201호
    // [민수] : 301호
    // 각 문 앞에 '암호' 가 걸려있음
    int tom = 1;
    int ann = 2;
    int kim = 3;
    printf("TOM네 주소 : %d, 암호 : %d\n", &tom, tom);
    printf("ANN네 주소 : %d, 암호 : %d\n", &ann, ann);
    printf("KIM네 주소 : %d, 암호 : %d\n", &kim, kim);

    // 미션맨 !
    // 첫 번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
    int * missionman; // 포인터 변수
    missionman = &tom;
    printf("MISSIONMAN이 방문하는 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);

    missionman = &ann;
    printf("MISSIONMAN이 방문하는 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);

    missionman = &kim;
    printf("MISSIONMAN이 방문하는 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);

    // 두 번째 미션 : 각 암호에 3을 곱해라
    missionman = &tom;
    *missionman = *missionman * 3;
    printf("MISSIONMAN이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);
    
    missionman = &ann;
    *missionman = *missionman * 3;
    printf("MISSIONMAN이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);
    
    missionman = &kim;
    *missionman = *missionman * 3;
    printf("MISSIONMAN이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);
    return 0;
}