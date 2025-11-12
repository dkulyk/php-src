--TEST--
#[\NoSerialize]: Trait level.
--FILE--
<?php

#[NoSerialize]
trait T {}

?>
--EXPECTF--
Fatal error: Cannot apply #[\NoSerialize] to trait T in %s on line %d
