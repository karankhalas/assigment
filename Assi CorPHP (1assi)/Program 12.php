<?php

function getRandomValues($array, $numValues) 
{
    
    $randomKeys = array_rand($array, $numValues);

    
    if ($numValues == 1) 
    {
        return $array[$randomKeys];
    }

    
    $randomValues = [];
    foreach ($randomKeys as $key) 
    {
        $randomValues[] = $array[$key];
    }

    return $randomValues;
}

$array = ["Apple", "Banana", "Cherry", "Date", "Elderberry", "Fig", "Grape"];


$randomValue = getRandomValues($array, 1);
echo "Random Value: $randomValue\n";


$randomValues = getRandomValues($array, 3);
echo "Random Values: " . implode(", ", $randomValues) . "\n";
?>
