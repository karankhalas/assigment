<!DOCTYPE html>
<html>
<head>
    <title>Armstrong Number Check</title>

<?php
    function isArmstrong($num) 
    {
        $sum = 0;
        $temp = $num;
        $n = strlen((string)$num);

        while ($temp != 0) 
        {
            $digit = $temp % 10;
            $sum += pow($digit, $n);
            $temp = (int)($temp / 10);
        }

        return ($sum == $num);
    }

    
    $number = 153;

    if (isArmstrong($number)) 
    {
        echo "<p>$number is an Armstrong number.</p>";
    } 
    else 
    {
        echo "<p>$number is not an Armstrong number.</p>";
    }
    ?>

</head>
<body>

    <h1>Check if a Number is Armstrong</h1>
 
</body>
</html>