<?php
session_start();

if ($_POST['login'] != "Belmon" && $_POST['password'] != "dawg") {
    echo "Podano błędne dane logowania!" . "<br>";
//    echo "Spróbuj ponownie!: ";
    echo "<a href=zadanie4_3.html>Spróbuj ponownie!</a>";
}
else{
        $_SESSION['logged'] = true;
        header('Location: http://localhost:63342/zadanie4_3.php/zadanie4_3_out.php');
    }
