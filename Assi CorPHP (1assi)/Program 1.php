<!DOCTYPE html>
<html>
<head>
    <title>Marks and Grade Calculation</title>


    <?php
    if ($_SERVER['REQUEST_METHOD'] == 'POST') {
        $physics = $_POST['physics'];
        $chemistry = $_POST['chemistry'];
        $biology = $_POST['biology'];
        $mathematics = $_POST['mathematics'];
        $computer = $_POST['computer'];

        $total = $physics + $chemistry + $biology + $mathematics + $computer;
        $percentage = $total / 5;

        echo "<h2>Results:</h2>";
        echo "Total Marks: $total<br>";
        echo "Percentage: $percentage%<br>";

        if ($percentage >= 90) 
        {
            $grade = 'A';
        }
         elseif ($percentage >= 80) 
        {
            $grade = 'B';
        }
         elseif ($percentage >= 70) 
        {
            $grade = 'C';
        }
         elseif ($percentage >= 60) 
        {
            $grade = 'D';
        }
         elseif ($percentage >= 50) 
        {
            $grade = 'E';
        }
         else 
        {
            $grade = 'F';
        }

        echo "Grade: $grade<br>";
    }
    ?>


</head>
<body>
    <form method="POST">
        <label>Physics: </label><input type="number" name="physics" required><br>

        <label>Chemistry: </label><input type="number" name="chemistry" required><br>

        <label>Biology: </label><input type="number" name="biology" required><br>

        <label>Mathematics: </label><input type="number" name="mathematics" required><br>

        <label>Computer: </label><input type="number" name="computer" required><br>

        <input type="submit" name="submit" value="Calculate">
    </form>

</body>
</html>
