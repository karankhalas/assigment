<!DOCTYPE html>
<html>
<head>
    <title>Special Format Print</title>
    <style>
        pre {
            font-size: 18px;
        }
    </style>

</head>
<body>
    <h1>Special Format Output</h1>
    <pre>
        <?php
        function printSpecialFormat($n) {
            for ($i = 5; $i <= 8; $i++) {
                echo $i . " " . ($i + 4) . "\n";
                echo ($i + 21) . ($i + 4) . "\n";
            }
        }

        printSpecialFormat(4);
        ?>
    </pre>
</body>
</html>