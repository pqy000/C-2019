#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
#include<string.h> 

void data(){ 
	int x,y;//x,y输入 ，控制数据的范围 
	x=rand()%100; 
	y=rand()%10+1; 
	printf("%d %d\n",x,y); 
} void name(int k){ //起名字生成.in 
	char str[111]; 
	sprintf(str,"%d",k); 
	strcat(str,".in"); 
	freopen(str,"w",stdout); 
} int main(){ 
	srand(time(NULL)); 
	for(int k=1;k<=5;k++){ 
	name(k);//起名字 
	data();// 
	} 
} 
