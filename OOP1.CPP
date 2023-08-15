#include<iostream>
using namespace std;
class Cars{
    private:
    //member variables or data member
        string company_name;
        string model_name;
        string fuel_type;
        float mileage;
        double price;
    public:
    //member functions
        Cars(){
            cout<<"Default constructor called"<<endl;

        }
        void setData(string cname, string mname, string ftype, float m, double p){
            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        }
        void displayData(){
            cout<<"Car Properties"<<endl;
            cout<<"Company Name: "<<company_name<<endl;
            cout<<"Model Name: "<<model_name<<endl;
            cout<<"Fuel Type: "<<fuel_type<<endl;
            cout<<"Mileage: "<<mileage<<endl;
            cout<<"Price: "<<price<<endl;
        }

};

int main(){

    Cars car1,car2;
    // car1.setData("Toyota", "Altis", "Petrol", 15.5, 1500000);
    car1.displayData();

    
    
    return 0;
}