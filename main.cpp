#include <iostream>
#include<cstring>
#include "calculator.h"

using namespace std;

int main()
{
    int x,y;
    calculator o,p;
    char *s=new char[101];
    char c;
    cout<<"Conventie a notatiilor:"<<endl<<"+ pentru adunare"<<endl<<"- pentru scadere"<<endl<<"* pentru inmultire"<<endl<<"/ pentru impartire"<<endl<<"^ pentru calcularea unei puteri"<<endl<<"r pentru radical"<<endl;
    while(1)
    {
        x=0;
        y=0;
        cin.get(s,101);
        cin.get();
        int i=0,ok=1;
        if(strcmp("Stop",s)==0)
            break;
        for(i=0;i<strlen(s);i++)
        {
            if(strchr("+-/*^r",s[i]))
                {
                c=s[i];
                ok=0;
                }
            else if(ok==1)
                x=x*10+s[i]-'0';
            else y=y*10+s[i]-'0';
        }
        p=x;
        o=y;
        //p.Show();
        if(c=='+')
        {
            p=p+o;
            p.Show();
            cout<<endl;
        }
        if(c=='-')
        {
            p=p-o;
            p.Show();
            cout<<endl;
        }
         if(c=='*')
        {
            p=p*o;
            p.Show();
            cout<<endl;
        }
         if(c=='/')
        {
            p=p/o;
            p.Show();
            cout<<endl;
        }
         if(c=='^')
        {
            p=p^o;
            p.Show();
            cout<<endl;
        }
        if(c=='r')
        {
            cout<<p.Radical();
            cout<<endl;
        }
    }
    return 0;
}
