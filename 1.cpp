#include<cstdio>
#include<iostream>
#include<fstream>
#include<sstream> 
using namespace std;
int main(){
	freopen("debug\\1in.txt","r",stdin);  //��debug�ļ����ж�ȡ�������� 
	freopen("debug\\1out.txt","w",stdout);  //�����Խ�������debug�ļ����µ�1out 
	int T, n;
	scanf("%d", &T);   //TΪ���Դ��� 
	while( T-- ){     
		scanf( "%d",&n );   
		for(int i = n; i >= 6; i--){   //��������n���ڵ���6 ����lucky numberС��n 
			bool flag = true;         //�ж�iΪlucky number��flag����ʼΪtrue 
			int x = i;
			while( x != 0){
				if( ( x%10 ) != 6 && ( x%10 ) != 8)  //x���λ������lucky number
				{
				    flag = false; 
					break;       //�ص�whileѭ�� 
				}   
				x /= 10;   //��xÿλ�ϵ�����Ϊlucky numberʱ���ɲ�ִ��if����whileѭ���õ��� 
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
