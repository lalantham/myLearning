<?php
    $con = mysqli_connect('localhost', 'root', '', 'uni');

    $data = $_GET['para'];

    $query = "SELECT * FROM users WHERE name LIKE '{$data}%'";

    $result = mysqli_query($con, $query);

    $dataArray = array();

    while($arrData = mysqli_fetch_assoc($result)){
        $dataArray[] = $arrData;
    }

    $dataJSON = json_encode($dataArray);

    echo $dataJSON;

    mysqli_close($con);
?>