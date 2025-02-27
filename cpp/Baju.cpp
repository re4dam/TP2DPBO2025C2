#include "Aksesoris.cpp"

class Baju : public Aksesoris {
  private:
    string untuk;
    string size;
    string merk;

  public:
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
};
