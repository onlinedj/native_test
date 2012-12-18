#include <iostream>
#include <string>

namespace test {//namespace test start
using namespace std;
class Card {
    friend ostream& operator<<(ostream& ost, Card& output);
    public :
        Card(string& name, string& num);
        string getName();
        string getNumber();

    private :
        string name;
        string num;
};

Card::Card(string& name,string& num) {//类对象的传递推荐使用引用传递
    this->name = name; 
    this->num = num;
}

string Card::getName() {
    return name;
}

string Card::getNumber() {
    return num;
}

ostream& operator<<(ostream &os, Card& output) {
    return os<< "name:" << output.getName()<<" num:"<<output.getNumber();
}

}//namespace test end
using namespace test;
using std::cout;
using std::endl;
int main(int argc, const char *argv[])
{
    string name("jacky");
    string num("18701580857");//此对象的生命周期固定为函数结束
    Card card(name,num);
    cout << card << endl;
    string* name2 = new string("emily");//注意，此对象是由new关键字动态分配的，他的生命周期是自己决定，随时可以delete
    string* num2 = new string("18710089550");
    Card* card2 = new Card(*name2, *num2);
    cout << *card2 << endl;
    delete card2;
    delete name2;
    delete num2;

    return 0;
}
