//
// Created by Shahzod Erkinov on 12/11/25.
//
/* PROBLEM 1
#include <iostream>
using namespace std;
int main()
{
    const int size=10;
    float  *ptr,arr[size];
    ptr=&arr[0];
    for(int i=0;i<size;i++){
        cin>>*ptr;
        ptr++;
    }
    for(--ptr;ptr>=&arr[0];ptr--){
        cout<<*ptr<<" ";
    }
    return 0;
}
*/
/*PROBLEM 2 
#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int *ptr,arr[n];
    ptr=&arr[0];
    for(int i=0;i<n;i++){
        cin>>*ptr;
        ptr++;
        if(*ptr%2==1){
            count++;
        }
    }
    cout<<count;
}
*/
/*PROBLEM 3
#include <iostream>
using namespace std;
bool is_mirrored(const int* a, const int* b, int size) {
    b = b + size - 1;
    for (int i = 0; i < size; i++) {
        if (a[i] != b[-i]) {
            return false;
        }
    }
    return true;
}
int main()
{
   int n;
   cin>>n;
   int *arr1=new  int[n];
   int *arr2=new int[n];
   for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    bool result = is_mirrored(arr1, arr2, n);
    cout << result << endl;

    return 0;
}
*/