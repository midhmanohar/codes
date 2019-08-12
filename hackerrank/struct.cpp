#include <bits/stdc++.h>
using namespace std;
struct student{
    int age;
    string first_name;
    string last_name;
    int std;
};
int main(){
    struct student s1;
    cin>>s1.age>>s1.first_name>>s1.last_name>>s1.std;
    cout<<s1.age<<" "<<s1.first_name<<" "<<s1.last_name<<" "<<s1.std<<endl;
}
