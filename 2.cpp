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
	char a[100];   //����a��˳�����μ�¼��������s�� ��AZ 
	scanf( "%d",&T );
	while( T-- ){
		scanf( "%s",s );
		int n = strlen(s); //��ȡ�������鳤�� 
		cnt = 0;
		for( int i = 0; i < n; i++){
			if( s[i] == 'A' || s[i] == 'Z' ){   //����AZ��������a�м�¼���� 
				a[ cnt++ ] = s[i];
			}
		}
		for( int i = 0; i < n; i++){
			if( s[i] != 'A' && s[i] != 'Z')   //�ַ����в���A��Z��������� 
			    printf( "%c", s[i] );
			else printf( "%c", a[ --cnt ] );    //��������ַ�����a 
		}
		printf("\n");
	}
	fclose(stdin);
	fclose(stdout); 
	return 0;
}
