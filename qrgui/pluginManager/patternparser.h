#pragma once

#include <QtXml/QDomElement>
#include <QtCore/QPointF>

#include "../../qrkernel/ids.h"
#include "pattern.h"

namespace qReal {
class PatternParser
{
public:
	PatternParser();
	void loadXml(QString const &xml);
	void parseGroups(QString const &ed, QString const &diagram);
	QList<Pattern> getPatterns();

private:
	void parseGroup(QDomElement const &group);
	void parseNode(QDomElement const &node, Pattern &pattern);
	void parseEdge(QDomElement const &edge, Pattern &pattern);

	QString mXml;
	QString mEditor;
	QString mDiagram;
	QList<Pattern> mPatterns;

};
}
