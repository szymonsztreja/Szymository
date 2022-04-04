<?php

session_start();

if(isSet($_SESSION['logged'])){
    unset($_SESSION['logged']);
    echo"Zalogowałeś się poprawnie!";
    echo '<a href=zadanie4_3.html>Wyloguj</a><br>';
    session_destroy();
}
else {
    echo "Błąd!";
}
