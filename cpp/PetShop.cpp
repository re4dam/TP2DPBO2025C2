#include <cstdio>
#include <string>

using namespace std;

class PetShop {
  private:
    string ID;
    string namaProduk;
    int hargaProduk;
    int stokProduk;

  public:
    void setID(string inputID) {
        this->ID = inputID;
    }

    string getID() {
        return this->ID;
    }

    void set_nama_produk(string inputNamaProduk) {
        this->namaProduk = inputNamaProduk;
    }

    string get_nama_produk() {
        return this->namaProduk;
    }

    void setHargaProduk(int inputHargaProduk) {
        this->hargaProduk = inputHargaProduk;
    }

    int getHargaProduk() {
        return this->hargaProduk;
    }

    void setStokProduk(int inputStokProduk) {
        this->namaProduk = inputStokProduk;
    }

    int getStokProduk() {
        return this->stokProduk;
    }
};
