#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int reverse(int x) {
  	long long int temp = x;
    long long int sum = 0;

    while (temp != 0) {
        int digit = temp % 10;
        sum = sum * 10 + digit;
        temp = temp / 10;
    }

    
    if (sum > INT_MAX || sum < INT_MIN) {
        return 0;
    }

    return sum;			
    }
};
int main()
{
	Solution s;
	int x;
	int y;
	cin>>y;
	x=s.reverse(y);
	cout<<x<<endl;
}
