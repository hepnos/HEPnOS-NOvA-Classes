/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SEL_LID_HPP_
#define __REC_SEL_LID_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_sel_lid structure for the 
 * "/rec.sel.lid" table in corresponding HDF5 files.
 */
struct rec_sel_lid {

    float ann; /* ann column */
    float anne; /* anne column */
    float annecos; /* annecos column */
    float annepi0; /* annepi0 column */
    std::int32_t cycle; /* cycle column */
    float rnn; /* rnn column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & ann;
        ar & anne;
        ar & annecos;
        ar & annepi0;
        ar & cycle;
        ar & rnn;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_sel_lid& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_sel_lid current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<float> col_ann; /* ann column */
        dataset = H5Dopen(file, "/rec.sel.lid/ann", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ann.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ann.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_anne; /* anne column */
        dataset = H5Dopen(file, "/rec.sel.lid/anne", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_anne.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_anne.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annecos; /* annecos column */
        dataset = H5Dopen(file, "/rec.sel.lid/annecos", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annecos.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annecos.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annepi0; /* annepi0 column */
        dataset = H5Dopen(file, "/rec.sel.lid/annepi0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annepi0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annepi0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sel.lid/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_rnn; /* rnn column */
        dataset = H5Dopen(file, "/rec.sel.lid/rnn", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rnn.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rnn.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sel.lid/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.ann = col_ann[i];
            current.anne = col_anne[i];
            current.annecos = col_annecos[i];
            current.annepi0 = col_annepi0[i];
            current.cycle = col_cycle[i];
            current.rnn = col_rnn[i];
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
            std::vector<rec_sel_lid>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_sel_lid> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<float> col_ann; /* ann column */
        dataset = H5Dopen(file, "/rec.sel.lid/ann", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ann.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ann.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_anne; /* anne column */
        dataset = H5Dopen(file, "/rec.sel.lid/anne", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_anne.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_anne.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annecos; /* annecos column */
        dataset = H5Dopen(file, "/rec.sel.lid/annecos", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annecos.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annecos.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annepi0; /* annepi0 column */
        dataset = H5Dopen(file, "/rec.sel.lid/annepi0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annepi0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annepi0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sel.lid/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_rnn; /* rnn column */
        dataset = H5Dopen(file, "/rec.sel.lid/rnn", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rnn.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rnn.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sel.lid/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].ann = col_ann[i];
            content[i].anne = col_anne[i];
            content[i].annecos = col_annecos[i];
            content[i].annepi0 = col_annepi0[i];
            content[i].cycle = col_cycle[i];
            content[i].rnn = col_rnn[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_sel_lid>
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
        dataset = H5Dopen(file, "/rec.sel.lid/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.sel.lid/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.sel.lid/evt", H5P_DEFAULT);
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