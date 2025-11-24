<?php
// Input
echo "Masukkan nama barang: ";
$nama = trim(fgets(STDIN));

echo "Masukkan harga barang: ";
$harga = floatval(trim(fgets(STDIN)));

echo "Masukkan jumlah beli: ";
$jumlah = intval(trim(fgets(STDIN)));

// Hitung total
$total = $harga * $jumlah;

// Hitung diskon
if ($total > 12800) {
    $diskon = $total * 0.08;
} else {
    $diskon = 0;
}

$total_bayar = $total - $diskon;

// Output
echo "\n===== STRUK PEMBELIAN =====\n";
echo "Nama barang   : $nama\n";
echo "Harga satuan  : $harga\n";
echo "Jumlah beli   : $jumlah\n";
echo "Total harga   : $total\n";
echo "Diskon        : $diskon\n";
echo "Total bayar   : $total_bayar\n";
echo "=============================\n";