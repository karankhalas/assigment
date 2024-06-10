<!DOCTYPE html>
<html>
<head>
    <title>Largest of Three Numbers</title>

    <?php
    // Define three numbers
    $num1 = 10;
    $num2 = 20;
    $num3 = 30;

    
    $largest = ($num1 > $num2) ? 
                (($num1 > $num3) ? $num1 : $num3) : 
                (($num2 > $num3) ? $num2 : $num3);

    // Display the numbers and the largest number
    echo "<p>The numbers are: $num1, $num2, $num3</p>";
    echo "<p>The largest number is: $largest</p>";
    ?>
</head>
<body>
    <h1>Find the Largest of Three Numbers</h1>
    
</body>
</html>