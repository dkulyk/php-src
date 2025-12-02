/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: cd1bba04baee9ed10486b8ef53f8829aedf23835 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_IntlDatePatternGenerator___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, locale, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_IntlDatePatternGenerator_create, 0, 0, IntlDatePatternGenerator, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, locale, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_class_IntlDatePatternGenerator_getBestPattern, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, skeleton, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(IntlDatePatternGenerator, __construct);
ZEND_METHOD(IntlDatePatternGenerator, create);
ZEND_METHOD(IntlDatePatternGenerator, getBestPattern);

static const zend_function_entry class_IntlDatePatternGenerator_methods[] = {
	ZEND_ME(IntlDatePatternGenerator, __construct, arginfo_class_IntlDatePatternGenerator___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(IntlDatePatternGenerator, create, arginfo_class_IntlDatePatternGenerator_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(IntlDatePatternGenerator, getBestPattern, arginfo_class_IntlDatePatternGenerator_getBestPattern, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_IntlDatePatternGenerator(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "IntlDatePatternGenerator", class_IntlDatePatternGenerator_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_NOT_SERIALIZABLE);

	zend_add_class_attribute(class_entry, ZSTR_KNOWN(ZEND_STR_NO_SERIALIZE), 0);

	return class_entry;
}
