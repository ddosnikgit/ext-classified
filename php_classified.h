#ifndef PHP_CLASSIFIED_H
# define PHP_CLASSIFIED_H

extern zend_module_entry classified_module_entry;
# define phpext_classified_ptr &classified_module_entry

# define PHP_CLASSIFIED_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_CLASSIFIED)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif