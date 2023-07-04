PHP_ARG_ENABLE(classified, whether to enable classified support,
[ --enable-classified           enable Classified-C Library])

if test "$PHP_CLASSIFIED" != "no"; then
  PHP_NEW_EXTENSION(classified, classified.c, $ext_shared)
fi