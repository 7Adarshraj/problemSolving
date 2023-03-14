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

/*
WAP for following pattern

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

void go()
{
    int n;
    cin >> n;
    int totalRows = (2 * n) - 1, startSectionLenght = 0, middleSectionLenght = 0, valueToPrint = n;

    for (int i = 0; i < totalRows; i++)
    {
        if (i == 0 or i == totalRows - 1)
        {
            for (int j = 0; j < totalRows; j++)
            {
                cout << valueToPrint << " ";
            }
        }
        else
        {
            startSectionLenght = i < n ? ++startSectionLenght : --startSectionLenght;
            middleSectionLenght = totalRows - 2 * startSectionLenght;
            for (int j = 0; j < startSectionLenght; j++)
            {
                cout << valueToPrint-- << " ";
            }
            for (int j = 0; j < middleSectionLenght; j++)
            {
                cout << valueToPrint << " ";
            }
            for (int j = 0; j < startSectionLenght; j++)
            {
                cout << ++valueToPrint << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        go();
        cout << " ------------------------------";
        cout << "\n";
    }
}