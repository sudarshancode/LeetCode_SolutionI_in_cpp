#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
		if(x<=0){
			return false;
		}else{
  			long long int temp=x;
			long long int temp1=x;
			
			long long int sum=0;
			long long int number_of_digit=0;
			while (temp1 !=0)
			{
				number_of_digit=number_of_digit+1;
				temp1=temp1/10;
			}
			long long int pow=1;
			for(int i=1;i<number_of_digit;i++){
				pow=pow*10;
			}
			
			while(temp !=0){
				long long int digit=temp%10;
				sum=sum+digit*pow;

				temp=temp/10;
				pow=pow/10;
			}
			cout<<sum<<endl;
			if(x == sum)
			{
				return true;
			}else{
				return false;
			}
		}
    }
};
int main()
{
	Solution s;
	bool x;
	int y;
	cin>>y;
	x=s.isPalindrome(y);
	cout<<x<<endl;
}
