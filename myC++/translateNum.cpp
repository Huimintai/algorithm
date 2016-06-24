#include<iostream>
#include<cstdlib>
using namespace std;


void solve(char *str , int len)
{
    int i;

    for(i = 0 ; i < len ; )
    {
        switch(str[i])
        {
        case 'y':
            cout<<1;
            i += 2;
            break;
        case 'e':
                cout<<2;
            i += 2;
            break;
        case 's':
            if(str[i + 1] == 'a')
            {
                cout<<3;
                i += 3;
            }
            else
            {
               cout<<4;
                i += 2;
            }
            break;
        case 'w':
            cout<<5;
            i += 2;
            break;
        case 'l':
            cout<<6;
            i += 3;
            break;
        case 'q':
            cout<<7;
            i += 2;
            break;
        case 'b':
            cout<<8;
            i += 2;
            break;
        case 'j':
            cout<<9;
            i += 3;
            break;
        }
    }
        cout<<endl;
}


int main()
{
        char s[12] = "eryiersansi";
        solve(s, 9);
}

