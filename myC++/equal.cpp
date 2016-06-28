#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

// 整型转换为字符串
string Int2Str(int num){
    string str;
    if(num == 0){
        str = '0';
        return str;
    }//if
    int tmp = num;
    while(num){
        str.insert(str.begin(),num % 10 + '0');
        num /= 10;
    }//while
    return str;
}

/* 
当前计算值              result 
符合的等式个数          count 
等式结果                x
相邻数合并的结果        sequence    1 + 2 + 345  345 就是 sequence 
*/   
void helper(vector<int> &num,int index,int x,int result,int sequence,int &count,string op){
    if(index == num.size()){
        if(result + sequence == x || result - sequence == x){
            ++count;
            if(result + sequence == x){
                op += "+"+Int2Str(sequence);
            }//if
            else{
                op += "-"+Int2Str(sequence);
            }//else
            cout<<op<<endl;
        }//if
        return;
    }//if
    // 连续数
    helper(num,index+1,x,result,sequence * 10 + num[index],count,op);

    // 加法 +
    if(op.size() > 0){
        // 以num[index]为sequence的起点
        helper(num,index+1,x,result + sequence,num[index],count,op+"+"+Int2Str(sequence));
    }//if
    else{
        // 以num[index]为sequence的起点
        helper(num,index+1,x,result + sequence,num[index],count,op+Int2Str(sequence));
    }//else


    if(op.size() > 0){
        // 减法-
        // 以num[index]为sequence的起点
        helper(num,index+1,x,result - sequence,num[index],count,op+"-"+Int2Str(sequence));
    }//if
}

int TransformationEquation(vector<int> num,int x){
    int count = 0;
    string op = "";
    helper(num,1,x,0,num[0],count,op);
    return count;
}

int main(){
    int n,x;
    int num;
    //freopen("C:\\Users\\Administrator\\Desktop\\acm.in","r",stdin);
    while(cin>>n>>x){
        vector<int> vec;
        for(int i = 0;i < n;++i){
            cin>>num;
            vec.push_back(num);
        }//for
        cout<<TransformationEquation(vec,x)<<endl;
    }//while
    return 0;
}
