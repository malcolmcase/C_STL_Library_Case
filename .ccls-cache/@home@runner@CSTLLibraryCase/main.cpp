//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <stack>
#include <cassert>
#include <set>
using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added

class MyClassVector1 
{ 
  private:  
      vector<int> vec1; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec1 = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec1.size(); i++) 
          {
              cout << vec1[i] << " "; 
          }    
      } 
};

class MyClassVector2
{
  private:
    vector<int> vec2;
   public:
    MyClassVector2 (vector<int> v) : vec2(v)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec2.size(); i++)
            cout << vec2[i] << " ";
    }
};

class MyClassVector3
{
  private:
    vector<int>& vec3;
  public:
      // this is the right way to assign
      // the reference of stl container
      MyClassVector3 (vector<int>& arr)
          : vec3(arr)
      {
      }
      void print()
      {
          /// print the value of vector
          for (int i = 0; i < vec3.size(); i++)
              cout << vec3[i] << " ";
      }
};

int main() 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

    //add 3 elements to the vi vector
    vi.push_back(11);
    vi.push_back(22);
    vi.push_back(33);
  
   // add 3 elements to the vs vector
    vs.push_back("Baby");
    vs.push_back("You're");
    vs.push_back("a Robocop");
  
   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n";
    for(int i = 0; i < vi.size(); i++)
    {
      cout << vi[i] << "\n";
    }
  
   // display the 3 elements in the vs vector
    cout << "\nValues in vs: \n";
    for(int i=0; i < vs.size(); i++)
    {
      cout << vs[i] << "\n";
    }
  
    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

    cout << "\nVector_as_Class_Member_1\n"; 
    vector<int> vec1; 
        for (int i = 1; i <= 5; i++) 
            vec1.push_back(i); 
        MyClassVector1 obj1(vec1); 
        obj1.print(); 

    cout << "\nVector_as_Class_Member_2\n";
    vector<int> vec2;
        for (int i = 2; i <= 6; i++)
          vec2.push_back(i);
        MyClassVector2 obj2(vec2);
        obj2.print();

    cout << "\nVector_as_Class_Member_3\n";
    vector<int> vec3;
        for (int i = 3; i <= 7; i++)
          vec3.push_back(i);
        MyClassVector3 obj3(vec3);
        obj3.print();

    /****Section_Name***STL_Iterators*/ 
    
    vector<int> vint(10);  //vector with 10 numbers
    vint[0] = 10;
    vint[1] = 20;
    vint[2] = 30;
    vint[3] = 40;
    vint[4] = 50;
    vint[5] = 60;
    vint[6] = 70;
    vint[7] = 80;
    vint[8] = 90;
    vint[9] = 100;

    cout << "\n \nValues expressed through STL iterators:\n";
    vector<int> :: iterator it;
    for (it = vint.begin(); it != vint.end(); ++it )
      {
        cout << *it << " ";
      }

    /****Section_Name*** Stack*/

    stack<int> st;

    st.push(100);  //push number on the stack
    assert(st.size() == 1); //verify 1 element is in stack
    assert(st.top() == 100); //verify element = 100

    st.top() = 456; //assign new value
    assert(st.top() == 456); //verify new value

    st.pop(); //remove element (last element?)
    assert(st.empty() == true); //veify stack is empty

    //CREATE ITERATOR FOR STACK?
  
    /****Section_Name**** Set*/

    cout << "\n \nValues expressed in set:\n";
    set<int> iset; //set of unique int numbers

    iset.insert(11); //insert values
    iset.insert(-11);
    iset.insert(55);
    iset.insert(22);
    iset.insert(22);
    if (iset.find(55) != iset.end())  //if value is not found
      {
        iset.insert(55);  //insert value
      }
    assert(iset.size() == 4); //verify size
  
    set <int> :: iterator setit;
  
    for (setit = iset.begin(); setit != iset.end(); setit++)
      {
        cout << *setit << " " ;
      }

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }