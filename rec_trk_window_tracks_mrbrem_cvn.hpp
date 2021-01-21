/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_TRK_WINDOW_TRACKS_MRBREM_CVN_HPP_
#define __REC_TRK_WINDOW_TRACKS_MRBREM_CVN_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_trk_window_tracks_mrbrem_cvn structure for the 
 * "/rec.trk.window.tracks.mrbrem.cvn" table in corresponding HDF5 files.
 */
struct rec_trk_window_tracks_mrbrem_cvn {

    std::uint32_t argmax; /* argmax column */
    std::int32_t cycle; /* cycle column */
    float maxval; /* maxval column */
    float ncid; /* ncid column */
    std::uint32_t noutput; /* noutput column */
    float nueid; /* nueid column */
    float numuid; /* numuid column */
    float nutauid; /* nutauid column */
    std::uint32_t rec_trk_window_tracks_mrbrem_idx; /* rec.trk.window.tracks.mrbrem_idx column */
    std::uint32_t rec_trk_window_tracks_idx; /* rec.trk.window.tracks_idx column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & argmax;
        ar & cycle;
        ar & maxval;
        ar & ncid;
        ar & noutput;
        ar & nueid;
        ar & numuid;
        ar & nutauid;
        ar & rec_trk_window_tracks_mrbrem_idx;
        ar & rec_trk_window_tracks_idx;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_trk_window_tracks_mrbrem_cvn& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_trk_window_tracks_mrbrem_cvn current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<std::uint32_t> col_argmax; /* argmax column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/argmax", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_argmax.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_argmax.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_maxval; /* maxval column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/maxval", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxval.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxval.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ncid; /* ncid column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/ncid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_noutput; /* noutput column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/noutput", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_noutput.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_noutput.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_nueid; /* nueid column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/nueid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nueid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nueid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuid; /* numuid column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/numuid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_nutauid; /* nutauid column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/nutauid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nutauid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nutauid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_window_tracks_mrbrem_idx; /* rec.trk.window.tracks.mrbrem_idx column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/rec.trk.window.tracks.mrbrem_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_window_tracks_mrbrem_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_window_tracks_mrbrem_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_window_tracks_idx; /* rec.trk.window.tracks_idx column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/rec.trk.window.tracks_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_window_tracks_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_window_tracks_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.argmax = col_argmax[i];
            current.cycle = col_cycle[i];
            current.maxval = col_maxval[i];
            current.ncid = col_ncid[i];
            current.noutput = col_noutput[i];
            current.nueid = col_nueid[i];
            current.numuid = col_numuid[i];
            current.nutauid = col_nutauid[i];
            current.rec_trk_window_tracks_mrbrem_idx = col_rec_trk_window_tracks_mrbrem_idx[i];
            current.rec_trk_window_tracks_idx = col_rec_trk_window_tracks_idx[i];
            current.subevt = col_subevt[i];
            
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
            std::vector<rec_trk_window_tracks_mrbrem_cvn>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_trk_window_tracks_mrbrem_cvn> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<std::uint32_t> col_argmax; /* argmax column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/argmax", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_argmax.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_argmax.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_maxval; /* maxval column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/maxval", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxval.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxval.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ncid; /* ncid column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/ncid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_noutput; /* noutput column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/noutput", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_noutput.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_noutput.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_nueid; /* nueid column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/nueid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nueid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nueid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuid; /* numuid column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/numuid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_nutauid; /* nutauid column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/nutauid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nutauid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nutauid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_window_tracks_mrbrem_idx; /* rec.trk.window.tracks.mrbrem_idx column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/rec.trk.window.tracks.mrbrem_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_window_tracks_mrbrem_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_window_tracks_mrbrem_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_window_tracks_idx; /* rec.trk.window.tracks_idx column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/rec.trk.window.tracks_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_window_tracks_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_window_tracks_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].argmax = col_argmax[i];
            content[i].cycle = col_cycle[i];
            content[i].maxval = col_maxval[i];
            content[i].ncid = col_ncid[i];
            content[i].noutput = col_noutput[i];
            content[i].nueid = col_nueid[i];
            content[i].numuid = col_numuid[i];
            content[i].nutauid = col_nutauid[i];
            content[i].rec_trk_window_tracks_mrbrem_idx = col_rec_trk_window_tracks_mrbrem_idx[i];
            content[i].rec_trk_window_tracks_idx = col_rec_trk_window_tracks_idx[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_trk_window_tracks_mrbrem_cvn>
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
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.trk.window.tracks.mrbrem.cvn/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        events.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(events.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
    }
};

}
#endif