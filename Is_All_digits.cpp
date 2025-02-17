#include <iostream>
#include <string>
using namespace std;

string sampleCode(string s) {

    if (s.empty())
        return "false";

    for (int i= 0;i<s.size();i++)
    {
    if(!isdigit(s[i]))
        return "false";
    }
return "true";

}
int main()
{   string result;
    string str = "";
    getline(cin, str);
    result = sampleCode(str);
    cout<<result;
}