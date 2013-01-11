#include <string>
#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
map<string, vector<pair<string,int> > >m; //no direction graph
vector<string> memo;

int dfs(string &now, string &goal, int d){
	vector<pair<string,int> >v=m[now];
	for(int i=0;i<v.size();i++){
		if(v[i].first==goal&&v[i].second!=d)return 1;
		if(find(memo.begin(),memo.end(),v[i].first)==memo.end()){
			memo.push_back(v[i].first);
			if(dfs(v[i].first,goal,d-v[i].second))return 1;
		}
	}
	return 0;
}

char b1[17],b2[17];
void main2(int n){
	m.clear();memo.clear();
	int d,e=0;
	for(;n;n--){
		scanf(" 1 %s = 10^%d %s",b1,&d,b2);
		if(!e){
			string s1=b1,s2=b2;
			memo.clear();
			if(dfs(s1,s2,d))e=1;
			m[s1].push_back(make_pair(s2,d));
			m[s2].push_back(make_pair(s1,-d));
		}
	}
	puts(e?"No":"Yes");
}
main(){int n;for(;scanf("%d",&n),n;)main2(n);}