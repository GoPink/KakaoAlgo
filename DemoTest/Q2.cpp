#include <iostream>
#include<vector>
using namespace std;
int flag[100001];
bool solution(vector<int> arr)
{
	bool answer = true;
    for(int i=0;i<arr.size();i++) {
        flag[arr[i]]++;
    }
    for(int i=1;i<=arr.size();i++) {
        if(flag[i]>1 || flag[i]==0) {
            answer=false;
            return answer;
        }
    }
	return answer;
}