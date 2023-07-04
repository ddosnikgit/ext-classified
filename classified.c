#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "php.h"
#include "ext/standard/info.h"

#include "php_classified.h"
#include "classified_arginfo.h"

PHP_FUNCTION(classified_encode) {
    char *str = "";
    size_t str_len;

    ZEND_PARSE_PARAMETERS_START(1,1)
        Z_PARAM_OPTIONAL
		Z_PARAM_STRING(str, str_len)
    ZEND_PARESE_PARAMETERS_END();

    r = strpprintf(0, "Your input: %s", str);

    RETURN_STR(r)
}

PHP_FUNCTION(classified_decode) {
    char *encodedStr = "";
    size_t encodedStr_len;

    ZEND_PARSE_PARAMETERS_START(1,1)
        Z_PARAM_OPTIONAL
		Z_PARAM_STRING(encodedStr, encodedStr_len)
    ZEND_PARESE_PARAMETERS_END();

    r = strpprintf(0, "Your input: %s", encodedStr);

    RETURN_STR(r)
}

zend_module_entry classified_module_entry = {
	STANDARD_MODULE_HEADER,
	"classified",
	ext_functions,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	PHP_CLASSIFIED_VERSION,
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_CLASSIFIED
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(classified)
#endif