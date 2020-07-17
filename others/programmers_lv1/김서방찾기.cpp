#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    vector<string>::iterator it = find(seoul.begin(), seoul.end(), "Kim");
    string answer = "김서방은 "+to_string(it - seoul.begin())+"에 있다";
    return answer;
}