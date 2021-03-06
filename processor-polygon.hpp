#ifndef PROCESSOR_POLYGON_HPP
#define PROCESSOR_POLYGON_HPP

#include "geometry-processor.hpp"

class processor_polygon : public geometry_processor
{
public:
    processor_polygon(std::shared_ptr<reprojection> const &proj,
                      bool enable_multi);

    wkb_t process_way(osmium::Way const &nodes) override;
    wkbs_t process_relation(osmium::Relation const &rel,
                            osmium::memory::Buffer const &ways) override;

private:
    geom::osmium_builder_t m_builder;
};

#endif /* PROCESSOR_POLYGON_HPP */
