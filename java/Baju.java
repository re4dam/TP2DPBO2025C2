class Baju extends Aksesoris {
    private String kategori;
    private String size;
    private String merk;

    public Baju() {
    }

    public Baju(String inputKategori, String inputSize, String inputMerk) {
        this.kategori = inputKategori;
        this.size = inputSize;
        this.merk = inputMerk;
    }

    public void setKategori(String inputKategori) {
        this.kategori = inputKategori;
    }

    public String getKategori() {
        return this.kategori;
    }

    public void setSize(String inputSize) {
        this.size = inputSize;
    }

    public String getSize() {
        return this.size;
    }

    public void setMerk(String inputMerk) {
        this.merk = inputMerk;
    }

    public String getMerk() {
        return this.merk;
    }
}
