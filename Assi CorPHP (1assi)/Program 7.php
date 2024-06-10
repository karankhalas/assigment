<?php
// Function to get random values from an array
function getRandomValues($array, $numValues) {
    // Check if the number of values to be picked is more than the array length
    if ($numValues > count($array)) {
        return "Number of values requested exceeds array length";
    }

    // Use array_rand() to get random keys
    $randomKeys = array_rand($array, $numValues);
    
    // If $numValues is 1, array_rand() returns a single key, not an array
    if ($numValues == 1) {
        return [$array[$randomKeys]];
    }
    
    // Use the random keys to get the corresponding values
    $randomValues = [];
    foreach ($randomKeys as $key) {
        $randomValues[] = $array[$key];
    }
    
    // Return the array with random values
    return $randomValues;
}

