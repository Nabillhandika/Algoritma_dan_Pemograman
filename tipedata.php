<?php
$nim = 'A';
$nama = "Nabill Handika Pratama";
$umur = 18;
$nilai = 82.25;
$status = TRUE;

echo "---Belajar Tipe Data --- <br><br>";
echo "Tipe Data Char :" .$nim."<br>";
echo "Tipe Data String :$nama<br>";
printf "Tipe Data Int :".$umur;
printf "<br>";
printf ("Tipe Data Float :%.5f<br><br>",$nilai);
echo "Tipe Data Boleean :<br><br>";
if($status)
    echo "Status : Aktif";
else 
    echo "Status : Tidak Aktif";
?>