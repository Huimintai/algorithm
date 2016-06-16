#include<iostream>

using namespace std;

int calculateScore(int* score, int* judgeType, int n)
{
	int judge1 = 0;
	int score1 = 0;
	int judge2 = 0;
	int score2 = 0;
	int finScore = 0;
	for(int i=0; i<n; i++)
	{
		if(judgeType[i] == 1)
		{
			score1 = score1 + score[i];
			judge1 ++;
		}
		else
		{
			score2 = score2 + score[i];
			judge2 ++;
		}
	}
	if(judge2 == 0)
	{
		finScore = score1 / judge1;
		return finScore;
	}
	else
	{
		finScore = score1 / judge1 * 0.6 + score2 / judge2 * 0.4;
		return finScore;
	}
}

int main()
{
	int a[5] = {2,5,1,8,9};
	int judge[5] = {1,2,1,2,1};
	cout<<calculateScore(a, judge, 5)<<endl;
}
