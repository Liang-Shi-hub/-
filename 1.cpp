#include<cstdio>
#include<iostream>
#include<fstream>
#include<sstream> 
using namespace std;
int main(){
	freopen("debug\\1.in","r",stdin);  //从debug文件夹中读取测试数据 
	freopen("debug\\1.out","w",stdout);  //将测试结果输出到debug文件夹下的1.out 
	int T, n;
	scanf("%d", &T);   //T为测试次数 
	while( T-- ){     
		scanf( "%d",&n );   
		for(int i = n; i >= 6; i--){   //根据题意n大于等于6 最大的lucky number小于n 
			bool flag = true;         //判断i为lucky number的flag，初始为true 
			int x = i;
			while( x != 0){
				if( ( x%10 ) != 6 && ( x%10 ) != 8)  //x最低位数不是lucky number
				{
				    flag = false; 
					break;       //回到while循环 
				}   
				x /= 10;   //当x每位上的数都为lucky number时方可不执行if跳出while循环得到答案 
			}
			
			if( flag ) 
			{    
			    //cout << i << endl;
			    printf("%d\n",i);
				break; 
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
