#include <iostream>
#include <vector>
using namespace std;

class Student{
    private:

        int scores[5];

    public:

        void inputs(){
            for(int i=0;i<5;i++)
                cin>>scores[i];
        }

        int calc_score(){
            int sum = 0;
            for(int i = 0;i<5;i++){
                sum+=scores[i];
            }
            return sum;
        }

};

int main(){
    int n = 0,winer = 0;
    cin>>n;

    Student* player = new Student[n];

    for(int i = 0;i<n;i++)
        player[i].inputs();

    int kristen_score = player[0].calc_score();

    for(int i = 1;i<n;i++){
        if(kristen_score < player[i].calc_score())
            winer++;
    }

    cout<<winer<<endl;

return 0;

}
