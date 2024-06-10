<!DOCTYPE html>
<html>
<head>
    <title>Leap Years between 1901 and 2016</title>

<?php
    echo "<ul>";
    for ($year = 1901; $year <= 2016; $year++) 
    {
        if ($year % 4 == 0) 
        { 
            if ($year % 100 == 0) 
            { 
                if ($year % 400 == 0) 
                { 
                    echo "<li>$year is a leap year.</li>";
                }
            }
             else 
            {
                echo "<li>$year is a leap year.</li>";
            }
        }
    }
    echo "</ul>";
    ?>

</head>
<body>
    
    <h1>Leap Years between 1901 and 2016</h1>
    
</body>
</html>
