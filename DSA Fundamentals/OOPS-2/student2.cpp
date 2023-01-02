class Student2{
    public:
    int age ;
    const int rollNumber;
    int &x; //reference variable of age
    Student2(int r, int age) : rollNumber(r), age(age),x(this->age){
    }
    void display(){
        cout<<this->age <<" "<<this->rollNumber<<endl;
    }
};