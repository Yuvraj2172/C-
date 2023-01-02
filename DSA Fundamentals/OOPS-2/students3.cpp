class Student3{
    public:
    int rollNumber;
    int age;
   static int totalStudents; // total number of students present...  
   Student3(){
    totalStudents+=1;
   }
   static void increasetsby10(){
    totalStudents+=10;
   }
   static int getts(){
    return totalStudents;}
};
int Student3 :: totalStudents =0 ;//initialization of static data members...
