class PetShop {
    private String ID; // ID dari produk
    private String nama; // nama dari produk
    private int harga; // harga dari produk
    private int stok; // stok dari produk

    // Constructor tanpa parameter
    public PetShop() {
    }

    // Constructor yang mengisi atribut dari objek
    public PetShop(String input_ID, String input_nama, int input_stok, int input_harga) {
        this.ID = input_ID;
        this.nama = input_nama;
        this.harga = input_harga;
        this.stok = input_stok;
    }

    public void setID(String input_ID) {
        this.ID = input_ID; // Mengatur atribut ID
    }

    public String getID() {
        return this.ID; // Mengambil atribut ID
    }

    public void setNama(String input_nama) {
        this.nama = input_nama; // Mengatur atribut nama
    }

    public String getNama() {
        return this.nama; // Mengambil atribut nama
    }

    public void setHarga(int input_harga) {
        this.harga = input_harga; // Mengatur atribut harga
    }

    public int getHarga() {
        return this.harga; // Mengambil atribut harga
    }

    public void setStok(int input_stok) {
        this.stok = input_stok; // Mengatur atribut kategori
    }

    public int getStok() {
        return this.stok; // Mengambil atribut kategori
    }

    // Destructor tidak diperlukan dalam Java karena Java memiliki garbage
    // collection
}
