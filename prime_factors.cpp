#include<iostream>
#include<stdlib.h>
using namespace std;
//function initialization
int prime_factor(int n);

int main(int argc,char *argv[]){

int n,x;
char *commandLine= argv[1];

if(commandLine==NULL){
    cout<<"enter the number"<<endl;
    cin>>n;
} else {
    n=atoi(commandLine);
}

for(int i=1;i<=n;i++) {
      if( n%i==0 )
        cout<<"prime_factors are"<<" "<<i<<endl;
      
    

}       
} 

























