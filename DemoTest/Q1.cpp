#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int solution(int n)
{
    int answer = 0;
    string str = to_string(n);
    for(int i=0;i<str.size();i++) {
        string tmp (1,str[i]);
        answer += stoi(tmp);
    }
    return answer;
}