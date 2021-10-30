#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    int tmp =0;
    int cs = clothes.size();
    vector<string> c(cs);
    for (int i=0; i<cs; i++){
        c[i] = clothes[i][1];
    }
    sort(c.begin(), c.end());
    for(int j=0; j<cs-1; j++){
        if(c[j]!=c[j+1]){
            answer = answer*(j-tmp+2);
            tmp = j+1;
        }
    }
    return answer*(cs-tmp+1)-1;
}
