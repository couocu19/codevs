#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;
const int maxn = 100;
vector<int> Bomb; //���������� 
void solve();
void solve() 
{
    int ans = 0, cnt = 0, high;
    int up[maxn],         //����������� 
        down[maxn];       //��½������� 
    while (cin >> high) 
	{
        Bomb.push_back(high);
    }
    unsigned len = Bomb.size(); 
    for (unsigned i = 0; i < len; i++)
	{
        down[i] = 1;
        up[i] = 1;
        for (int j = 0; j < i; j++)
		 {
            if (Bomb[j] > Bomb[i])
		   {
                down[i]=max(down[i], down[j] + 1);
            }
            if (Bomb[j] < Bomb[i])
			 {
                up[i] = max(up[i], up[j] + 1);
            }
            ans = max(ans, down[i]);
            cnt = max(cnt, up[i]);
        }
    }
    
    printf("%d\n%d\n", ans, cnt);    
}
int main()
{
    solve();
    return 0;
}

