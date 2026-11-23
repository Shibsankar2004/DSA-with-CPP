// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int* ptr1;
//     int* ptr2;
//     cout<<ptr1<<endl;
//     cout<<ptr2<<endl;
//     cout<<(ptr1<ptr2)<<endl;
     
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int* ptr1;
//     int* ptr2=ptr1;
//     cout<<ptr1<<endl;
//     cout<<ptr2<<endl;
//     cout<<(ptr1==ptr2)<<endl;
     
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int* ptr1;
//     int* ptr2=ptr1;
//     cout<<ptr1<<endl;
//     cout<<ptr2<<endl;
//     cout<<(ptr1!=ptr2)<<endl;
     
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int* ptr=arr;
    cout<< *(ptr+1)<<endl;
    cout<<*(ptr+3)<<endl;
    ptr++;
    cout<<*ptr<<endl;
}