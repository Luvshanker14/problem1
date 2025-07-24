#include <iostream>
#include <string>
using namespace std;
string caesarCipher(string message, int shift, bool encode = true) 
{
    string result="";
    shift=shift%26;
    if(!encode)
    shift=26-shift;
    for(char ch:message)
    {
        if (isalpha(ch)) 
        {
            char base=isupper(ch)?'A':'a';
            ch=(ch-base+shift)%26+base;
        }
        result+=ch;
    }
    return result;
}
// int main() 
// {
//     string message;
//     getline(cin, message);
//     int shift;
//     cin>>shift;
//     string encoded=caesarCipher(message,shift,true);
//     string decoded=caesarCipher(encoded,shift,false);
//     cout<<message<<endl;
//     cout<<encoded<<endl;
//     cout<<decoded<<endl;
//     return 0;
// }
