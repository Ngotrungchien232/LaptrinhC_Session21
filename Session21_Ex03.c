#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	FILE *file;
	char n[100]; // dung de luu chuoi gia tri khi nguoi dung nhap vao
	// sau do ta co the mo file 
	file = fopen("bt01.txt", "a");
	if(file == NULL) {
		printf("loi khi mo file");
		return 1;
	}
	//cho nguoi dung nhap vao chuoi
	printf("moi ban nhap vao chuoi: \n");
	fgets(n, sizeof(n), stdin);
	//loai bo ki tu \n neu co
	n[strcspn(n, "\n")] = 0;
	// sau do ghi chuoi vao file
	fprintf(file, "%s\n", n);
	//thong bao da nhap vao chuoi 
	printf("chuoi cua ban vua nhap vao thanh cong trong tap tin bt01.txt");
	//dong file 
	fclose(file);
	//ket thuc chuong trinh
	return 0;
}
