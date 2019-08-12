#include <bits/stdc++.h>
using namespace std;
class student{
    private:
        int age;
        string first_name;
        string last_name;
        int std;
    public:
        void set_age(int a){
            age = a;
        }
        int get_age(){
            return age;
        }
        void set_first_name(string f){
            first_name = f;
        }
        string get_first_name(){
            return first_name;
        }
        void set_last_name(string l){
            last_name = l;
        }
        string get_last_name(){
            return last_name;
        }
        void set_std(int s){
            std = s;
        }
        int get_std(){
            return std;
        }
        string to_string(){
            stringstream ss;
            ss << age <<","<<first_name<<","<<last_name<<","<<std;
            return ss.str();
        }
};
int main(){
    int age,std;
    string first_name,last_name;
    cin>>age>>first_name>>last_name>>std;
    student s1;
    s1.set_age(age);
    s1.set_first_name(first_name);
    s1.set_last_name(last_name);
    s1.set_std(std);
    cout<<s1.get_age()<<endl;
    cout<<s1.get_last_name()<<", "<<s1.get_first_name()<<endl;
    cout<<s1.get_std()<<endl;
    cout<<"\n";
    cout<<s1.to_string()<<endl;

}
