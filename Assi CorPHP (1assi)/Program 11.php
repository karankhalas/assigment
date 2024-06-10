<?php

function removeDuplicates($array) 
{
    
    $uniqueArray = array_unique($array);
    return $uniqueArray;
}


$array = ["Apple", "Banana", "Apple", "Cherry", "Banana", "Date", "Cherry"];

echo "Original Array:\n";
print_r($array);


$uniqueArray = removeDuplicates($array);


echo "\nArray After Removing Duplicates:\n";
print_r($uniqueArray);
?>
