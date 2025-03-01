#include "Aksesoris.cpp"
#include <string>

class Baju : public Aksesoris {
  private:
    string kategori;
    string size;
    string merk;

  public:
    Baju() {}

    void setKategori(string inputKategori) {
        this->kategori = inputKategori;
    }

    string getKategori() {
        return this->kategori;
    }

    void setSize(string inputSize) {
        this->size = inputSize;
    }

    string getSize() {
        return this->size;
    }

    void setMerk(string inputMerk) {
        this->merk = inputMerk;
    }

    string getMerk() {
        return this->merk;
    }

    ~Baju() {}
};
