#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include <malloc.h>
#include <util/list.h>

static void list_test(void **state) {
	assert_true(true);
}

int main(void) {
	const struct CMUnitTest UnitTest[] = {
		cmocka_unit_test(list_test),
	};
	return cmocka_run_group_tests(UnitTest, NULL, NULL);
}
