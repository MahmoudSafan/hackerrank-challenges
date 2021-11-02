#include <iostream>
using namespace std;
typedef long long ll;
class Box{
    private:
        ll l,b,h;

    public:
        Box(ll l = 0, ll b = 0, ll h = 0):l{l},b{b},h{h}{}

    ll getLength(){
        return l;
    }


    ll getBreadth(){
        return b;
    }


    ll getHeight(){
        return h;
    }

    long long CalculateVolume(){
        return l*h*b;
    }

    friend bool operator < (Box const &a , Box const &b);

    friend ostream& operator << (ostream& os, const Box& b);
};

    bool operator < (Box const &a , Box const &b){
        if(a.l < b.l)   return true;
        else if(a.b < b.b && a.l == b.l) return true;
        else if(a.h < b.h && a.b == b.b && a.l == b.l) return true;

        return 0;
    }

    ostream& operator << (ostream& os, const Box& b){
        os <<b.l<<" "<<b.b<<" "<<b.h;
        return os;
    }

    void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}
int main(){
    check2();
    return 0;
}

