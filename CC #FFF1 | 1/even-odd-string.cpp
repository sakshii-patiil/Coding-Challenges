#include <iostream>
#include<string.h>
using namespace std;
class sample                                    
{
    public:
    bool check_even_odd(string str);
};

bool sample::check_even_odd(string str)                     //function to check the lenght of string is even or odd
{
    if(str.length()%2==0)
        return true;
    else
        return false;
}
int main()
{
    sample s;
    string str;
    cout<<"Enter string : ";                                //accept the string
    cin>>str;
    
    if(s.check_even_odd(str)==1)
        cout<<"TRUE";
    else
        cout<<"FALSE";
    return 0;
}



