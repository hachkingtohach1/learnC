#include <stdio.h>

void show(){
    printf("This is my Test04\n");
}

void hello(char name[100]){
    printf("Hello %s\n", name);
}

void a(){
    for(int i = 0; i < 5; i++){
        printf("%d\n", i);
    }
}

// so sánh a và b
void sosanh(int a, int b){
    if(a == b){
        printf("a bằng b\n");
        return;
    }
    if(a < b){
        printf("a bé hơn b\n");
    }else{
        printf("a lớn hơn b\n");
    }
}

// sắp xếp mảng theo thứ tự giảm dần
void sortArray(int array[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(array[i] < array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

double nhanvoi5(double a){
    return 5.0 * a;
}

// main để gọi tất cả các hàm trên
int main(){
    char name[] = "Hachkingtohach1";
    int array[100];
    int n = 10;
    show();
    hello(name);
    a();
    sosanh(1, 2);

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    sortArray(array, n);
    for(int i = 0; i < 3; i++){
        printf("%d\n", array[i]);
    }
    printf("%f\n", nhanvoi5(5.0));
    return 0;
}