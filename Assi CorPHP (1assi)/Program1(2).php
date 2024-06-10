<!DOCTYPE html>
<html>
<head>
    <title>Find Thursday</title>

    <?php
    if ($_SERVER['REQUEST_METHOD'] == 'POST') {
        $day = $_POST['day'];

        switch ($day) 
        {
            case 1:
                $dayName = 'Sunday';
                break;
            case 2:
                $dayName = 'Monday';
                break;
            case 3:
                $dayName = 'Tuesday';
                break;
            case 4:
                $dayName = 'Wednesday';
                break;
            case 5:
                $dayName = 'Thursday';
                break;
            case 6:
                $dayName = 'Friday';
                break;
            case 7:
                $dayName = 'Saturday';
                break;
            default:
                $dayName = 'Invalid input';
                break;
        }

        echo "<h2>The day is: $dayName</h2>";
    }
    ?>


</head>
<body>
    <form method="POST">
        <label>Enter a number (1-7) for the day of the week: </label>
        
        <input type="number" name="day" min="1" max="7" required>
        
        <input type="submit" name="submit" value="Find Day">
    </form>

</body>
</html>