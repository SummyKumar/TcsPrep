#include<iostream>
using namespace std;
float addtime(float btime, int offsetMinutes) {
    int hours = (int)btime;              // Extract hours part
    int minutes = (btime - hours) * 100; // Extract minutes part

    minutes += offsetMinutes;            // Add offset

    // Handle overflow of minutes into hours
    hours += minutes / 60;
    minutes = minutes % 60;

    if (hours >= 24) hours -= 24;        // Handle 24-hour wrap

    // Return time back in HH.MM format
    return hours + (minutes / 100.0);
}

int main(){
    float btime;
    cin>>btime;
    if(btime<0 || btime>23.59){
        cout<<"INVALID INPUT"<<endl;
    }
    else{
        printf("%.2f %.2f %.2f %.2f %.2f",btime,addtime(btime,4),addtime(btime,9),addtime(btime,15),addtime(btime,19),addtime(btime,22));
    }
}
