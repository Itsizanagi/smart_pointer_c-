#include <iostream>
#include <memory>
using namespace std;

class persona{
    public:
        int idade=20;
        int getage(){
            return idade;
        }
        void setage(int age){
            this->idade=age;
        }
    private:
};


int main(){

    //shared_ptr<int>pnum(new int); // ptr compartilhado
    //shared_ptr<int>pnum2=pnum;
    //unique_ptr<int>pnum(new int(10)) // ptr unico

    //string* str=new string("cantinho do vale");
    //cout << *str << " - > tamanho: " << str->size() << endl;
    //delete str;

    //unique_ptr<string>str(new string("cantinho do vale")); // com smart pointer.
    //cout << *str << " - > tamanho: " << str->size() << endl;

    //persona *perso=new persona();
    //cout << perso->getage() << endl;
    //delete perso;

    unique_ptr<persona>perso(new persona);
    unique_ptr<persona>perso2(new persona);
    perso->setage(10);
    perso2->setage(104);

    cout << "person 1 age: "<< perso->getage() << endl;
    cout << "person 2 age: "<< perso2->getage() << endl;



    return 0;
}
