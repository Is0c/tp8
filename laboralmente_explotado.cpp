#include <iostream>
#include <string>
using namespace std;
class cEmpleados{
    private:
    int salario;
    string nombre;
    int horas;
    public:
    void Aumento(){
        if(horas==8){
            salario+=250000;
            cout<<"trabajaste por 8 horas diarias tu salario es 250000";
            cout<<"\nAhora tu salario es: "<<salario<<endl;
        }
        else if(horas==10){
            salario+=300000;
            cout<<"trabajaste por 10 horas, ganaste 300000";
            cout<<"\nAhora tu salario es: "<<salario<<endl;
        }
        else if(horas>=12){
            salario+=350000;
            cout<<"trabajo por 12 horas, su salario es de 350000";
            cout<<"\nAhora tu salario es: "<<salario<<endl;
        }
    }
    void inicializar(){
        cout<<"ingrsar su nombre: ";
        cin>>nombre;
        cout<<"ingrese su salario: ";
        cin>>salario;
        cout<<"ingrese cuanto trabaja por dia: ";
        cin>>horas;
    }
};

int main() {
    cEmpleados persona;
    persona.inicializar();
    persona.Aumento();
}
