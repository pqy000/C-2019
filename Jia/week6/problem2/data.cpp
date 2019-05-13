#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
#include<string.h> 

void data(){ 
	int n,temp;//x,y输入 ，控制数据的范围 
        n = rand()%50 + 1;
        printf("%d\n",n);
        for(int i=0; i<n; i++) {
                temp = rand() % 50 + 1;
                printf("%d ", temp);
        }
        printf("\n");
} void name(int k){ //起名字生成.in 
	char str[111]; 
	sprintf(str,"%d",k); 
	strcat(str,".in"); 
	freopen(str,"w",stdout); 
} int main(){ 
	srand(time(NULL)); 
	for(int k=6;k<=10;k++){ 
	name(k);//起名字 
	data();// 
	} 
} 

