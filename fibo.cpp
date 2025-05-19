#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char *argv[]){

    int n;
    char *commandLine=argv[1];
    if(commandLine==NULL){
        cout<<"Enter the number of Fibonacci numbers to generate: "<<endl;
        cin>>n;
    }
    else{
        n=atoi(commandLine);
    }
    int a=0, b=1, c;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=2; i<n; i++){
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}