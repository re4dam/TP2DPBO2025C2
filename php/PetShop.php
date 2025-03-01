<?php
class PetShop
{
    // private attributes for the class
    private string $ID;
    private string $nama;
    private int $harga;
    private int $stok;
    private string $gambar;

    // constructor for class, also setting each attributes in the process
    function __construct(string $ID, string $nama, int $harga, int $stok, string $gambar)
    {
        $this->ID = $ID;
        $this->nama = $nama;
        $this->harga = $harga;
        $this->stok = $stok;
        $this->gambar = $gambar;
    }

    // Method untuk mengatur atribut ID
    public function setID(string $inputID): void
    {
        $this->ID = $inputID;
    }

    // Method untuk mengambil atribut ID
    public function get_ID(): string
    {
        return $this->ID;
    }

    // Method untuk mengatur atribut nama
    public function setNama(string $inputNama): void
    {
        $this->nama = $inputNama;
    }

    // Method untuk mengambil atribut nama
    public function getNama(): string
    {
        return $this->nama;
    }

    // Method untuk mengatur atribut harga
    public function setHarga(int $inputHarga): void
    {
        $this->harga = $inputHarga;
    }

    // Method untuk mengambil atribut harga
    public function getHarga(): int
    {
        return $this->harga;
    }

    // Method untuk mengatur atribut harga
    public function setStok(int $inputStok): void
    {
        $this->stok = $inputStok;
    }

    // Method untuk mengambil atribut harga
    public function getStok(): int
    {
        return $this->stok;
    }

    // Method untuk mengatur atribut gambar
    public function setGambar(string $inputGambar): void
    {
        $this->gambar = $inputGambar;
    }

    // Method untuk mengambil atribut gambar
    public function getGambar(): string
    {
        return $this->gambar;
    }

    // Menggabungkan masing-masing atribut dan mengembalikan dalam bentuk array
    public function toArray()
    {
        return [
            'id' => $this->ID,
            'nama' => $this->nama,
            'kategori' => $this->kategori,
            'harga' => $this->harga,
            'gambar' => $this->gambar
        ];
    }

    // Destructor
    function __destruct() {}
}
