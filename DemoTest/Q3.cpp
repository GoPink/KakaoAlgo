#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
  //vector<vector<int> >�� ���� ������ ���� �о�� �� �ֽ��ϴ�.
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