#include<stdio.h>
class schoolstaff{
    char id[20];
    char name[20];
    int mark1;
    int mark2;
    int mark3;
    float nohr;
    float rate;
    char grade;
    float salary
    public:
    void Input(){
        cin>>id>>name>>mark1>>mark2>>mark3>>nohr>>rate;
    }
    void Output(){
        cout<<name<<" "<<grade<<" "<<salary;
    }
    void calca(){
        int avg = mark1+mark2+mark3;
        avg = avg/3;
        if(avg > 80){
            grade = 'A';
        }
        else{
            grade = 'B';
        }
        salary = nohr * rate;
    }

}
using namespace std;
int main(){

}