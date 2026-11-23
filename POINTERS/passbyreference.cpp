// #include<iostream>
// using namespace std;
// void changeA(int *ptr){//pass by reference using pointer
//     *ptr=20;
// }
// int main(){
//     int a=10;
//     changeA(&a);
//     cout<<"inside main fnx: "<<a<<endl;
// }

// #include<iostream>
// using namespace std;
//  void changeA(int &b){//pass by reference using alias
//     b=20;
//  }
// int main(){
//     int a=10;
//     changeA(a);
//     cout<<"inside main fnx:"<<a<<endl;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;
    cout<<*arr<<endl;
    return 0;
}