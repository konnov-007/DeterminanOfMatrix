#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
const int N=4;

int main()
{
	printf("\t\t\t DETERMINANT OF MATRIX \n \n ");
	
     int select, size, size2, i, j;
     char st[4], st1[]="no";
     float det2, det3, det4, a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, 
	 a42, a43, a44, mas[N][N];
       printf("\t\t\t\t\t\t\t\t Konnov Ilya\n\n");
      
      
      clock_t process;  //начало отсчета времени
process=clock();
      
 
       //ƒ≈“≈–ћ»ЌјЌ“ ћј“–»÷џ
do{ //цикл пока не напишем "no"

     do //цикл do до того момента пока мы не введем 2, 3 либо 4
     {
     printf("\n Input size of matrix 2, 3 or 4 (2x2, 3x3, 4x4): ");
     scanf("%d",&size); //вводим размера матрицы (при вводе 2 матрица 2х2, вводе 3 матрицы 3х3, вводе 4 матрица 4х4)



     if(size==2)
     {
     printf("\n Input elements of matrix (a11, a12, a21, a22): ");
   	 scanf("\n %f %f %f %f", &a11, &a12, &a21, &a22);
   	mas[0][0]=a11; mas[0][1]=a12; mas[1][0]=a21; mas[1][1]=a22;
printf("\n \n Your matrix: \n ");
for(i=0;i<2;i++){
	printf("\n");
for(j=0;j<2;j++){
if((int)a11==a11&&(int)a12==a12&&(int)a21==a21&&(int)a22==a22)
	printf("%3.0f ", mas[i][j]);
else printf("%3.2f ", mas[i][j]);
}}
printf("\n \n");
				det2=a11*a22-a21*a12;
     printf("\n Determinant of the matrix is %2.2f. \n \n", det2);
        }



     if(size==3)
     {
     printf("\n Input elements of matrix (a11, a12, a13, a21, a22, a23, a31, a32, a33): ");
     scanf("\n %f %f %f %f %f %f %f %f %f", &a11, &a12, &a13, &a21, &a22, &a23, &a31, &a32, &a33);
    mas[0][0]=a11; mas[0][1]=a12; mas[0][2]=a13; mas[1][0]=a21; mas[1][1]=a22; mas[1][2]=a23; mas[2][0]=a31; mas[2][1]=a32; mas[2][2]=a33; 
for(i=0;i<3;i++){
	printf("\n");
for(j=0;j<3;j++){
if((int)a11==a11&&(int)a12==a12&&(int)a13==a13&&(int)a21==a21&&(int)a22==a22&&(int)a23==a23&&(int)a31==a31&&(int)a32==a32&&(int)a33==a33)
	printf("%3.0f ", mas[i][j]);
else printf("%3.2f ", mas[i][j]);
}}
	 det3=a11*a22*a33+a12*a23*a31+a13*a21*a32-a11*a23*a32-a12*a21*a33-a13*a22*a31;
       printf("\n\n Determinant of the matrix is %2.2f. \n \n", det3);
       }




       if(size==4)
       {
        printf("\n Input elements of matrix (a11, a12, a13, a14 a21, a22, a23, a24 a31, a32, a33, a34): ");
     scanf("\n %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f", &a11, &a12, &a13, &a14, &a21, &a22, 
	 &a23, &a24, &a31, &a32, &a33, &a34, &a41, &a42, &a43, &a44);
    
	 mas[0][0]=a11; mas[0][1]=a12; mas[0][2]=a13; mas[0][3]=a14; mas[1][0]=a21; mas[1][1]=a22; mas[1][2]=a23; mas[1][3]=a24; 
	 mas[2][0]=a31; mas[2][1]=a32; mas[2][2]=a33; mas[2][3]=a34; mas[3][0]=a41;mas[3][1]=a42;mas[3][2]=a43;mas[3][3]=a44;
for(i=0;i<4;i++){
	printf("\n");
for(j=0;j<4;j++){
if((int)a11==a11&&(int)a12==a12&&(int)a13==a13&&(int)a14==a14&&(int)a21==a21&&(int)a22==a22&&(int)a23==a23&&(int)a24==a24&&
(int)a31==a31&&(int)a32==a32&&(int)a33==a33&&(int)a34==a34&&(int)a41==a41&&(int)a42==a42&&(int)a43==a43&&(int)a44==a44)
	printf("%3.0f ", mas[i][j]);
else printf("%3.2f ", mas[i][j]);
}} 
     det4=a11*(a22*a33*a44+a23*a34*a42+a24*a32*a43-a22*a34*a43-a23*a32*a44-a24*a33*a42)-a12*(a21*a33*a44+
	 a23*a34*a41+a24*a31*a43-a21*a34*a43-a23*a31*a44-a24*a33*a41)+
	 a13*(a21*a32*a44+a22*a34*a41+a24*a31*a42-a21*a34*a42-a22*a31*a44-a24*a32*a41)-
	 a14*(a21*a32*a43+a22*a33*a41+a23*a32*a42-a21*a33*a42-a22*a31*a43-a23*a32*a41);
       printf("\n\n Determinant of the matrix is %2.2f. \n \n", det4);
       }

     
	 
if(size<2||size>4)
       printf("\n You may use only 2x2, 3x3 and 4x4 sizes, try again \n");
       }while(size<2 || size>4);


  printf("Wanna solve again? Write 'yes' if you want, 'no' if you don't:\n");
  scanf("%s", st);
}while(st[0,1]!=st1[0,1]);
            
            process = clock() - process; //конец отсчета времени, из конечного времени отнимаем начальное 
printf("\nTime %2.2f\n", (double)process/CLOCKS_PER_SEC);
                       printf("\n");    
    
    
    return 0;
}
