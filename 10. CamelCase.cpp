//CamelCase
#include<iostream>

using namespace std;

int camelcase(string s) {
    int count =1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<='Z' && s[i]>='A')
            count++;
    }

    return count;
}

int main()
{

    string s;
    getline(cin, s);
	
    int result = camelcase(s);

    cout << result << "\n";

    return 0;
}
