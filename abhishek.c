#include<iostream>
#include<string.h>
using namespace std;
class student{
    char name[100];
    char major[100];
    char email[100];
    char reg[100];
    public : 
      void accept(){
        cin>>name;
        cin>>email;
        cin>>major;
    }
    int findat(){
        for(int i =0;email[i]!='\0';i++)
            if(email[i]=='@'){
                return i;
            }
        return -1;

    }
    void makereg(int r){
        reg[0] = major[0];
        int n = findat();
        for(int i = 0;i<n;i++){
            reg[i+1] = email[i];
        }
        for(int i=1;i<4;i++){
            reg[n+i] = static_cast<char>(r%10);
            r = r/10;
        }
        reg[n+4] = '\0';

    }
    int check(char * s){
        if( strcmp(name,s) == 0 ){
            return 1;
        }
        else{
            return 0;
        }
    }
    void display(){
        cout<<name<<"\n";
        cout<<reg;
    }
};
int main(){
    int n;
    char search[100];
    student s[100];
    cin>>n;
    for(int i =0;i<n;i++){
        s[i].accept();
        s[i].makereg(101+i);
    }
    cin>>search;
    for(int i =0;i<n;i++){
        if(s[i].check(search)){
            s[i].display();
        }
    }
}