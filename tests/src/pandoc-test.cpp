#include "pandoc-test.h"
#include "pandoc/pandoc.h"


void PandocTest::testConvert()
{
	Pandoc pandoc;
	QString result = pandoc.convert("*test*");

	QVERIFY(!result.isEmpty());
	QVERIFY(result.contains("<em>test</em>"));
}


static PandocTest instance;
