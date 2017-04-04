#ifndef PANDOC_TEST_H
#define PANDOC_TEST_H

#include "test-suite.h"


class PandocTest : public TestSuite
{
	Q_OBJECT

	private slots:
		void testConvert();
};

#endif // PANDOC_TEST_H
