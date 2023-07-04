#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <math.h>
#include "php.h"
#include "ext/standard/info.h"

#include "php_classified.h"

PHP_FUNCTION(str_to_center){
    char *str = "";
    size_t str_len = 0;
	size_t paddingLen;
	char *pointers;
    zend_string *r;

    ZEND_PARSE_PARAMETERS_START(0,1)
        Z_PARAM_OPTIONAL
		Z_PARAM_STRING(str, str_len)
    ZEND_PARSE_PARAMETERS_END();

    //r = strpprintf(0, "Your input: %s", str);

	paddingLen = (size_t)floor((((size_t)80) - str_len) / 2);

	char *ret = malloc (strlen (' ') * paddingLen + paddingLen);
	strcpy (ret, ' ');
	while (--paddingLen > 0) {
		strcat(ret, ' ');
	}

	r = strpprintf(0, "%s%s", ret, str);

    RETURN_STR(r);
}

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_str_to_center, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, str, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

static const zend_function_entry classified_functions[] = {
	PHP_FE(str_to_center, arginfo_str_to_center)
	PHP_FE_END
};

zend_module_entry classified_module_entry = {
	STANDARD_MODULE_HEADER,
	"classified",
	classified_functions,
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