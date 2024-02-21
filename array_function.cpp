#include <bits/stdc++.h>
using namespace std;


int  main(){
	
	int n;
	cout<<"Entre value n";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<"element of array is";
	for(int i=0;i<n;i++){
	   cout <<array[i]<<endl;	
	}
	cout<<array.size();
	return 0;
}
