#include <iostream>
#include <slib.h>
#include<dlib.h>

using namespace std;
int main(){
    
    int ret=slib::add(10,20);
    //cout<<"####hello"+to_string(ret)<<endl;

    ret=dlib::sub(20,5);
    //cout<<"####hello"+to_string(ret)<<endl;
    return 0;
}