/*
Sample Input
pretty
women
walking
down
the
street
Sample Output
e
nw
et
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
	string in1,in2;
	vector<char> save; //vector�� ���� ���� ����; 
	while(getline(cin,in1))
	{
		save.clear(); //����� �ʱ�ȭ; 
		getline(cin,in2);
		for(int i=0;i<in1.length();i++)
		{
			for(int j=0;j<in2.length();j++)
			{
				if(in1[i]==in2[j]) //������ ������ �����ϰ� , ����, �ߺ� ��� ����; 
				{
					save.push_back(in1[i]);
					in2.erase(j,1);
					break;
				}
			}
		}
		for(int i=0;i<save.size();i++) //sort�� ���� ���ϱ�; 
		{
			for(int j=i;j<save.size();j++)
			{
				if(save[i]>save[j])
				{
					char temp=save[i];
					save[i]=save[j];
					save[j]=temp;
				}
			}
		}
		for(int i=0;i<save.size();i++) //���; 
		{
			cout<<save[i];
		}
		cout<<endl;
	}
return 0;
}

