/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_VTX_HOUGH_FUZZYK_HPP_
#define __REC_VTX_HOUGH_FUZZYK_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#ifdef HEPNOS_ENABLE_HDF5
#include <hdf5.h>
#endif

namespace hep {

/**
 * Auto-generated rec_vtx_hough_fuzzyk structure for the 
 * "/rec.vtx.hough.fuzzyk" table in corresponding HDF5 files.
 */
struct rec_vtx_hough_fuzzyk {

    std::uint64_t npng; /* npng column */
    std::uint64_t npng2d; /* npng2d column */
    std::uint64_t ntot; /* ntot column */
    std::int32_t cycle; /* cycle column */
    std::uint32_t longestidx; /* longestidx column */
    std::uint32_t nshwlid; /* nshwlid column */
    float orphCalE; /* orphCalE column */
    std::uint32_t rec_vtx_hough_idx; /* rec.vtx.hough_idx column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & npng;
        ar & npng2d;
        ar & ntot;
        ar & cycle;
        ar & longestidx;
        ar & nshwlid;
        ar & orphCalE;
        ar & rec_vtx_hough_idx;
        ar & subevt;
        
    }
#ifdef HEPNOS_ENABLE_HDF5

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_vtx_hough_fuzzyk& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_vtx_hough_fuzzyk current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<std::uint64_t> col_npng; /* npng column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/npng", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_npng.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_npng.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_npng2d; /* npng2d column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/npng2d", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_npng2d.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_npng2d.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_ntot; /* ntot column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/ntot", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ntot.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ntot.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_longestidx; /* longestidx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/longestidx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_longestidx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_longestidx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nshwlid; /* nshwlid column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/nshwlid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nshwlid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nshwlid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_orphCalE; /* orphCalE column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/orphCalE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_orphCalE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_orphCalE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_hough_idx; /* rec.vtx.hough_idx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/rec.vtx.hough_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_hough_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_hough_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.npng = col_npng[i];
            current.npng2d = col_npng2d[i];
            current.ntot = col_ntot[i];
            current.cycle = col_cycle[i];
            current.longestidx = col_longestidx[i];
            current.nshwlid = col_nshwlid[i];
            current.orphCalE = col_orphCalE[i];
            current.rec_vtx_hough_idx = col_rec_vtx_hough_idx[i];
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
            std::vector<rec_vtx_hough_fuzzyk>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_vtx_hough_fuzzyk> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<std::uint64_t> col_npng; /* npng column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/npng", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_npng.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_npng.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_npng2d; /* npng2d column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/npng2d", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_npng2d.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_npng2d.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_ntot; /* ntot column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/ntot", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ntot.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ntot.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_longestidx; /* longestidx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/longestidx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_longestidx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_longestidx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nshwlid; /* nshwlid column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/nshwlid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nshwlid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nshwlid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_orphCalE; /* orphCalE column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/orphCalE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_orphCalE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_orphCalE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_hough_idx; /* rec.vtx.hough_idx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/rec.vtx.hough_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_hough_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_hough_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].npng = col_npng[i];
            content[i].npng2d = col_npng2d[i];
            content[i].ntot = col_ntot[i];
            content[i].cycle = col_cycle[i];
            content[i].longestidx = col_longestidx[i];
            content[i].nshwlid = col_nshwlid[i];
            content[i].orphCalE = col_orphCalE[i];
            content[i].rec_vtx_hough_idx = col_rec_vtx_hough_idx[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_vtx_hough_fuzzyk>
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
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk/evt", H5P_DEFAULT);
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