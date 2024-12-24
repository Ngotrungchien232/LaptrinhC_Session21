#include<stdio.h>
#include<stdlib.h>

//mo file tu bai tap 1 da luu
int main() {
	// dau tien ta phia tao con tro
	FILE *file;
	// tao mot kieu du lieu va mot bien de co the luu gia tri dau tien
	char ch;
	// tien hanh mo file tu bai tap 1 
	file = fopen("bt01.txt", "r");
	// them dieu kien
	if(file == NULL) {
		printf("loi tao hoac mo file ");
		return 0;
	}
	//muon kiem tra ki tu dau tien in co dung khong thi ta len in xem ta vua nhap gi tu ki tu truoc do xem no nhu the nao 
	  printf("Noi dung file la: ");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch); // in ra tung ki tu
    }
    printf("\n");

    //dat lai con tro file vao vi tri dau file
    fseek(file, 0, SEEK_SET); 

	//3. tien hanh doc hoac ghi du lieu
	ch =fgetc(file);
	if(ch == EOF) {
		printf("chuong trinh cua ban bi loi");
	} else {
		printf("ki tu dau tien co trong chuoi la: %c", ch);
	}
	//tien hanh dong file da mo
	fclose(file);
	//ket thuc chuong trinh 
	return 0;
}
