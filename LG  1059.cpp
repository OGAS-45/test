#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
	/*什么是桶排序呢*/
	 int a[1002] = {0};
	 int n;
	 cin>>n;
	 int i,x;
	 for(i = 0;i < n;i++){
	 	cin>>x;
	 	a[x] = x;
	 }
	 int cal;
	 for(i = 0,cal = 0;i < 1002;i++){
	 	if(a[i] != 0)
	 		cal++;
	 }
	 printf("%d\n",cal);
	 for(i = 0;i < 1002;i++)
	 	if(a[i] != 0)
	 		printf("%d ",a[i]);
	 
	return 0;
 } 
