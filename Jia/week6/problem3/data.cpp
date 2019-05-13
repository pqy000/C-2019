#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
#include<string.h> 

void data(){ 
	int x,y,x1,x2,x3; //x,y输入 ，控制数据的范围 
	x = rand()%100 + 1;
        y = rand()%100 + 1;
        x1 = rand()%100 + 1;
        x2 = rand()%100 + 1;
        x3 = rand()%100 + 1; 
	printf("%d %d %d %d %d\n",x, y, x1, x2, x3); 
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

