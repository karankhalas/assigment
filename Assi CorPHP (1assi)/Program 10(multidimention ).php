<?php


$multiArray = array(
    array("Dhoni", 30, "Rachi"),
    array("Kohli", 25, "Delhi"),
    array("Rohit", 35, "New Delhi")
);

$multiArray = [                             // Using short array syntax

    ["Dhoni", 30, "Rachi"],
    ["Kohli", 25, "Delhi"],
    ["Rohit", 35, "New Delhi"]
];


echo $multiArray[1][0]; 

>