

#include <iostream>
using namespace std;

  



class ComplexNumbers//Class
{
public:




    ComplexNumbers()//Default Constructor
    {
        real = 10;
        img = 3;
    }
  

    ComplexNumbers operator  -(const ComplexNumbers& Cn)//Subtraction Operator

    {
        ComplexNumbers temp;

        temp.real = real - Cn.real;
        temp.img = img - Cn.img;

        return temp;

    }
    
    friend istream& operator >>(istream& insert, ComplexNumbers& Cp)//input operator
    {
       
        insert >> Cp.real;
        insert >> Cp.img;

            return insert;

   }

  
    void print()//print Funtion
    {
        if (img > 0)
            cout << "<" << real << "+" << img << "i>" << endl;
        else

            cout << "<" << real << img << "i>" << endl;

    }
private:

    int real;
    int img;

};

  int main()
 {

      ComplexNumbers C1, C2, C3;

      cout<< "Real and Imaginary Numbers for First Complex Number"<<endl;

      cin >> C1;


      cout << "Real and Imaginary Numbers for Second Complex Number" << endl;
   
      cin >> C2;

     C3 = C1 - C2;

     C3.print();


    
}


