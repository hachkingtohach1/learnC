
#include <stdio.h>

// xuất ra màn hình dãy số đếm ngược 5 -> 1
int a(){
    int a = 5;
    while (a != 0) {
        printf("%d ", a);
        a--;
    }
    return 0;
}

// nếu i < 1 thì do while và ngược là while
int b(){

    int b = 0;
	do {
		printf("do-while");
	} while (b < 1);

	while (b < 1) {
		printf("while");
	}
    return 0;
}

// in ra màn hình từ 1 -> 100 (nếu 1 chia hết cho 10)
int c(){
    int c = 1;
    do {
        if(c % 10 == 0) {
            printf("%d", c);
        }
        c++;
    } while (c <= 1000);
    return 0;
}



