#include<stdio.h>
#include<stdlib.h>

int main(void){
	
		FILE *fptr;
		char ch;
		fptr=fopen("data.txt","r");
		if(fptr!=NULL){
			while((ch=getc(fptr))!=EOF){  //bug�X�{���a�� 
				
				printf("%c", ch);
			}
			fclose(fptr);
		}
		else{
			printf("3A713244 �B�t�a");
		}
		
		system("pause");
		return 0;
} 
