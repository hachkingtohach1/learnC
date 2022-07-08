#include <stdio.h>


// tạo 1 mảng với 10 phần tử
int a(){
    int a[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}

// xuất ra màn hình 1234
int b(){
    int a[4];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4; 
    for(int i = 0; i < 4; i++){
        printf("%d", a[i]);
    }
    return 0;
}

// Nhập vào mảng 2 chiều và xuất ra số đã nhập 
int c(){
    int arr[100][100];
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}
    return 0;
}


