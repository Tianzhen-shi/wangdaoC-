#include <iostream>
using std::cout;
using std::endl;

class Complex
{

public:
    Complex(double dreal, double dimg)
        : _dreal(dreal), _dimag(dimg)
    {
        cout << "Complex(double dreal, double dimg)" << endl;
    }

    void display() const
    {
        cout << _dreal << " + " << _dimag << "i" << endl;
    }

    double getReal() const { return _dreal; }
    double getImag() const { return _dimag; }

private:
    double _dreal;
    double _dimag;
};
//运算符重载普通函数写法
Complex operator+(const Complex &lhs, const Complex &rhs)
{
    return Complex(lhs.getReal()+rhs.getReal(),
    lhs.getImag()+rhs.getImag());
}
//重载运算副必须是一个类类型或者是枚举类型的操作数
//优先级和结合性时固定的
//不在具备短路求值特性
//不能已造并重载一个不存在的运算符
//尽量不要去重载逻辑运算符
int main(void)
{
    Complex v1(1, 2);
    v1.display();
    return 0;
}