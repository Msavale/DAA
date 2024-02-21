#include<bits/stdc++.h>
using namespace std;

inline float lbstakg (float pounds){
	return 0.453*pounds;
}
int main(){
	float lbs;
	cout<<"\n Entre your weight in pounds:";
	cin>>lbs;
	cout<<"your weight in kilograms is"<<lbstakg(lbs)<<endl;
	return 0;
}
