/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_TRK_KALMAN_TRACKS_HPP_
#define __REC_TRK_KALMAN_TRACKS_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#ifdef HEPNOS_ENABLE_HDF5
#include <hdf5.h>
#endif

namespace hep {

/**
 * Auto-generated rec_trk_kalman_tracks structure for the 
 * "/rec.trk.kalman.tracks" table in corresponding HDF5 files.
 */
struct rec_trk_kalman_tracks {

    double leninact; /* leninact column */
    double lenincat; /* lenincat column */
    float avedEdxlast10cm; /* avedEdxlast10cm column */
    float avedEdxlast20cm; /* avedEdxlast20cm column */
    float avedEdxlast30cm; /* avedEdxlast30cm column */
    float avedEdxlast40cm; /* avedEdxlast40cm column */
    float calE; /* calE column */
    std::int32_t cycle; /* cycle column */
    float dedxllh; /* dedxllh column */
    float dedxllh2017; /* dedxllh2017 column */
    float dir_x; /* dir.x column */
    float dir_y; /* dir.y column */
    float dir_z; /* dir.z column */
    float enddist; /* enddist column */
    float len; /* len column */
    float lenE; /* lenE column */
    float measfrac; /* measfrac column */
    float measfrac2017; /* measfrac2017 column */
    float overlapE; /* overlapE column */
    float pngmaxx; /* pngmaxx column */
    float pngmaxy; /* pngmaxy column */
    float pngminx; /* pngminx column */
    float pngminy; /* pngminy column */
    std::uint32_t rec_trk_kalman_tracks_idx; /* rec.trk.kalman.tracks_idx column */
    std::int32_t remcont; /* remcont column */
    std::int32_t remcont2017; /* remcont2017 column */
    std::int32_t rempdg; /* rempdg column */
    std::int32_t rempdg2017; /* rempdg2017 column */
    float rempid; /* rempid column */
    float rempid2017; /* rempid2017 column */
    float scatllh; /* scatllh column */
    float scatllh2017; /* scatllh2017 column */
    float start_x; /* start.x column */
    float start_y; /* start.y column */
    float start_z; /* start.z column */
    float stop_x; /* stop.x column */
    float stop_y; /* stop.y column */
    float stop_z; /* stop.z column */
    float stopdir_x; /* stopdir.x column */
    float stopdir_y; /* stopdir.y column */
    float stopdir_z; /* stopdir.z column */
    float trkbakair; /* trkbakair column */
    std::int32_t trkbakcell; /* trkbakcell column */
    std::int32_t trkbakcellnd; /* trkbakcellnd column */
    float trkbakdist; /* trkbakdist column */
    float trkbaksteel; /* trkbaksteel column */
    float trkfwdair; /* trkfwdair column */
    std::int32_t trkfwdcell; /* trkfwdcell column */
    std::int32_t trkfwdcellnd; /* trkfwdcellnd column */
    float trkfwddist; /* trkfwddist column */
    float trkfwdsteel; /* trkfwdsteel column */
    float trkyposattrans; /* trkyposattrans column */
    float vtxdist; /* vtxdist column */
    std::uint16_t maxplanecont; /* maxplanecont column */
    std::uint16_t maxplanegap; /* maxplanegap column */
    std::uint16_t nhit; /* nhit column */
    std::uint16_t nhitx; /* nhitx column */
    std::uint16_t nhity; /* nhity column */
    std::uint16_t nplane; /* nplane column */
    std::uint16_t nplanegap; /* nplanegap column */
    std::uint16_t subevt; /* subevt column */
    std::uint16_t view; /* view column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & leninact;
        ar & lenincat;
        ar & avedEdxlast10cm;
        ar & avedEdxlast20cm;
        ar & avedEdxlast30cm;
        ar & avedEdxlast40cm;
        ar & calE;
        ar & cycle;
        ar & dedxllh;
        ar & dedxllh2017;
        ar & dir_x;
        ar & dir_y;
        ar & dir_z;
        ar & enddist;
        ar & len;
        ar & lenE;
        ar & measfrac;
        ar & measfrac2017;
        ar & overlapE;
        ar & pngmaxx;
        ar & pngmaxy;
        ar & pngminx;
        ar & pngminy;
        ar & rec_trk_kalman_tracks_idx;
        ar & remcont;
        ar & remcont2017;
        ar & rempdg;
        ar & rempdg2017;
        ar & rempid;
        ar & rempid2017;
        ar & scatllh;
        ar & scatllh2017;
        ar & start_x;
        ar & start_y;
        ar & start_z;
        ar & stop_x;
        ar & stop_y;
        ar & stop_z;
        ar & stopdir_x;
        ar & stopdir_y;
        ar & stopdir_z;
        ar & trkbakair;
        ar & trkbakcell;
        ar & trkbakcellnd;
        ar & trkbakdist;
        ar & trkbaksteel;
        ar & trkfwdair;
        ar & trkfwdcell;
        ar & trkfwdcellnd;
        ar & trkfwddist;
        ar & trkfwdsteel;
        ar & trkyposattrans;
        ar & vtxdist;
        ar & maxplanecont;
        ar & maxplanegap;
        ar & nhit;
        ar & nhitx;
        ar & nhity;
        ar & nplane;
        ar & nplanegap;
        ar & subevt;
        ar & view;
        
    }
#ifdef HEPNOS_ENABLE_HDF5

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_trk_kalman_tracks& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_trk_kalman_tracks current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<double> col_leninact; /* leninact column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/leninact", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_leninact.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_leninact.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_lenincat; /* lenincat column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/lenincat", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lenincat.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lenincat.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast10cm; /* avedEdxlast10cm column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/avedEdxlast10cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast10cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast10cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast20cm; /* avedEdxlast20cm column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/avedEdxlast20cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast20cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast20cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast30cm; /* avedEdxlast30cm column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/avedEdxlast30cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast30cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast30cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast40cm; /* avedEdxlast40cm column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/avedEdxlast40cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast40cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast40cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_calE; /* calE column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/calE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_calE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_calE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxllh; /* dedxllh column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/dedxllh", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxllh.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxllh.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxllh2017; /* dedxllh2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/dedxllh2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxllh2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxllh2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_x; /* dir.x column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/dir.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_y; /* dir.y column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/dir.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_z; /* dir.z column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/dir.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enddist; /* enddist column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/enddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_len; /* len column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/len", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_len.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_len.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_lenE; /* lenE column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/lenE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lenE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lenE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_measfrac; /* measfrac column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/measfrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_measfrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_measfrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_measfrac2017; /* measfrac2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/measfrac2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_measfrac2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_measfrac2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_overlapE; /* overlapE column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/overlapE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_overlapE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_overlapE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngmaxx; /* pngmaxx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/pngmaxx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngmaxx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngmaxx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngmaxy; /* pngmaxy column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/pngmaxy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngmaxy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngmaxy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngminx; /* pngminx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/pngminx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngminx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngminx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngminy; /* pngminy column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/pngminy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngminy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngminy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_kalman_tracks_idx; /* rec.trk.kalman.tracks_idx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/rec.trk.kalman.tracks_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_kalman_tracks_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_kalman_tracks_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_remcont; /* remcont column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/remcont", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_remcont.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_remcont.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_remcont2017; /* remcont2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/remcont2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_remcont2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_remcont2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_rempdg; /* rempdg column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/rempdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rempdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rempdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_rempdg2017; /* rempdg2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/rempdg2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rempdg2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rempdg2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_rempid; /* rempid column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/rempid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rempid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rempid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_rempid2017; /* rempid2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/rempid2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rempid2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rempid2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_scatllh; /* scatllh column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/scatllh", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_scatllh.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_scatllh.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_scatllh2017; /* scatllh2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/scatllh2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_scatllh2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_scatllh2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_x; /* start.x column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/start.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_y; /* start.y column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/start.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_z; /* start.z column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/start.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_x; /* stop.x column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stop.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_y; /* stop.y column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stop.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_z; /* stop.z column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stop.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopdir_x; /* stopdir.x column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stopdir.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopdir_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopdir_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopdir_y; /* stopdir.y column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stopdir.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopdir_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopdir_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopdir_z; /* stopdir.z column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stopdir.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopdir_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopdir_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkbakair; /* trkbakair column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkbakair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkbakcell; /* trkbakcell column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkbakcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkbakcellnd; /* trkbakcellnd column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkbakcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkbakdist; /* trkbakdist column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkbakdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkbaksteel; /* trkbaksteel column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkbaksteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbaksteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbaksteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkfwdair; /* trkfwdair column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkfwdair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkfwdcell; /* trkfwdcell column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkfwdcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkfwdcellnd; /* trkfwdcellnd column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkfwdcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkfwddist; /* trkfwddist column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkfwddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkfwdsteel; /* trkfwdsteel column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkfwdsteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdsteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdsteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkyposattrans; /* trkyposattrans column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkyposattrans", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkyposattrans.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkyposattrans.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxdist; /* vtxdist column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/vtxdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maxplanecont; /* maxplanecont column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/maxplanecont", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxplanecont.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxplanecont.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maxplanegap; /* maxplanegap column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/maxplanegap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxplanegap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxplanegap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhit; /* nhit column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/nhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhitx; /* nhitx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/nhitx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhitx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhitx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhity; /* nhity column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/nhity", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhity.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhity.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplane; /* nplane column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/nplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplanegap; /* nplanegap column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/nplanegap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplanegap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplanegap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_view; /* view column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/view", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_view.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_view.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.leninact = col_leninact[i];
            current.lenincat = col_lenincat[i];
            current.avedEdxlast10cm = col_avedEdxlast10cm[i];
            current.avedEdxlast20cm = col_avedEdxlast20cm[i];
            current.avedEdxlast30cm = col_avedEdxlast30cm[i];
            current.avedEdxlast40cm = col_avedEdxlast40cm[i];
            current.calE = col_calE[i];
            current.cycle = col_cycle[i];
            current.dedxllh = col_dedxllh[i];
            current.dedxllh2017 = col_dedxllh2017[i];
            current.dir_x = col_dir_x[i];
            current.dir_y = col_dir_y[i];
            current.dir_z = col_dir_z[i];
            current.enddist = col_enddist[i];
            current.len = col_len[i];
            current.lenE = col_lenE[i];
            current.measfrac = col_measfrac[i];
            current.measfrac2017 = col_measfrac2017[i];
            current.overlapE = col_overlapE[i];
            current.pngmaxx = col_pngmaxx[i];
            current.pngmaxy = col_pngmaxy[i];
            current.pngminx = col_pngminx[i];
            current.pngminy = col_pngminy[i];
            current.rec_trk_kalman_tracks_idx = col_rec_trk_kalman_tracks_idx[i];
            current.remcont = col_remcont[i];
            current.remcont2017 = col_remcont2017[i];
            current.rempdg = col_rempdg[i];
            current.rempdg2017 = col_rempdg2017[i];
            current.rempid = col_rempid[i];
            current.rempid2017 = col_rempid2017[i];
            current.scatllh = col_scatllh[i];
            current.scatllh2017 = col_scatllh2017[i];
            current.start_x = col_start_x[i];
            current.start_y = col_start_y[i];
            current.start_z = col_start_z[i];
            current.stop_x = col_stop_x[i];
            current.stop_y = col_stop_y[i];
            current.stop_z = col_stop_z[i];
            current.stopdir_x = col_stopdir_x[i];
            current.stopdir_y = col_stopdir_y[i];
            current.stopdir_z = col_stopdir_z[i];
            current.trkbakair = col_trkbakair[i];
            current.trkbakcell = col_trkbakcell[i];
            current.trkbakcellnd = col_trkbakcellnd[i];
            current.trkbakdist = col_trkbakdist[i];
            current.trkbaksteel = col_trkbaksteel[i];
            current.trkfwdair = col_trkfwdair[i];
            current.trkfwdcell = col_trkfwdcell[i];
            current.trkfwdcellnd = col_trkfwdcellnd[i];
            current.trkfwddist = col_trkfwddist[i];
            current.trkfwdsteel = col_trkfwdsteel[i];
            current.trkyposattrans = col_trkyposattrans[i];
            current.vtxdist = col_vtxdist[i];
            current.maxplanecont = col_maxplanecont[i];
            current.maxplanegap = col_maxplanegap[i];
            current.nhit = col_nhit[i];
            current.nhitx = col_nhitx[i];
            current.nhity = col_nhity[i];
            current.nplane = col_nplane[i];
            current.nplanegap = col_nplanegap[i];
            current.subevt = col_subevt[i];
            current.view = col_view[i];
            
            callback(col_run[i], col_subrun[i], col_evt[i], current);
        }
    }

    template<typename F>
    static void from_hdf5(const std::string& filename, F&& callback) {
        hid_t file_id = H5Fopen(filename.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);
        from_hdf5(file_id, std::forward<F>(callback));
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_trk_kalman_tracks>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_trk_kalman_tracks> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<double> col_leninact; /* leninact column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/leninact", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_leninact.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_leninact.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_lenincat; /* lenincat column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/lenincat", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lenincat.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lenincat.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast10cm; /* avedEdxlast10cm column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/avedEdxlast10cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast10cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast10cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast20cm; /* avedEdxlast20cm column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/avedEdxlast20cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast20cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast20cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast30cm; /* avedEdxlast30cm column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/avedEdxlast30cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast30cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast30cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast40cm; /* avedEdxlast40cm column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/avedEdxlast40cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast40cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast40cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_calE; /* calE column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/calE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_calE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_calE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxllh; /* dedxllh column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/dedxllh", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxllh.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxllh.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxllh2017; /* dedxllh2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/dedxllh2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxllh2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxllh2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_x; /* dir.x column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/dir.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_y; /* dir.y column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/dir.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_z; /* dir.z column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/dir.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enddist; /* enddist column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/enddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_len; /* len column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/len", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_len.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_len.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_lenE; /* lenE column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/lenE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lenE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lenE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_measfrac; /* measfrac column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/measfrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_measfrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_measfrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_measfrac2017; /* measfrac2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/measfrac2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_measfrac2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_measfrac2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_overlapE; /* overlapE column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/overlapE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_overlapE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_overlapE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngmaxx; /* pngmaxx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/pngmaxx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngmaxx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngmaxx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngmaxy; /* pngmaxy column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/pngmaxy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngmaxy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngmaxy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngminx; /* pngminx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/pngminx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngminx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngminx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngminy; /* pngminy column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/pngminy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngminy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngminy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_kalman_tracks_idx; /* rec.trk.kalman.tracks_idx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/rec.trk.kalman.tracks_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_kalman_tracks_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_kalman_tracks_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_remcont; /* remcont column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/remcont", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_remcont.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_remcont.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_remcont2017; /* remcont2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/remcont2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_remcont2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_remcont2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_rempdg; /* rempdg column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/rempdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rempdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rempdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_rempdg2017; /* rempdg2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/rempdg2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rempdg2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rempdg2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_rempid; /* rempid column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/rempid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rempid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rempid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_rempid2017; /* rempid2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/rempid2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rempid2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rempid2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_scatllh; /* scatllh column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/scatllh", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_scatllh.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_scatllh.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_scatllh2017; /* scatllh2017 column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/scatllh2017", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_scatllh2017.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_scatllh2017.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_x; /* start.x column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/start.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_y; /* start.y column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/start.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_z; /* start.z column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/start.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_x; /* stop.x column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stop.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_y; /* stop.y column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stop.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_z; /* stop.z column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stop.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopdir_x; /* stopdir.x column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stopdir.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopdir_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopdir_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopdir_y; /* stopdir.y column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stopdir.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopdir_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopdir_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopdir_z; /* stopdir.z column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/stopdir.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopdir_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopdir_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkbakair; /* trkbakair column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkbakair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkbakcell; /* trkbakcell column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkbakcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkbakcellnd; /* trkbakcellnd column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkbakcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkbakdist; /* trkbakdist column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkbakdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkbaksteel; /* trkbaksteel column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkbaksteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbaksteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbaksteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkfwdair; /* trkfwdair column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkfwdair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkfwdcell; /* trkfwdcell column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkfwdcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkfwdcellnd; /* trkfwdcellnd column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkfwdcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkfwddist; /* trkfwddist column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkfwddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkfwdsteel; /* trkfwdsteel column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkfwdsteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdsteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdsteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkyposattrans; /* trkyposattrans column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/trkyposattrans", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkyposattrans.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkyposattrans.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxdist; /* vtxdist column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/vtxdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maxplanecont; /* maxplanecont column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/maxplanecont", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxplanecont.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxplanecont.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maxplanegap; /* maxplanegap column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/maxplanegap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxplanegap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxplanegap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhit; /* nhit column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/nhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhitx; /* nhitx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/nhitx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhitx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhitx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhity; /* nhity column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/nhity", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhity.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhity.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplane; /* nplane column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/nplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplanegap; /* nplanegap column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/nplanegap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplanegap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplanegap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_view; /* view column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/view", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_view.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_view.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].leninact = col_leninact[i];
            content[i].lenincat = col_lenincat[i];
            content[i].avedEdxlast10cm = col_avedEdxlast10cm[i];
            content[i].avedEdxlast20cm = col_avedEdxlast20cm[i];
            content[i].avedEdxlast30cm = col_avedEdxlast30cm[i];
            content[i].avedEdxlast40cm = col_avedEdxlast40cm[i];
            content[i].calE = col_calE[i];
            content[i].cycle = col_cycle[i];
            content[i].dedxllh = col_dedxllh[i];
            content[i].dedxllh2017 = col_dedxllh2017[i];
            content[i].dir_x = col_dir_x[i];
            content[i].dir_y = col_dir_y[i];
            content[i].dir_z = col_dir_z[i];
            content[i].enddist = col_enddist[i];
            content[i].len = col_len[i];
            content[i].lenE = col_lenE[i];
            content[i].measfrac = col_measfrac[i];
            content[i].measfrac2017 = col_measfrac2017[i];
            content[i].overlapE = col_overlapE[i];
            content[i].pngmaxx = col_pngmaxx[i];
            content[i].pngmaxy = col_pngmaxy[i];
            content[i].pngminx = col_pngminx[i];
            content[i].pngminy = col_pngminy[i];
            content[i].rec_trk_kalman_tracks_idx = col_rec_trk_kalman_tracks_idx[i];
            content[i].remcont = col_remcont[i];
            content[i].remcont2017 = col_remcont2017[i];
            content[i].rempdg = col_rempdg[i];
            content[i].rempdg2017 = col_rempdg2017[i];
            content[i].rempid = col_rempid[i];
            content[i].rempid2017 = col_rempid2017[i];
            content[i].scatllh = col_scatllh[i];
            content[i].scatllh2017 = col_scatllh2017[i];
            content[i].start_x = col_start_x[i];
            content[i].start_y = col_start_y[i];
            content[i].start_z = col_start_z[i];
            content[i].stop_x = col_stop_x[i];
            content[i].stop_y = col_stop_y[i];
            content[i].stop_z = col_stop_z[i];
            content[i].stopdir_x = col_stopdir_x[i];
            content[i].stopdir_y = col_stopdir_y[i];
            content[i].stopdir_z = col_stopdir_z[i];
            content[i].trkbakair = col_trkbakair[i];
            content[i].trkbakcell = col_trkbakcell[i];
            content[i].trkbakcellnd = col_trkbakcellnd[i];
            content[i].trkbakdist = col_trkbakdist[i];
            content[i].trkbaksteel = col_trkbaksteel[i];
            content[i].trkfwdair = col_trkfwdair[i];
            content[i].trkfwdcell = col_trkfwdcell[i];
            content[i].trkfwdcellnd = col_trkfwdcellnd[i];
            content[i].trkfwddist = col_trkfwddist[i];
            content[i].trkfwdsteel = col_trkfwdsteel[i];
            content[i].trkyposattrans = col_trkyposattrans[i];
            content[i].vtxdist = col_vtxdist[i];
            content[i].maxplanecont = col_maxplanecont[i];
            content[i].maxplanegap = col_maxplanegap[i];
            content[i].nhit = col_nhit[i];
            content[i].nhitx = col_nhitx[i];
            content[i].nhity = col_nhity[i];
            content[i].nplane = col_nplane[i];
            content[i].nplanegap = col_nplanegap[i];
            content[i].subevt = col_subevt[i];
            content[i].view = col_view[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_trk_kalman_tracks>
           > from_hdf5(const std::string& filename) {
        hid_t file_id = H5Fopen(filename.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);
        return from_hdf5(file_id);
    }

    private:

    static void _read_indices(hid_t file,
                              std::vector<unsigned>& runs,
                              std::vector<unsigned>& subruns,
                              std::vector<unsigned>& events)
    {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        /* column for run indices */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        events.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(events.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
    }
#endif
};

}
#endif