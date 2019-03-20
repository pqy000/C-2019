#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
#include<string.h> 
#define random(x) (rand()%x)

double getRandData(int min,int max)
{
      double m1=(double)(rand()%101)/101;                        // 计算 0，1之间的随机小数,得到的值域近似为(0,1)
      min++;                                                                             //将 区间变为(min+1,max),
      double m2=(double)((rand()%(max-min+1))+min);    //计算 min+1,max 之间的随机整数，得到的值域为[min+1,max]
      m2=m2-1;                                                                        //令值域为[min,max-1]
      return m1+m2;                                                                //返回值域为(min,max),为所求随机浮点数
}

void data(){ 
	// double x,y;//x,y输入 ，控制数据的范围 
	// int flag1 = (random(2) + 1), flag2 = 2;
	// printf("%d %d\n", flag1, flag2);
	// x=getRandData(1, 10000); 
	// y=getRandData(1, 10000); 
	// printf("%.1lf %.1lf\n",x,y); 
	int flag1 = 3;
	int x = rand() % 8 + 1;
	printf("%d\n", x);
} 
void name(int k){ //起名字生成.in 
	char str[111]; 
	sprintf(str,"%d",k); 
	strcat(str,".in"); 
	freopen(str,"w",stdout); 
} 
int main(){ 
	srand(time(NULL)); 
	for(int k=21;k<=23;k++){ 
	name(k);//起名字 
	data();// 
	} 
} 
