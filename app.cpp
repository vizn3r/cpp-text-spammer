#include <iostream>
#include <WinUser.h>
#include <Windows.h>
using namespace std;

void spam(char str[], int spd){
    keybd_event(VK_RETURN,0,0,0);
    for(int i = 0; i < sizeof(str); i++){
        keybd_event(str[i],0,0,0);
    }
    keybd_event(VK_RETURN,0,0,0);
    Sleep(spd);
}

int main(){
    char text[500];
    unsigned long long int times;
    unsigned int speed;
    cout<<"Enter text[max 500 chars]:"<<endl;
    cin>>text;
    cout<<"Enter how many times to spam[max 18, 446, 744, 073, 709, 551, 615 - I don't recommend to use max value]:"<<endl;
    cin>>times;
    cout<<"Enter delay between messages[ms]:"<<endl;
    cin>>speed;
    system("cls");
    for(int i = 0; i < 10; i++){
        cout<<"Now click where you want to spam"<<endl;
        cout<<"Countdown: "<<i<<endl;
        Sleep(1000);
    }
    for(int i = 0; i < times; i++){
        spam(text, speed);
    }
    return 0;
}