#include <stdio.h>
#include <stdlib.h>
//mang tinh>> neu phan tu nao khong co thi mac dinh =0
int a[10][10]={ {77,68},
                {96,87,89,78},
                {70,90,86}};

int input(int a[][10],int soSV,int soMH){
    int i,j;
    for(i=0;i<soSV;i++){
        printf("SV thu %d:\n",i+1);
        for(j=0;j<soMH;j++){
            printf("Mon%d :",j+1);
            scanf("%d",&a[3+i][j]);
        }
    }
}
void output(int a[][10],int soSV,int soMH){
    int i,j;
    if(soMH<4)//TH KHONH NHAP THEM
        soMH=4;
    for(i=0;i<3+soSV;i++){
        printf("\nstudentGrades[%d]:\t",i+1);
        for(j=0;j<soMH;j++){
            printf("%d\t",a[i][j]);
        }
    }
}
void timDiemMax(int a[][10],int soSV,int soMH){
    if(soMH<4)
        soMH=4;
    int i,j,max=a[0][0],min=a[0][0];
    for(i=0;i<3+soSV;i++){
        for(j=0;j<soMH;j++){
            if(a[i][j]>max)
                max=a[i][j];
            if(a[i][j]<min&&a[i][j]!=0)
                min=a[i][j];
        }
    }
    printf("\n=>>Diem max la: %d",max);
    printf("\n=>>Diem min la: %d",min);
}
void tinhTrungBinh(int a[][10],int soSV,int soMH){
    if(soMH<4) soMH=4;
    int i,j;
    float diemTB[10];
    for(i=0;i<3+soSV;i++){
        int sum=0,dem=0;
        for(j=0;j<soMH;j++){
            if(a[i][j]!=0){
                 sum+=a[i][j];
                 dem++;
            }
        }
        diemTB[i]=(sum*1.0)/dem;
    }
    for(i=0;i<3+soSV;i++)
        printf("\n>>Diem TB SV%d= %.2f",i+1,diemTB[i]);
}
void menu(int a[][10]){
    int luachon;
    int soSV=0,soMH=0;
    do{
    printf("\n\t===QUAN LY SINH VIEN==");
    printf("\n1.Them moi mot sinh vien va thong tin diem.");
    printf("\n2.In ra thong tin bang diem cua sinh vien.");
    printf("\n3.Tim kiem va in ra man hinh diem thi cao nhat.");
    printf("\n4.Tim kiem va in ra man hinh diem thi thap nhat.");
    printf("\n5.Tinh toan in ra diem trung binh moi sinh vien.");;
    printf("\n6.Thoat khoi chuong trinh!");
    printf("\nNhap lua chon:"); scanf("%d",&luachon);
    switch(luachon){
            case 1:
                printf("\n=>>Nhap so SV them:");scanf("%d",&soSV);
                printf("\n=>>Nhap so Mon Hoc: ");scanf("%d",&soMH);
                input(a,soSV,soMH);
                break;
            case 2:
                printf("\n===In danh sach sinh vien===\n");
                output(a,soSV,soMH);
                break;
            case 3:
                //Lam gop voi ham tim min
                printf("\n===In diem Thi cao nhat===\n");
                timDiemMax(a,soSV,soMH);
                break;
            case 4:
                //Lam gop voi ham tim max luon
                printf("\n===In diem Thi thap nhat===\n");
                timDiemMax(a,soSV,soMH);
                break;
            case 5:
                printf("\nTinh trung binh");
                tinhTrungBinh(a,soSV,soMH);
                break;
        }

    }while(luachon!=6);
    //Neu khong dung do-while>>>goto start;
}

int main(){
    menu(a);
    return 0;
}
