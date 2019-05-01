#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    vector<int> Nums;
    int now = 1;
    int cnt = 0;
    for(int i = 0; i < N; i++) {
        if(S[i] == (char)('0' + now)) cnt++;
        else {
            Nums.push_back(cnt);
            now = 1 - now;
            cnt = 1;
        }
    }
    if(cnt != 0) Nums.push_back(cnt);
    if(Nums.size() % 2 == 0) Nums.push_back(0);

    vector<int> sum(Nums.size()+1);
    for(int i = 0; i < Nums.size(); i++) {
        sum[i+1] = sum[i] + Nums[i];
        cout << sum[i] << endl;
    }

    int Add = 2 * K + 1;
    int ans = 0;
    for(int i = 0; i < Nums.size(); i += 2) {
        int left = i;
        int right = min(i+Add, (int)Nums.size());
        int tmp = sum[right] - sum[left];

        ans = max(tmp, ans);
    }

    cout << ans << endl;

    return 0;
}