#include <iostream>
#include <math.h>

using namespace std;



double fx (double x,double k)
{
   return ((pow(x,k))*(pow(exp(1),-x)));
}



double fafb05 (double a, double b,double k)
{

return (fx(a,k)+fx(b,k))/2;
}



double h(double a,double b,int n)
{
    return ((b-a)/n);
}



double summ(double a, double h,double k, int n)
{
    double delta=a;
    double summ=0;
for (int i=(a+1);i<n;i++)
{
    delta+=h;
    summ+=fx(delta,k);
}
return summ;
}



double integrate(double a,double b,double c)
{
    return b*(a+c);
}



int main()
{
setlocale(0,"");
int k1=0,k2=1,k3=2,k4=3,k5=4;
int n1,n2,n3,n4,n5;
cout<<"Введите количество отрезков для коэффициентов:"<<endl<<"Для k=0,n:";cin>>n1; cout<<endl<<"для k=1,n:";cin>>n2; cout<<endl<<"для k=2,n:";cin>>n3;cout<<endl<<"для k=3,n:";cin>>n4;cout<<endl<<"для k=4,n:";cin>>n5;
double a=0;//Нижняя граница
double b=1.5;//Верхняя граница
cout<<endl<<endl<<"Таблица:"<<endl;
cout<<"1)k="<<k1<<" n="<<n1<<" Интеграл = "<<integrate(fafb05(a,b,k1),h(a,b,n1),summ(a,h(a,b,n1),k1,n1))<<endl;
cout<<"2)k="<<k2<<" n="<<n2<<" Интеграл = "<<integrate(fafb05(a,b,k2),h(a,b,n2),summ(a,h(a,b,n2),k2,n2))<<endl;
cout<<"3)k="<<k3<<" n="<<n3<<" Интеграл = "<<integrate(fafb05(a,b,k3),h(a,b,n3),summ(a,h(a,b,n3),k3,n3))<<endl;
cout<<"4)k="<<k4<<" n="<<n4<<" Интеграл = "<<integrate(fafb05(a,b,k4),h(a,b,n4),summ(a,h(a,b,n4),k4,n4))<<endl;
cout<<"5)k="<<k5<<" n="<<n5<<" Интеграл = "<<integrate(fafb05(a,b,k5),h(a,b,n5),summ(a,h(a,b,n5),k5,n5))<<endl;
}
