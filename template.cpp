#include<bits/stdc++.h>
using namespace std;

template<class T>
class vector1{
    public:
    T* arr;
    int size;

    vector1(int m){
        size=m;
        arr=new T[size];
    }

    int sum(vector1 &v){
        int sum=0;
        for(int i=0;i<size;i++){
            sum+=v.arr[i];
        }
        return sum;
    }

};

int main(){

    vector1<int>mv(5);
    mv.arr[0]=1;
    mv.arr[1]=2;
    mv.arr[2]=11;
    mv.arr[3]=10;
    mv.arr[4]=14;
    int total=mv.sum(mv);
    cout<<total;




}