<?php
function checkEvenOdd($num) 
{
    
    $result = ($num & 1) ? 'Odd' : 'Even';

    echo $result;
}

// Example usage
checkEvenOdd(10); 
checkEvenOdd(7); 
?>
