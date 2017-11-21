#include <vector>
#include <iostream>
using namespace std;
//n번째 스티커 , 뗌 or not, 첫번째 스티커 포함
int d[100001][2][2];
int solution(vector<int> sticker)
{
	int answer = 0;
    d[1][1][1] = sticker[0];
    for(int i=2;i<=sticker.size();i++) {
        if(i == sticker.size()) {
            d[i][0][0]= max(d[i-1][0][0], d[i-1][1][0]);
            d[i][0][1]= max(d[i-1][0][1], d[i-1][1][1]);
            d[i][1][0]= d[i-1][0][0] + sticker[i-1];
        }
        else {
            d[i][0][0]= max(d[i-1][0][0], d[i-1][1][0]);
            d[i][0][1]= max(d[i-1][0][1], d[i-1][1][1]);
            d[i][1][0]= d[i-1][0][0] + sticker[i-1];
            d[i][1][1]= d[i-1][0][1] + sticker[i-1];
            }
    }
    answer = max(d[sticker.size()][0][0], max(d[sticker.size()][0][1], max(d[sticker.size()][1][0],d[sticker.size()][1][1])));
	return answer;
}