<?php
// Define the JSON string
$jsonString = '{
    "name": "John Doe",
    "age": 30,
    "email": "john.doe@example.com",
    "address": {
        "street": "123 Main St",
        "city": "Anytown",
        "state": "CA",
        "zip": "12345"
    },
    "phoneNumbers": [
        "123-456-7890",
        "987-654-3210"
    ]
}';

// Decode the JSON string into a PHP array
$decodedArray = json_decode($jsonString, true);

// Check if decoding was successful
if (json_last_error() === JSON_ERROR_NONE) {
    // Print the decoded array
    echo "Decoded JSON into PHP array:\n";
    print_r($decodedArray);
} else {
    // Handle the error
    echo "Error decoding JSON: " . json_last_error_msg();
}
?>
