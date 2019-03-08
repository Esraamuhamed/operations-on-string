#include <iostream>
#include <cstring>


using namespace std;

class StudentName
{
private:
    string name ;

public:

///**************constructors**************

    StudentName()
    {
        name = "no name" ;
    }

    StudentName(string name)
    {
        ///*****check*****
        string temp_name = "" ;
        string a [13];
        int c = 0 ;
        name[name.length()]=' ';
        for (int i=0 ; i<=name.length(); i++)
        {
            temp_name = temp_name + name[i] ;
            if (name[i]==' ')
            {
                a[c]=temp_name;
                c++;
                temp_name = "";
            }
        }
        if ( c <= 1)
        {
            name += ' ' + name +' '+name;
            this->name=name;
        }

        else if ( c <= 2 )
        {
            name += ' ' + a[1] ;
            this->name=name;
        }

        else
            this->name=name;

        }
///************set Fun.****************

    void setName(string name)
    {
        this -> name = name ;
    }
///**************get Fun. **************

    string getName()
    {
        return name ;
    }

///**************print**********************

    void print()
    {
        string temp_name = "" ;
      //  int c = 1 ;
        name[name.length()]=' ';

        for (int i=0 ; i<=name.length(); i++)
        {
            temp_name = temp_name + name[i] ;
            if (name[i]==' ')
            {
                cout<<temp_name<<endl ;
                temp_name = "";
               // c++;
            }
        }
    }

///***************replace********************

    string Replace(int i,int j)
    {
        string temp_name = "" ;
        string a [13];
        int c = 1 ;
        name[name.length()]=' ';
        for (int i=0 ; i<=name.length(); i++)
        {
            temp_name = temp_name + name[i] ;
            if (name[i]==' ')
            {
                a[c]=temp_name;
                c++;
                temp_name = "";
            }
        }

        string temp ;
        if ( i<c && j<c)
        {
            cout << "True" << endl ;
            swap(a[i],a[j]);
            name="";
            for (int l = 0 ; l < c ; l++)
            {
                name = name + a[l]+' ';

            }

            return name ;

        }
        else
            cout << "False" << endl ;

    }
};

///***main******************

int main()
{
    int pos1, pos2 ;
    string name ;

///***********1******************
    name="esraa mohamed abdelrhman morsy";
    StudentName n1(name) ;
    n1.Replace( 2 , 5 ) ;
    n1.print();
cout<<endl<<"********1***********"<<endl;

///***********2******************
    name="esraa taha";
    StudentName n2(name) ;
    n2.Replace( 1 , 2 ) ;
    n2.print();
cout<<endl<<"********2***********"<<endl;

///***********3******************
    name="lubna";
    StudentName n3(name) ;
    n3.Replace( 1 , 3 ) ;
    n3.print();
cout<<endl<<"********3***********"<<endl;

///***********4******************
    name="aya mohamed";
    StudentName n4(name) ;
    n4.Replace( 1 , 3) ;
    n4.print();
cout<<endl<<"********4***********"<<endl;

///***********5******************
    name="aya mohamed ali ibrahim morsy";
    StudentName n5(name) ;
    n5.Replace( 2 , 4 ) ;
    n5.print();
cout<<endl<<"********5***********"<<endl;

    return 0;
}
