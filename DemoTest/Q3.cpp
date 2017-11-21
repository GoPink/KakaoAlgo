#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
  //vector<vector<int> >의 값은 다음과 같이 읽어올 수 있습니다.
    int x_pos =0, y_pos =0 ;
    for(int i=0;i<v.size();i++) {
        x_pos = x_pos ^ v[i][0];
        y_pos = y_pos ^ v[i][1];
    }
    vector<int> ans;
    ans.push_back(x_pos);
    ans.push_back(y_pos);
    
    return ans;
}