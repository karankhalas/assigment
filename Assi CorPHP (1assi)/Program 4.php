<!DOCTYPE html>
<html>
<head>
    <title>Fibonacci Series</title>

    <?php
    
    function printFibonacci($n) 
    {
        $num1 = 0;
        $num2 = 1;

        echo "$num1, $num2";

        
        for ($i = 2; $i < $n; $i++) 
        {
            $num3 = $num1 + $num2;
            echo ", $num3";
            $num1 = $num2;
            $num2 = $num3;
        }
    }

    // Number of terms to print
    $n = 10;

    // Call the function to print the Fibonacci series
    printFibonacci($n);
    ?>


</head>
<body>

    <h1>Fibonacci Series</h1>

</body>
</html>


