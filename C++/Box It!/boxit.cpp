#include<bits/stdc++.h>

using namespace std;
class Box
{
  //Overload operator <<
  friend ostream &operator<<(ostream &output, const Box &b){
      output << b.l << ' ' << b.b << ' ' << b.h; 
      return output;}
  public:
  //Constructor
    Box(int l, int b, int h){ this->l = l; this->b = b; this->h = h;}
    Box() : Box(0, 0 ,0){}
    Box(const Box &b): l(b.l), b(b.b), h(b.h){}
  //Get & Set
    int getLength() const {return l;}
    int getBreadth() const {return b;}
    int getHeight() const {return h;}
  //Method
    long long CalculateVolume() const {return (long long)l*b*h;}
  //Overload operator
    bool operator<(const Box &b) const {
        if(this->l < b.l)
            return true;
        if(this->b < b.b && this->l == b.l)
            return true;
        if(this->h < b.h && this->l == b.l && this->b == b.b)
            return true;
        return false;
    }
  private:
    int l, b, h;
};

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

int main()
{
	check2();
}