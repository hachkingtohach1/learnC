#include <stdio.h>
#include <string.h>

// nhập vào xâu chứa 99 phần tử để xuất ra màn hình
int a(){
    char xau[100];
    scanf("%s", xau);
    printf("%s", xau);
    return 0;
}

// chỉ để đọc khoảng trắng trong các xâu
int b(){
    char a[100], b[100];
    gets(a);
    gets(b);
    printf("%s - %s", a, b);
    return 0;
}

//lấy ra 1 kí tự trong xâu
int c(){
    char a[100];
    int b = 1;
    scanf("%s", a);
    scanf("%d", &b);
    printf("%c", a[b - 1]);
    return 0;
}

//xâu là kí tự luôn kết thúc bằng \0 nên giờ chúng ta sẽ lấy số ký tự của nó để tính số ký tự
int d(){
    int len = 0;
    char str[] = "mycode";
    while (str[len] != '\0') {
        len++;
    }
    printf("%d", len);
    return 0;
}

// này giống cái trên nó
int f(){
    char str[] = "mycode";
    printf("%d", strlen(str));
    return 0;
}

// tìm các số '3' để chuyển sang chữ e
int g(){
    char s[] = "mycode3";
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '3') {
            s[i] = 'e';
        }
    }
    printf("%s", s);
    return 0;
}