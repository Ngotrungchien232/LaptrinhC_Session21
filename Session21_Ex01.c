//luu file thanh bt01.txt 

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *file;
	
	//1 tao file
	
	//2 mo file
	file = fopen("bt01.txt", "w");
	if(file == NULL) {
		printf("loi tao hoac mo file");
		return 0;
	}
	
	//3 ghi hoac doc file 
	char n[50];
	printf("moi ban nhap vao mot chuoi ki tu: ");
	fgets(n, sizeof(n), stdin);
	fprintf("chuoi ban vua nhap la: %s", n);
	
	//4 dong file 
	fclose(file);
	
	//ket thuc chuong trinh
	return 0;
	
	//ket thuc chuong trinh 
	return 0;
}
