#include<iostream>
#include<Vector>
using namespace std;
bool isValid(vector<int>&arr,int n,int m ,int maxPages){//o(n)
    int st=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxPages){
            return -1;
        }
        if(pages+arr[i]<=maxPages){
            pages+=arr[i];
        }else{
            st++;
            pages=arr[i];
        }

    }
    return st>m ? false:true;
}
int allocateBooks(vector<int>&arr,int n,int m){//o(logN*n)
    if(m>n){
        return -1;
    }
int sum=0;
for(int i=0;i<n;i++){//o(n)
    sum+=arr[i];
}
int ans=-1;
int st=0,end=sum;
while(st<=end){//o(logN)
    int mid=st+(end-st)/2;
    if(isValid(arr,n,m,mid)){
        ans=mid;
        end=mid-1;
    }else{
        st=mid+1;
    }
}
return ans;
}
int main(){
    vector<int>arr={2,7,3,4};
    int n=4,m=2;
    cout<<allocateBooks(arr,n,m)<<endl;
    return 0;
}