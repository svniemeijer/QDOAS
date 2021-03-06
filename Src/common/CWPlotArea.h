/*
Qdoas is a cross-platform application for spectral analysis with the DOAS
algorithm.  Copyright (C) 2007  S[&]T and BIRA

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/


#ifndef _CWPLOTAREA_H_GUARD
#define _CWPLOTAREA_H_GUARD

#include <QScrollArea>
#include <QString>
#include <QSize>

#include "CPlotProperties.h"
#include "CPlotPageData.h"
#include "RefCountPtr.h"

class CWPlotPage;

class CWPlotArea : public QScrollArea
{
 public:
  CWPlotArea(QWidget *parent = 0);

  void setPage(const RefCountConstPtr<CPlotPageData> &page);
  
  void printPage(void);
  void exportPage(void);

  QString pageTitle(void) const;
  QString pageTag(void) const;

  const CPlotProperties& properties(void) const;
  void setProperties(const CPlotProperties &properties);

  void savePreferences(void) const;

 protected:
  void resizeEvent(QResizeEvent *e);

 private:
  CPlotProperties m_properties;
  CWPlotPage *m_plotPage;
  RefCountConstPtr<CPlotPageData> m_pageData;
  QSize m_visibleSize;
};

#endif
