/*
  +----------------------------------------------------------------------+
  | PHP Version 7                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2018 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author:                                                              |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_MCPE_PALETTED_BLOCK_ARRAY_H
#define PHP_MCPE_PALETTED_BLOCK_ARRAY_H

#include "php.h"

extern zend_module_entry mcpe_paletted_block_array_module_entry;
#define phpext_mcpe_paletted_block_array_ptr &mcpe_paletted_block_array_module_entry

#define PHP_MCPE_PALETTED_BLOCK_ARRAY_VERSION "0.1.0"

#ifdef PHP_WIN32
#	define PHP_MCPE_PALETTED_BLOCK_ARRAY_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_MCPE_PALETTED_BLOCK_ARRAY_API __attribute__ ((visibility("default")))
#else
#	define PHP_MCPE_PALETTED_BLOCK_ARRAY_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

#if defined(ZTS) && defined(COMPILE_DL_MCPE_PALETTED_BLOCK_ARRAY)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

PHP_METHOD(PhpPalettedBlockArray, __construct);
PHP_METHOD(PhpPalettedBlockArray, getWordArray);
PHP_METHOD(PhpPalettedBlockArray, getPalette);
PHP_METHOD(PhpPalettedBlockArray, getMaxPaletteSize);
PHP_METHOD(PhpPalettedBlockArray, getBitsPerBlock);
PHP_METHOD(PhpPalettedBlockArray, get);
PHP_METHOD(PhpPalettedBlockArray, set);
PHP_METHOD(PhpPalettedBlockArray, collectGarbage);
//TODO: expose replaceAll() functionality to PHPland

#endif	/* PHP_MCPE_PALETTED_BLOCK_ARRAY_H */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */