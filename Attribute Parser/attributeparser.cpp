#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>

using namespace std;

class HRML
{
public:
	void tagInsert(int n)
	{
		string tagCount;
		for (int i = 0; i < n; i++){
			string s, segment;
			getline(cin, s);
			istringstream iss(s);
			while (getline(iss, segment, ' '))
			{
				if (isOpenTag(segment)) {
					segment.erase(0, 1);
					if (segment[segment.size() - 1] == '>')
						segment.pop_back();
					tagCount.size() > 0 ? tagCount += '.' + segment : tagCount = segment;
				}
				else if (isCloseTag(segment)) {
					segment.erase(0, 2); segment.pop_back();
					if (tagCount.find('.' + segment) != string::npos)
						tagCount = tagCount.substr(0, tagCount.find('.' + segment));
					else
						tagCount = "";
				}
				else if (isAttribute(segment)) {
					segment.pop_back();
					segment.erase(remove(segment.begin(), segment.end(), '"'), segment.end());
					attributeName = segment;
					m.insert(pair<string, string>(tagName, attributeName));
				}
				else if (segment[0] != '=')
					tagName = tagCount + '~' + segment;
			}
		}
	}

	void tagStamp(int q)
	{
		for (int i = 0; i < q; i++)
		{
			string query;
			getline(cin, query);
			cout << (m.find(query) != m.end() ? m.find(query)->second : "Not Found!") << '\n';
		}
	}

private:
	bool isOpenTag(string s) { return s[0] == '<' && s[1] != '/'; }
	bool isCloseTag(string s) { return s[1] == '/'; }
	bool isAttribute(string s) { return s[0] == '"'; }

	map<string, string> m;
	string tagName; 
	string attributeName;
};

int main()
{
	HRML hrml;
	int n, q;
	cin >> n >> q; cin.ignore();
	hrml.tagInsert(n); 
	hrml.tagStamp(q);
	return 0;
}
