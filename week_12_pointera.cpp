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
//PROBLEM 4
/*

#include <iostream>
using namespace std;
void sumArrays(const double *arr1, const double *arr2, double *sum, int size){
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    for (int i = 0; i < size; i++) {
        cout << sum[i] << " ";
    }
}
int main()
{
   int n;
   cin>>n;
   double arr1[n],arr2[n];
   for(int i=0;i<n;i++){
       cin>>arr1[i];
   }
   for(int i=0;i<n;i++){
       cin>>arr2[i];
   }
   double result[1000];
   double *ar1=arr1;
   double *ar2=arr2;
   double *sum=result;
   sumArrays(ar1,ar2,result,n);
    return 0;
}
*/
//PROBLEM 5

/*

#include <iostream>
using namespace std;
void sumArrays( double *arr1,  double *arr2,double  *sum, int size){
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i];
    }
    for (int i = 0; i < size; i++) {
        arr1[i]= arr2[i];
    }
    for (int i = 0; i < size; i++) {
        arr2[i]= sum[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }cout<<endl;
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }
}
int main()
{
   int n;
   cin>>n;
   double arr1[n],arr2[n];
   for(int i=0;i<n;i++){
       cin>>arr1[i];
   }
   for(int i=0;i<n;i++){
       cin>>arr2[i];
   }
   double result[1000];
   double *ar1=arr1;
   double *ar2=arr2;
   double *sum=result;
   sumArrays(ar1,ar2,result,n);
    return 0;
}
*/
//PROBLEM 7
/*

#include <iostream>
using namespace std;
void power(double* n, const int* p) {
    double base = *n;
    int exp = *p;
    double result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    *n = result;
}
int main() {
    double num;
    int pow;
    cin>>num>>pow;
    power(&num, &pow);
    cout<<num;
    return 0;
}
*/
