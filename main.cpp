#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef pair<ii, ll> iii;
typedef vector<ii> vii;
typedef vector<pair<ii, ll>> viii;

#define FOR(i, a, b) for(ll i=ll(a); i<ll(b); i++)
#define ROF(i, a, b) for(ll i=ll(a); i>=ll(b); i--)
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define ifile(a) freopen((a), "r", stdin)
#define ofile(a) freopen((a), "w", stdout)
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); //cout.tie(NULL)
#define PI 3.1415926535897932384626433832795
#define mem(x, val) memset((x), (val), sizeof(x))
#define sz(x) (ll)(x).size()
#define endl '\n'
#define clockon ll t = 1; while (t--) { clock_t z = clock();
#define clockoff debug("Elapsed Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC); }
#define oo 2000000000000000000LL
#define EPS 1e-6
#define MOD 1000000007
#define etr "\n"
#define INF 10E18

string big, good, bad, goodSuf;

ll findApp(string &neddle, string &nest, ll end){
	ll cnt = 0;
	for(ll i = 0; i < min(nest.length() - needle.length() + 1, end); i++){
		if(nest[i] == needle[0]){
			bool can = true;
			for(ll j = 0; j < needle.length(); j++){
				if(needle[j] != nest[i+j]){
					can = false;
					break;
				}
			}
			if(can) cnt ++;
		}
	}
	return cnt;
}

bool canFit(string &needle, string &nest, ll start){
	if(needle.length() > nest.length() - start) return false; 
	FOR(i, 0, needle.length()){
		if(nest[i+start] == '*' || nest[i+start]] == needle[i]) continue;
		else return false;
	}
	return true;
}

string getSmallestSufix(string &curr){
	string pFix = "";
	FOR(i,0 , curr.length()){
		pFix += curr[i];
		bool cool = true;
		FOR(j, 0, i+1){
			if(pFix[j] != curr[curr.length() - j - 1]){
				cool = false; break;
			}
		}
		if(cool) break;
	}
	return pFix;
}

struct dpNode{
	bool calc;
	string besRes;
	ll best;

	dpNode(){
		calc = false; best = 0; bestRes = "";
	}
};

dpNode dpNds[0]

void calcDp(ll ci){
	//3 opciones

	//poner y y mejor de skip
	//poner y resumir
	//no poner
}

ll getDpRes(){
	calcDp(0);
	return dpNds[0].best;
}

int main(){
	sync;
	cin >> big >> good >> bad;
	goodSuf = getSmallestSufix(good);
	if(findApp(bad, good, INF)){
		cout << findApp(good, big, INF) - findApp(bad, big, INF) << etr;
	}

	cout << getDpRes() << etr;

	return 0;
}
