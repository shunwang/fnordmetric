/**
 * This file is part of the "FnordMetric" project
 *   Copyright (c) 2014 Paul Asmuth, Google Inc.
 *
 * FnordMetric is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#include <fnordmetric/metricdb/metricsnapshot.h>

using namespace fnord;
namespace fnordmetric {
namespace metricdb {

MetricSnapshot::MetricSnapshot(
    std::unique_ptr<sstable::LiveSSTable> live_sstable) :
    live_sstable_(std::move(live_sstable)) {}


sstable::LiveSSTable* MetricSnapshot::liveTable() const {
  return live_sstable_.get();
}

}
}
