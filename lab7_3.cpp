//status = "ONE-NIGHT-STAND";
#include<iostream>
using namespace std;

int main(){
    string status;
    int age,money,h;
    cout<<"Input Age: ";
    cin>>age;
    if(age<=20){
        cout<<"Input Height: ";
        cin>>h;
        if(h<=160){
            status = "UNFRIEND";
        }else{
            if(h<=175){
                status = "FRIEND";
            }else{
                cout<<"Input Wealth(Million): ";
                cin>>money;
                if(money>69){
                    status = "MARRIED";
                }else{
                    status = "ONE-NIGHT-STAND";
                }
            }
        }
    }else{
        if(age<30){
            cout<<"Input Wealth(Million): ";
            cin>>money;
            if(money>10){
                status = "BEST FRIEND";
            }else{
                status = "UNFRIEND";
            }
        }else{
            status = "UNFRIEND";
        }
    }
    cout<<status;
    return 0;
}
