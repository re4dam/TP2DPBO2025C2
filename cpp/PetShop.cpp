#include <string>

using namespace std;

class PetShop {
  private:
    string ID;
    string namaProduk;
    int hargaProduk;
    int stokProduk;

  public:
    PetShop() {}

    void setID(string inputID) {
        this->ID = inputID;
    }

    string getID() {
        return this->ID;
    }

    void setNamaProduk(string inputNamaProduk) {
        this->namaProduk = inputNamaProduk;
    }

    string getNamaProduk() {
        return this->namaProduk;
    }

    void setHargaProduk(int inputHargaProduk) {
        this->hargaProduk = inputHargaProduk;
    }

    int getHargaProduk() {
        return this->hargaProduk;
    }

    void setStokProduk(int inputStokProduk) {
        this->stokProduk = inputStokProduk;
    }

    int getStokProduk() {
        return this->stokProduk;
    }

    ~PetShop() {}
};
