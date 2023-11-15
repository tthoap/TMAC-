#include <iostream>
#include <string>

struct ConNguoi
{
    int tuoi;
    float cao;
    float can_nang;
    char nhommau;
    bool conzin;
    int so_do_3vong;
    std::string ho_ten;
};

void Chiso_BMI (ConNguoi nguoi){
    float bmi = nguoi.can_nang / (nguoi.cao * nguoi.cao);
    std::string ket_qua;
    if(bmi < 18.5)
    {
        ket_qua = "suy dinh duong";
    }
    else if(bmi > 25)
    {
        ket_qua = "beo phi";   
    }
    else
    {
        ket_qua = "dang chuan";
    }
    std::cout << "Ket qua BMI cua ban " + nguoi.ho_ten + " la " << ket_qua << std::endl;
    }
int main()
{
    ConNguoi nguoi;
    nguoi.ho_ten = "Tran Thi Hoa";
    nguoi.tuoi = 18;
    nguoi.cao = 1.58;
    nguoi.can_nang = 55;
    std::cout << nguoi.tuoi << + " " + nguoi.ho_ten << std::endl;
    Chiso_BMI(nguoi);
    return 0;
}