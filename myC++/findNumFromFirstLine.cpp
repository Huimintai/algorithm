/*输入一行数字：123 423 5645 875 186523
 * 在输入第二行：23
 * 将第一行中含有第二行中“23”的数输出并排序
 * 结果即：123 423 186523
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[10000];
	int output[1000];
	int temp;
	int count=0;
	char c;
	while((cin>>temp).get(c))
	{
     
		arr[count++]=temp;
		if(c=='\n')
		{
			break;
		}
	}
	
	int tmp;
	cin>>tmp;
	int t = tmp;
	int index = 1;
	while(tmp != 0)
	{
		index *= 10;
		tmp /= 10;
	}
	
	int num  = 0;
	for(int i=0; i<count; i++)
	{
		if(arr[i] % index == t)
		{
			output[num++] = arr[i];
		}
	}
	sort(output, output+num);
	for(int j=0; j<num; j++)
	{
		cout<<output[j]<<" ";
	}
	cout<<endl;
	return 0;
 
}
