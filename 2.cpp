#include<cstdio>
#include<iostream>
#include<cstring> 
using namespace std;
int main(){
	freopen("debug//2in.txt","r",stdin);
	freopen("debug//2out.txt","w",stdout);
	int T;
	char s[100];
	int cnt;
	char a[100];   //数组a按顺序依次记录输入数组s中 的AZ 
	scanf( "%d",&T );
	while( T-- ){
		scanf( "%s",s );
		int n = strlen(s); //获取输入数组长度 
		cnt = 0;
		for( int i = 0; i < n; i++){
			if( s[i] == 'A' || s[i] == 'Z' ){   //碰到AZ则在数组a中记录下来 
				a[ cnt++ ] = s[i];
			}
		}
		for( int i = 0; i < n; i++){
			if( s[i] != 'A' && s[i] != 'Z')   //字符串中不是A或Z则正常输出 
			    printf( "%c", s[i] );
			else printf( "%c", a[ --cnt ] );    //逆序输出字符数组a 
		}
		printf("\n");
	}
	fclose(stdin);
	fclose(stdout); 
	return 0;
}
