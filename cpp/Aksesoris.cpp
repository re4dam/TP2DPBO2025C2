#include "PetShop.cpp"

class Aksesoris : public PetShop {
  private:
    string jenis;
    string bahan;
    string warna;

  public:
    Aksesoris() {}

    void setJenis(string inputJenis) {
        this->jenis = inputJenis;
    }

    string getJenis() {
        return this->jenis;
    }

    void setBahan(string inputBahan) {
        this->bahan = inputBahan;
    }

    string getBahan() {
        return this->bahan;
    }

    void setWarna(string inputWarna) {
        this->warna = inputWarna;
    }

    string getWarna() {
        return this->warna;
    }

    ~Aksesoris() {}
};
