--TEST--
#[\NoSerialize]: Enum level.
--FILE--
<?php

#[NoSerialize]
enum A {
    case A;
}

try {
echo serialize(A::A);
} catch (Exception $e) {
    echo $e->getMessage(), "\n";
}

?>
--EXPECTF--
Serialization of 'A' is not allowed
