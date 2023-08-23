#include<iostream>
using namespace std;
int main() {
    

string figureType;
cout << "Введите 1 чтобы выбрать квадрат\n";
cout << "Ввeдите 2 чтобы выбрать круг\n";
cout << "Введите 3 чтобы выбрать трeугольник\n";
cout << "Введите 4 чтобы выбрать ромб\n";
cin >> figureType;




    if(figureType == "1") {
        string tip; 
        cout << "введите что хотите найти" << endl;
        cin >> tip;
        
        if(tip == "perimetr") {
            
            int x;
            cout << "Введите сторону квадрата" << endl;
            cin >> x;
            
            cout << x*4;
            
        }
        
        if(tip == "square") {
            int x;
            cout << "Введите сторону квадрата" << endl;
            cin >> x;
            
            cout << x*x;
        }
        
        
        
    }





    if(figureType == "2") {
        string tip; 
        cout << "введите что хотите найти" << endl;
        cin >> tip;
        
        if(tip == "1") {
            cout << "периметр" << endl;
        
        }else if(tip == "area") {
            int radius;
            cout << "Введите радиус круга \n";
            cin >> radius;
            float pi = 3.14;
            float a;
            a = pi * radius * radius;
            cout << "area:" << a << endl;
        }
    }
    
    
    
    
    if(figureType == "3") {
        string tip; 
        cout << "введите что хотите найти" << endl;
        cin >> tip;
         
         if(tip == "1") {
            cout << "периметр" << endl;
        
        } else if(tip == "area") {
            int square;
            cout << "Введите сторону" << endl;
            
            cout << square << endl;
        } 
    
    }
    
    
    
    
    
    if(figureType == "4") {
        string tip; 
        cout << "введите что хотите найти" << endl;
        cin >> tip;
    
    
    
        
    }

}