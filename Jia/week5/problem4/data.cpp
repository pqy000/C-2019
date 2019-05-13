#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
#include<string.h> 

void data(){ 
	int x,y;//x,y输入 ，控制数据的范围 
	int x1, y1;
        x=rand()%100 + 1;
        y=rand()%100 + 1;
        x1 = rand() % 100 + 200;
        y1 = rand() % 100 + 200; 
	printf("%d %d %d %d\n",x, y, x1, y1); 
} void name(int k){ //起名字生成.in 
	char str[111]; 
	sprintf(str,"%d",k); 
	strcat(str,".in"); 
	freopen(str,"w",stdout); 
} int main(){ 
	srand(time(NULL)); 
	for(int k=1;k<=10;k++){ 
	name(k);//起名字 
	data();// 
	} 
} 

