#include <iostream>
using namespace std;
int main()
{	
  int arr[3],i,sum=0;
  for(i=0;i<3;i++){
  	cin>>arr[i];
  }
  for(i=0;i<3;i++){
  	sum=sum+arr[i];
  }
  cout<<sum;

	return 0;
}
