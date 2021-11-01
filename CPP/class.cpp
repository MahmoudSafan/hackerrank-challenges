#include <iostream>
using namespace std;

class Student{
    private:
        int age, standard;
        string first_name, last_name;

    public:
        void set_age(int agee){
            age = agee;
        }

        int get_age(){
            return age;
        }

        void set_first_name(string name){
            first_name = name;
        }

        string get_first_name(){
            return first_name;
        }

        void set_last_name(string name){
            last_name=name;
        }

        string get_last_name(){
            return last_name;
        }

        void set_standard(int standardd){
            standard = standardd;
        }
        int get_standard(){
            return standard;
        }

        void to_string(){
            cout<< get_age()<<','<<get_first_name()<<','<<get_last_name()<<','<<get_standard()<<endl;
        }
};

int main(){

    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
 st.to_string();


    return 0;
}
