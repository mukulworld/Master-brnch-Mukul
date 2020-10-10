// Sum of two numbers.......

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t,s,e;
  int arr[n];
  
// declaring array size and taking input fro user

  cout<<"enter the number of elements to be taken in an array";
  cin>>n;
  cout<<"enter the number you want to find in an array";
  cin>>t;
  for (int i = 0; i<n; ++i)
 {
	cin >>arr[i];
 }
 	sort(arr,arr+n);
 	
// Prnting the input array
  for (int j =0; j <n+1; j++) 
     cout <<arr[j]<<" " ;	
      
// declaring pointers	
	int*p1=&arr[s];
	int*p2=&arr[e];
	s=0;
	e=1;
// seting first condition	
	if ((*p1+*p2)==t)
	{
	
	 cout<<"{"<<*p1<<" "<<*p2<<"}";
    }
    else if ((*p1+*p2)<t)
	{
		for (s=0;s<n;++s )
		{		
		   if ((*p1+*p2)==t)
	       {
	        cout<<"{"<<*p1<<" "<<*p2<<"}";
	        break;
           }
		}
	}
	else if ((*p1+*p2)>t) 
	{
		for (e=n-1;e>0;e-- )
		{		
		   if ((*p1+*p2)==t)
	       {
	        cout<<"{"<<*p1<<" "<<*p2<<"}";
	        break;
           }
		}
	}
		else
		{
		cout<<"Not found";	
		}	
				
	
}
