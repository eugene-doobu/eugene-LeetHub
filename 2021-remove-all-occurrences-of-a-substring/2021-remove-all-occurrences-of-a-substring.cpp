class Solution {
public:
string removeOccurrences(string s, string part) {
	deque<char> start;
	deque<char> middle;
	stack<char> end;
	for (char c : s) start.push_back(c);
	int n = 0, sLen = s.length(), pLen = part.length();

	while (!start.empty()) {
		for (int i = middle.size(); i < pLen; ++i) {
			if (start.empty()) break;
			middle.push_back(start.front()); start.pop_front();
		}

		int searchIdx = 0;
		bool isMatching = true;
		for (searchIdx = 0; searchIdx < pLen; ++searchIdx) {
			if (middle[searchIdx] != part[searchIdx]) {
				isMatching = false;
				break;
			}
		}

		if (!isMatching) {
			end.push(middle.front()); middle.pop_front();
		}
		else {
			middle.clear();
			for (int i = 0; i < pLen - 1; ++i) {
				if (end.empty()) break;
				middle.push_front(end.top()); end.pop();
			}
		}
	}

	string rst;
	while (!end.empty()) {
		rst.push_back(end.top()); end.pop();
	}
	reverse(rst.begin(), rst.end());
	while (!middle.empty()) {
		rst.push_back(middle.front()); middle.pop_front();
	}

	return rst;
}
};