<?php
include "Aksesoris.php";

class Baju extends Aksesoris
{
    private string $kategori;
    private string $size;
    private string $merk;

    function __construct(string $inputKategori, string $inputSize, string $inputMerk)
    {
        // parent::__construct($inputJenis, $inputBahan, $inputWarna)
        $this->kategori = $inputKategori;
        $this->size = $inputSize;
        $this->merk = $inputMerk;
    }

    public function setKategori(string $inputKategori): void
    {
        $this->kategori = $inputKategori;
    }

    public function getKategori(): string
    {
        return $this->kategori;
    }

    public function setSize(string $inputSize): void
    {
        $this->size = $inputSize;
    }

    public function getSize(): string
    {
        return $this->size;
    }

    public function setMerk(string $inputMerk): void
    {
        $this->merk = $inputMerk;
    }

    public function getMerk(): string
    {
        return $this->merk;
    }

    function __destruct() {}
}
