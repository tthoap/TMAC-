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

int main()
{
    ConNguoi nguoi;
    nguoi.ho_ten = "Tran Thi Hoa";
    nguoi.tuoi = 18;
    std::cout << nguoi.tuoi << + " " + nguoi.ho_ten<< std::endl;
    return 0;
}