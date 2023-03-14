#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define Mod 1000000007
#define MM 998244353
#define M 1e5 + 5
#define fr first
#define sc second
#define sortD(v) sort(v.begin(), v.end(), greater<int>());
#define sortI(v) sort(v.begin(), v.end());
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define msi map<string, int>
#define mii map<int, int>
#define mll map<ll, ll>
#define psi pair<string, int>
#define pis pair<int, string>
#define piii pair<int, pii>
using namespace std;

template <class T1>
void put(T1 e)
{
	cout << e << endl;
}
template <class T1, class T2>
void put(T1 e1, T2 e2)
{
	cout << e1 << " " << e2 << endl;
}
template <class T1, class T2, class T3>
void put(T1 e1, T2 e2, T3 e3)
{
	cout << e1 << " " << e2 << " " << e3 << endl;
}
template <class T1, class T2, class T3, class T4>
void put(T1 e1, T2 e2, T3 e3, T4 e4)
{
	cout << e1 << " " << e2 << " " << e3 << " " << e4 << endl;
}

template <class T1>
void inp(T1 e)
{
	cin >> e;
}
template <class T1, class T2>
void inp(T1 e1, T2 e2)
{
	// scanf("%T1 %T2", &e1, &e2);
	cin >> e1 >> e2;
}
template <class T1, class T2, class T3>
void inp(T1 e1, T2 e2, T3 e3)
{
	cin >> e1 >> e2 >> e3 >> endl;
}

bool sortByValInc(pii &a, pii &b)
{
	return (a.second < b.second);
}

bool sortByValDec(pii &a, pii &b)
{
	return (a.second > b.second);
}

vector<pii> sortMapByValue(mii &m)
{
	vector<pii> v;
	for (auto it : m)
	{
		v.pb({it.fr, it.sc});
	}
	sort(v.begin(), v.end(), sortByValInc);

	return v;
}

ll gcd(ll a, ll b)
{
	return b == 0 ? a : gcd(b, a % b);
}

ll lastPowerOf2Num(ll number)
{
	int noOfBits = (int)log2(number) + 1;
	put(noOfBits);
	ll lastPowerOf2 = 1 << --noOfBits;
	put(lastPowerOf2);
	return lastPowerOf2;
}

// #define SIEVE
vector<ll> primes(M, 1);
vector<ll> primesByIdx;

void primeSieve()
{
	primes[0] = 0;
	primes[1] = 0;
	for (ll i = 2; i < M; i++)
	{
		if (primes[i])
		{
			primesByIdx.pb(i);

			for (ll j = i * i; j < M; j += i)
			{
				primes[j] = 0;
			}
		}
	}
}

bool isSq(int x)
{
	int s = sqrt(x);
	return s * s == x;
}

bool isDiv(ll n)
{
	set<int> s;
	ll n1 = n;
	while (n1)
	{
		int r = n1 % 10;
		s.insert(r);
		n1 /= 10;
	}
	for (auto itr : s)
	{
		if (itr != 0 and n % itr == 0)
		{
			continue;
		}
		if (itr != 0 and n % itr != 0)
		{
			return false;
		}
	}
	return true;
}

pii primeFac(ll n)
{
	pii p;
	ll c, r = 1;
	for (ll i = 0; i * i <= n; i++)
	{
		if (n % primesByIdx[i] == 0)
		{
			n /= primesByIdx[i];
			r = primesByIdx[i];
			break;
		}
	}
	c = n;
	p.fr = r;
	p.sc = c;
	return p;
}

bool isPrime(ll n)
{
	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

// const ll NN = 1e5 + 5;
// ll arr[NN];

void go()
{
	ll n, a, b;
	cin >> n >> a >> b;
	if (a == 0)
		put(b + 1);
	else if (b == 0)
		put(n - a);
	else
	{
		ll tmp1 = n - a;
		ll tmp2 = b + 1;
		ll ans = min(tmp1, tmp2);
		put(ans);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	ll tc = 1;
	// cin >> tc;
	// scanf("%lld", &tc);
#ifdef SIEVE
	primeSieve();
#endif
	while (tc--)
	{
		go();
	}
}