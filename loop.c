#include <stdio.h>

int main(void){
    // printf("Hello World\n");
    // printf("Hello World\n");
    // printf("Hello World\n");
    // printf("Hello World\n");
    // printf("Hello World\n");
    // printf("Hello World\n");
    // printf("Hello World\n");
    // printf("Hello World\n");
    // printf("Hello World\n");

    // ++ 뿔뿔
    // int a = 10;
    // printf("a 는 %d\n", a);
    // a++;
    // printf("a 는 %d\n", a);
    // a++;
    // printf("a 는 %d\n", a);

    // int b = 20;
    // printf("b 는 %d\n", ++b);
    // printf("b 는 %d\n", b++);
    // printf("b 는 %d\n", b);

    // int i = 1;
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    
    // 반복문
    // for, while, do while

    // for (선언; 조건 증감)
    // for (int i = 1; i <=10; i++){
    //     printf("Hello World %d\n", i);
    // }

    // while(조건){ }
    // int i = 1;
    // while (i <= 10){
    //     printf("Hello World %d\n", i);
    // }

    // do { } while (조건);
    // int i=1;
    // do {
    //     printf("Hello World %d\n", i++);
    // } while (i<=10);

    // for(int i = 1; i <=3; i++){
    //     printf("첫 번째 반복문 : %d\n", i);
    //     for(int j = 1; j <=3; j++){
    //         printf("두 번째 반복문 : %d\n", j);
    //     }
    // }

    // 구구단
    // 2 * 1 = 2
    // 2 * 2 = 4
    // 2 * 3 = 6
    // 2 * 4 = 8
    // 2 * 5 = 10
    // 9 * 9 = 81
    
    // for (int i = 2; i <=9; i++){
    //     for (int j = 1; j <=9; j++){
    //         printf("%d * %d = %d\n", i, j, i*j);
    //     }
    //     printf("\n");
    // }

    /*
    *
    **
    ***
    ****
    *****
    */
//    for(int i = 1; i < 6; i++){
//        for(int j = 1; j < i; j++){
//            printf("*");
//        }
//        printf("\n");
//    }

    /*
        *
       ** 
      ***
     ****
    *****
    */
    // for(int i = 1; i < 6; i++){
    //     for(int j = 5; j > i; j--){
    //         printf(" ");
    //     }
    //     for(int k = 1; k <= i; k++){
    //         printf("*");
    //     }
        
    //     printf("\n");
    // }

    // 피라미드를 쌓아라 -- 프로젝트

    /*
    *       *
    *      ***
    *     *****
    *    *******
    * */
   
   // 짝수 구분 실험
//    printf("%d\n", 10%2);
//    printf("%d\n", 10%3);
//    printf("%d\n", 10%5);
//    printf("%d\n", 10%7);
//    printf("%d\n", 6%2);
//    printf("%d\n", 108%2);
//    printf("%d\n", 1%2);
//    printf("%d\n", 3%2);

//    for(int i = 1; i < 6 ; i++){
//        if(i%2==1){
//             for(int j = 4; j >= i; j-=2){ // 왼쪽 빈 공간
//                 printf(" ");
//             }
//             for(int k = 1; k <= i ; k ++){ // 별이 찍히는 장소
//                 printf("*");
//             }
//             printf("\n"); // 줄 바꿈
//        }
//    }

    return 0;
}