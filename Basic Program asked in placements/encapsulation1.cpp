#include<iostream>
using namespace std;
// class Adder{
//     private:
//     int total;
//     public:
//     Adder(int i=0){
//         total=i;
//     }
//     //interface for outside world 
//     void addNum(int number){
//         total+=number;

//     }
//     int gettotal(){
//         return total;
//     }
// };
// int main(){
//     Adder a;
//     a.addNum(10);
//     a.addNum(20);
//     a.addNum(30);
//     cout<<"Total " << a.getTotal() << endl ;
//     return 0;
// }
class employee{
private : int salary;
public:
void setsalary(int s){
    salary=s;
}
// Geettr
int getsalary(){
    return salary;
}
};
int main(){
    employee obj;
    obj.setsalary(400);
    cout<<obj.getsalary;
    return 0;
}