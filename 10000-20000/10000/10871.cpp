//X보다 작은 수
#include <iostream>

using namespace std;

int main(void)
{
	int N,X,k,j=0,count = 1;
	int a[10001];
	
	cin >> N >> X;
	
	if(N<1||X>10000)
		return -1;
	
	while(cin >> k)
	{
		if(k<X)
			{
				a[j]=k;
				++j;
			}
			
		if(count == N)
			break;
		count++;
	}
	for(int i=0;i<j;++i)
		cout << a[i] << ' ';
	cout << endl;
	
			
	return 0;
						
}