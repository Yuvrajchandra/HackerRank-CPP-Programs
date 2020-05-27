#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:    int age, stand;
                string fname, lname;

    public:     void set_age(int Age)
                {
                    age=Age;
                } 
                int get_age()
                {
                    return age;
                }
                void set_first_name(string firsname)
                {
                    fname=firsname;
                }
                string get_first_name()
                {
                    return fname;
                }
                void set_last_name(string lasname)
                {
                    lname=lasname;
                } 
                string get_last_name()
                {
                    return lname;
                }
                void set_standard(int std)
                {
                    stand=std;
                } 
                int get_standard()
                {
                    return stand;
                }   
                string to_string()
                {
                    stringstream ss;
                    char c=',';
                    ss<<age<<c<<fname<<c<<lname<<c<<stand;
                    return ss.str();
                                                /*stringstream ss1,ss2,ss3,ss4;
                                                ss1<<age;
                                                ss2<<fname;
                                                ss3<<lname;
                                                ss4<<stand;
                                                string i1,i2,i3,i4;
                                                ss1>>i1;
                                                ss2>>i2;
                                                ss3>>i3;
                                                ss4>>i4;
                                                string output=i1+","+i2+","+i3+","+i4;
                                            
                                                return output;*/

                }       
};

int main() {
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
    cout << st.to_string();
    
    return 0;
}
