/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "highlight.h"

#include "segment.h"
#include "log.h"

//using namespace mu;
using namespace mu::engraving;

namespace mu::engraving {
HighlightSegment::HighlightSegment(System* parent)
    : SpannerSegment(ElementType::HIGHLIGHT_SEGMENT, parent)
{
    LOGI() << "Creating";
    setFlag(ElementFlag::ON_STAFF, true);
}

void HighlightSegment::draw(mu::draw::Painter* painter) const
{
    TRACE_OBJ_DRAW;/*
    using namespace mu::draw;*/
    LOGI() << "Drawing HighlightSegment";
//    TextLineBaseSegment::draw(painter);
    mu::RectF rect(0, 0, 5000, 5000);

    auto brush = painter->brush();
    brush.setColor("#00FF00");
    painter->setBrush(brush);
//    painter->brush().setColor("#00FF00");

    auto pen = painter->pen();
    pen.setColor("#0000FF");
    painter->setPen(pen);

//    painter->drawRect(rect);
    painter->fillRect(rect, brush);
}

Highlight::Highlight(EngravingItem* parent)
    : Spanner(ElementType::HIGHLIGHT, parent)
{
    LOGI() << "Creating";
}

void Highlight::draw(mu::draw::Painter* painter) const
{
    LOGI() << "Drawing";

    mu::RectF rect(0, 0, 5000, 5000);

    auto brush = painter->brush();
    brush.setColor("#00FF00");
    painter->setBrush(brush);
//    painter->brush().setColor("#00FF00");

    auto pen = painter->pen();
    pen.setColor("#0000FF");
    painter->setPen(pen);

//    painter->drawRect(rect);
    painter->fillRect(rect, brush);
}
}
