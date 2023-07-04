ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_classified_encode, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, str, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_classified_decode, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, str, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()


ZEND_FUNCTION(classified_encode);
ZEND_FUNCTION(classified_decode);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(classified_encode, arginfo_classified_encode)
	ZEND_FE(classified_decode, arginfo_classified_decode)
	ZEND_FE_END
};