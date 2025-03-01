<?php
// Memasukkan definisi kelas Baju
include "Baju.php";

// Data awal yang sudah ada
$data = [
    new Baju(1, 'Baju Anjing Polos', 50000, 10, '', 'Baju', 'Katun', 'Merah', 'Anjing', 'M', 'PetCo'),
    new Baju(2, 'Baju Kucing Motif', 60000, 15, '', 'Baju', 'Sutra', 'Biru', 'Kucing', 'S', 'MeowStyle'),
    new Baju(3, 'Jaket Anjing Waterproof', 120000, 8, '', 'Baju', 'Polyester', 'Hitam', 'Anjing', 'L', 'PetGear'),
    new Baju(4, 'Kaos Kucing Nyaman', 45000, 20, '', 'Baju', 'Katun', 'Abu-abu', 'Kucing', 'M', 'PawFashion'),
    new Baju(5, 'Sweater Anjing Hangat', 90000, 12, '', 'Baju', 'Wol', 'Coklat', 'Anjing', 'XL', 'DoggyWear')
];

// Menambahkan 3 data baru secara statis
$data[] = new Baju(6, 'Jaket Kucing Winter', 130000, 5, '', 'Baju', 'Wol', 'Putih', 'Kucing', 'L', 'MeowWarm');
$data[] = new Baju(7, 'Kaos Anjing Santai', 40000, 18, '', 'Baju', 'Katun', 'Hijau', 'Anjing', 'M', 'DogRelax');
$data[] = new Baju(8, 'Rompi Kucing Stylish', 110000, 7, '', 'Baju', 'Denim', 'Biru', 'Kucing', 'S', 'PawTrendy');

// Fungsi untuk memformat harga ke dalam format Rupiah
function formatRupiah($harga)
{
    return 'Rp ' . number_format($harga, 0, ',', '.');
}
?>

<!DOCTYPE html>
<html>

<head>
    <title>PetShop</title>
    <style>
        table {
            border-collapse: collapse;
            width: 100%;
        }

        td,
        th {
            border: 1px solid #ddd;
            padding: 8px;
            text-align: center;
        }

        th {
            background-color: #f2f2f2;
        }
    </style>
</head>

<body>
    <h1>Daftar Produk Petshop</h1>
    <table>
        <tr>
            <th>No</th>
            <th>ID</th>
            <th>Nama</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Hewan</th>
            <th>Ukuran</th>
            <th>Merk</th>
        </tr>
        <?php foreach ($data as $index => $item): ?>
            <tr>
                <td><?= $index + 1 ?></td>
                <td><?= $item->get_ID() ?></td>
                <td><?= $item->getNama() ?></td>
                <td><?= formatRupiah($item->getHarga()) ?></td>
                <td><?= $item->getStok() ?></td>
                <td><?= $item->getBahan() ?></td>
                <td><?= $item->getWarna() ?></td>
                <td><?= $item->getKategori() ?></td>
                <td><?= $item->getSize() ?></td>
                <td><?= $item->getMerk() ?></td>
            </tr>
        <?php endforeach; ?>
    </table>
</body>

</html>
