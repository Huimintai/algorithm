/*
 * 输入一串用空格隔开的数字串，对于数字串的奇数位按升序排序，偶数位按降序排序。
 * 示例输入：
 * 4 6 2 3 6 7 8 1
 * 处理过程：
 * 奇数位：4 2 6 8 升序排序结果： 2 4 6 8
 * 偶数位：6 3 7 1 降序排序结果： 7 6 3 1
 * 结果输出：2 7 4 6 6 3 8 1
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int num;
	int arr[1000];
	int output[1000];
	int odd[1000];
	int oNum = 0;
	int even[1000];
	int eNum = 0;
	char c;
	int count = 0;
	while((cin>>num).get(c))
	{
		arr[count++] = num;
		if(c == '\n')
		{
			break;
		}
	}
	for(int i=0; i<count; i++)
	{
		odd[oNum++] = arr[i++];
		even[eNum++] = arr[i];
	}
	sort(odd, odd+oNum);
	sort(even, even+eNum);
	int oddNum = 0;
	int evenNum = eNum - 1;
	for(int j=0; j<count; j++)
	{
		output[j++] = odd[oddNum++];
		output[j] = even[evenNum--];
	}
	for(int k=0; k<count; k++)
	{
		cout<<output[k]<<" ";
	}
	cout<<endl;
	return 0;

}
