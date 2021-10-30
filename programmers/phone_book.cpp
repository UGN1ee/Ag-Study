#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    string tmp = "";
    
    sort(phone_book.begin(), phone_book.end());
    for(int i=0; i<phone_book.size()-1; i++){
        int s = phone_book[i].length();
        string a = phone_book[i];
        string b = phone_book[i+1].substr(0,s);

        if(a==b){
            answer=false;
            break;
        }
    }
    return answer;
}
