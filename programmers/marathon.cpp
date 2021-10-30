#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	int s = participant.size();
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	for (int i = 0; i < s-1; i++) {
		if (participant[i] != completion[i]) {
			answer = participant[i];
			break;
		}
	}
	if (answer == "") {
		answer = participant[s-1];
	}
	return answer;
}
