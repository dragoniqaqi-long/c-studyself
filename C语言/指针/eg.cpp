#include <iostream>
#include <queue>
#include <vector>
#include <malloc.h>

using namespace std;

int main(){
	int N;
	int a,b,sum = 0;
    cin>>N;
    vector<int> p(N);
    //int * p = (int *)malloc(4*N);
    
	priority_queue<int, vector<int>, greater<int>> min1;
		
	for(int i = 0;i < N;i++){
		scanf("%d",&p[i]);
	}
	for(int i = 0;i < N;i++){
		min1.push(p[i]);
		
	}
	while(min1.size() > 1){
		
		a = min1.top();
		min1.pop();
		b = min1.top();
		min1.top();
		sum = sum + (a+b);
		min1.push(a+b);
	}	
	cout<<sum<<endl;
}