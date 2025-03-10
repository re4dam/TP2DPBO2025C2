<?php
include "PetShop.php";

class Aksesoris extends PetShop
{
    private string $jenis;
    private string $bahan;
    private string $warna;

    function __construct(string $inputID, string $inputNama, int $inputHarga, int $inputStok, string $inputGambar, string $inputJenis, string $inputBahan, string $inputWarna)
    {
        parent::__construct($inputID, $inputNama, $inputHarga, $inputStok, $inputGambar);
        $this->jenis = $inputJenis;
        $this->bahan = $inputBahan;
        $this->warna = $inputWarna;
    }

    public function setJenis(string $inputJenis): void
    {
        $this->jenis = $inputJenis;
    }

    public function getJenis(): string
    {
        return $this->jenis;
    }

    public function setBahan(string $inputBahan): void
    {
        $this->bahan = $inputBahan;
    }

    public function getBahan(): string
    {
        return $this->bahan;
    }

    public function setWarna(string $inputWarna): void
    {
        $this->warna = $inputWarna;
    }

    public function getWarna(): string
    {
        return $this->warna;
    }

    function __destruct() {}
}
