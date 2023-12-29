#include <QtTest/QtTest>
#include "../src/mycode.h"

#include <sstream>
using namespace std;

class TestMyCode: public QObject {
    Q_OBJECT
private slots:
    void testEmpty();
    void testSingleMatch();
};

void TestMyCode::testEmpty()
{
    string str = "abcde";
    string sub = "";
    QVector<int> result = my_substr_mycode(str, sub);
    QCOMPARE(result[0], 0);
}

void TestMyCode::testSingleMatch()
{
    string str = "abcde";
    string sub = "de";
    QVector<int> result = my_substr_mycode(str, sub);
    QCOMPARE(result[0], 3);
}

QTEST_MAIN(TestMyCode)
#include "test_mycode.moc"
