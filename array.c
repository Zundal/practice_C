#include <stdio.h>

int main(void)
{
    // 배열
    // int subway_1 = 30; // 지하철 1화에 30명이 타고 있다.
    // int subway_2 = 40;
    // int subway_3 = 50;

    // printf("지하철 1호차에 %d 몇이 타고 있습니다. \n", subway_1);
    // printf("지하철 2호차에 %d 몇이 타고 있습니다. \n", subway_2);
    // printf("지하철 3호차에 %d 몇이 타고 있습니다. \n", subway_3);

    // 여러개의 변수를 합께, 동시에 생성
    // int subway_array[3]; // [0][1][2]
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for(int i = 0; i < 3; i++){
    //     printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i+1, subway_array[i]);
    // }

    // 값 설정 방법
    // int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    // for(int i = 0; i < 10; i ++ ){
    //     printf("%d\n", arr[i]);
    // }

    // 값은 초기화를 반드시 해야한다.
    // int arr[10];
    // for(int i = 0; i < 10; i ++ ){
    //     printf("%d\n", arr[i]);
    // }

    // 배열 크기는 항상 상수로 선언
    // int size = 10;
    // int arr[10] = {1,2}; // 3번째 값부터는 자동으로 '0'초기화 된다.
    // for(int i = 0; i < 10; i++){
    //     printf("%d\n", arr[i]);
    // }
    // int arr[] = {1,2}; // arr[2]

    // float arr_f[5] = {1.0f,2.0f,3.0f};
    // for(int i = 0; i < 10; i++){
    //     printf("%.2f\n", arr_f[i]);
    // }

    // 문자 vs 문자열
    // char c = 'A';
    // printf("%c" ,c);

    // 문자열 끝에는 '끝'을 의미하는 NULL문자 '\0'이 포함되어야한다. 원하는 문자열 +1 을 해주어야 한다.
    // char str[6] = "coding";
    // char str[7] = "coding";
    // printf("%s", str);

    // 자동으로 NULL문자까지 삽입해준다.
    // char str[] = "coding";
    // printf("%s\n",str);
    // printf("%d\n",sizeof(str));

    // for(int i = 0 ; i < sizeof(str); i++){
    //     printf("%c\n", str[i]);
    // }

    // 영어 1글자 1byte
    // 한글 1글자 2byte
    // char kor[] = "나도코딩";
    // printf("%s\n", kor);
    // printf("%d\n", sizeof(kor));

    // \0은 Null문자
    // char c_array[7] = {'c','o','d','i','n','g','\0'};
    // printf("%s\n", c_array);

    // char c_array[10] = {'c','o','d','i','n','g'};
    // printf("%s\n", c_array);
    // for (int i = 0; i < sizeof(c_array); i++){
    //     printf("%c\n", c_array[i]);
    //     printf("%d\n", c_array[i]); // ascii code 값으로 출력
    // }

    

    return 0;
}