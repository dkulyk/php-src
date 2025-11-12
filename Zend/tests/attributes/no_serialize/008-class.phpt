--TEST--
#[\NoSerialize]: Class level.
--FILE--
<?php

#[NoSerialize]
class A {
    public $a = 1;
}

class B extends A {}

try {
    echo serialize(new A);
} catch (Exception $e) {
    echo $e->getMessage(), "\n";
}
try {
    serialize(new B);
} catch (Exception $e) {
    echo $e->getMessage(), "\n";
}

try {
    unserialize('O:1:"A":1:{s:1:"a";i:1;}');
} catch (Exception $e) {
    echo $e->getMessage(), "\n";
}

try {
    unserialize('O:1:"B":1:{s:1:"a";i:1;}');
} catch (Exception $e) {
    echo $e->getMessage(), "\n";
}


?>
--EXPECTF--
Serialization of 'A' is not allowed
Serialization of 'B' is not allowed
Unserialization of 'A' is not allowed
Unserialization of 'B' is not allowed
