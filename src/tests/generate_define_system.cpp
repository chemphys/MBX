#include <cmath>
#include <cassert>

#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstring>
#include <stdexcept>
#include <cstdlib>

#include "io_tools/read_nrg.h"
#include "io_tools/write_nrg.h"

#include "bblock/system.h"

// This test will generate a header file that can be used to assess the system class.

namespace {

static std::vector<bblock::System> systems;

}  // namespace

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <input.nrg> [mbx.json]" << std::endl;
        return 0;
    }

    try {
        std::ifstream ifs(argv[1]);

        if (!ifs) {
            throw std::runtime_error("could not open the NRG file");
        }

        tools::ReadNrg(argv[1], systems);
        ifs.close();

    } catch (const std::exception& e) {
        std::cerr << " ** Error ** : " << e.what() << std::endl;
        return 1;
    }

    std::vector<double> box;

    if (argc > 2) {
        systems[0].SetUpFromJson(argv[2]);
    } else {
        systems[0].SetUpFromJson();
    }

    std::ofstream ofs("system_data.cpp");

    std::string s = "#ifndef UNITTESTS_SETUP_XXX_H\n#define UNITTESTS_SETUP_XXX_H\n\n#define SETUP_XXX \\\n";
    ofs << s;

    ofs << std::scientific << std::setprecision(10);

    // Energies:

    {  // Total Energy
        double e = systems[0].Energy(true);
        std::vector<double> real_grad = systems[0].GetRealGrads();
        std::vector<double> grad = systems[0].GetGrads();
        std::vector<double> virial = systems[0].GetVirial();

        ofs << "double total_energy = " << e << ";\\\n";
        ofs << "std::vector<double> real_grad = {";
        for (size_t i = 0; i < real_grad.size() - 1; i++) ofs << real_grad[i] << " , ";
        ofs << real_grad[real_grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> grad = {";
        for (size_t i = 0; i < grad.size() - 1; i++) ofs << grad[i] << " , ";
        ofs << grad[grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> virial = {";
        for (size_t i = 0; i < virial.size() - 1; i++) ofs << virial[i] << " , ";
        ofs << virial[virial.size() - 1] << "}; \\\n";
    }  // Total Energy

    {  // 1B Energy
        double e = systems[0].Energy(true);
        std::vector<double> real_grad = systems[0].GetRealGrads();
        std::vector<double> grad = systems[0].GetGrads();
        std::vector<double> virial = systems[0].GetVirial();

        ofs << "double energy_1b = " << e << ";\\\n";
        ofs << "std::vector<double> real_grad_1b = {";
        for (size_t i = 0; i < real_grad.size() - 1; i++) ofs << real_grad[i] << " , ";
        ofs << real_grad[real_grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> grad_1b = {";
        for (size_t i = 0; i < grad.size() - 1; i++) ofs << grad[i] << " , ";
        ofs << grad[grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> virial_1b = {";
        for (size_t i = 0; i < virial.size() - 1; i++) ofs << virial[i] << " , ";
        ofs << virial[virial.size() - 1] << "}; \\\n";
    }  // 1B Energy

    {  // 2B Energy
        double e = systems[0].Energy(true);
        std::vector<double> real_grad = systems[0].GetRealGrads();
        std::vector<double> grad = systems[0].GetGrads();
        std::vector<double> virial = systems[0].GetVirial();

        ofs << "double energy_2b = " << e << ";\\\n";
        ofs << "std::vector<double> real_grad_2b = {";
        for (size_t i = 0; i < real_grad.size() - 1; i++) ofs << real_grad[i] << " , ";
        ofs << real_grad[real_grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> grad_2b = {";
        for (size_t i = 0; i < grad.size() - 1; i++) ofs << grad[i] << " , ";
        ofs << grad[grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> virial_2b = {";
        for (size_t i = 0; i < virial.size() - 1; i++) ofs << virial[i] << " , ";
        ofs << virial[virial.size() - 1] << "}; \\\n";
    }  // 2B Energy

    {  // 3B Energy
        double e = systems[0].Energy(true);
        std::vector<double> real_grad = systems[0].GetRealGrads();
        std::vector<double> grad = systems[0].GetGrads();
        std::vector<double> virial = systems[0].GetVirial();

        ofs << "double energy_3b = " << e << ";\\\n";
        ofs << "std::vector<double> real_grad_3b = {";
        for (size_t i = 0; i < real_grad.size() - 1; i++) ofs << real_grad[i] << " , ";
        ofs << real_grad[real_grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> grad_3b = {";
        for (size_t i = 0; i < grad.size() - 1; i++) ofs << grad[i] << " , ";
        ofs << grad[grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> virial_3b = {";
        for (size_t i = 0; i < virial.size() - 1; i++) ofs << virial[i] << " , ";
        ofs << virial[virial.size() - 1] << "}; \\\n";
    }  // 3B Energy

    {  // Dispersion Energy
        double e = systems[0].Energy(true);
        std::vector<double> real_grad = systems[0].GetRealGrads();
        std::vector<double> grad = systems[0].GetGrads();
        std::vector<double> virial = systems[0].GetVirial();

        ofs << "double energy_disp = " << e << ";\\\n";
        ofs << "std::vector<double> real_grad_disp = {";
        for (size_t i = 0; i < real_grad.size() - 1; i++) ofs << real_grad[i] << " , ";
        ofs << real_grad[real_grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> grad_disp = {";
        for (size_t i = 0; i < grad.size() - 1; i++) ofs << grad[i] << " , ";
        ofs << grad[grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> virial_disp = {";
        for (size_t i = 0; i < virial.size() - 1; i++) ofs << virial[i] << " , ";
        ofs << virial[virial.size() - 1] << "}; \\\n";
    }  // Dispersion Energy

    {  // Buckingham Energy
        double e = systems[0].Energy(true);
        std::vector<double> real_grad = systems[0].GetRealGrads();
        std::vector<double> grad = systems[0].GetGrads();
        std::vector<double> virial = systems[0].GetVirial();

        ofs << "double energy_buck = " << e << ";\\\n";
        ofs << "std::vector<double> real_grad_buck = {";
        for (size_t i = 0; i < real_grad.size() - 1; i++) ofs << real_grad[i] << " , ";
        ofs << real_grad[real_grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> grad_buck = {";
        for (size_t i = 0; i < grad.size() - 1; i++) ofs << grad[i] << " , ";
        ofs << grad[grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> virial_buck = {";
        for (size_t i = 0; i < virial.size() - 1; i++) ofs << virial[i] << " , ";
        ofs << virial[virial.size() - 1] << "}; \\\n";
    }  // Buckingham Energy

    {  // LJ Energy
        double e = systems[0].Energy(true);
        std::vector<double> real_grad = systems[0].GetRealGrads();
        std::vector<double> grad = systems[0].GetGrads();
        std::vector<double> virial = systems[0].GetVirial();

        ofs << "double energy_lj = " << e << ";\\\n";
        ofs << "std::vector<double> real_grad_lj = {";
        for (size_t i = 0; i < real_grad.size() - 1; i++) ofs << real_grad[i] << " , ";
        ofs << real_grad[real_grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> grad_lj = {";
        for (size_t i = 0; i < grad.size() - 1; i++) ofs << grad[i] << " , ";
        ofs << grad[grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> virial_lj = {";
        for (size_t i = 0; i < virial.size() - 1; i++) ofs << virial[i] << " , ";
        ofs << virial[virial.size() - 1] << "}; \\\n";
    }  // LJ Energy

    {  // Classical 1B Energy
        double e = systems[0].Energy(true);
        std::vector<double> real_grad = systems[0].GetRealGrads();
        std::vector<double> grad = systems[0].GetGrads();
        std::vector<double> virial = systems[0].GetVirial();

        ofs << "double energy_ff = " << e << ";\\\n";
        ofs << "std::vector<double> real_grad_ff = {";
        for (size_t i = 0; i < real_grad.size() - 1; i++) ofs << real_grad[i] << " , ";
        ofs << real_grad[real_grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> grad_ff = {";
        for (size_t i = 0; i < grad.size() - 1; i++) ofs << grad[i] << " , ";
        ofs << grad[grad.size() - 1] << "};\\\n";

        ofs << "std::vector<double> virial_ff = {";
        for (size_t i = 0; i < virial.size() - 1; i++) ofs << virial[i] << " , ";
        ofs << virial[virial.size() - 1] << "}; \\\n";
    }  // Classical 1B Energy

    // System information

    std::string json_mbx = systems[0].GetJsonText();
    std::string json_mon = systems[0].GetJsonMonomersText();
    std::string json_repdisp = systems[0].GetJsonDispersionRepulsionText();

    ofs << "std::string json_mbx = R\"(" << json_mbx << ")\";\\\n";
    ofs << "std::string json_mon = R\"(" << json_mon << ")\";\\\n";
    ofs << "std::string json_repdisp = R\"(" << json_repdisp << ")\";\\\n";

    std::vector<double> real_xyz = systems[0].GetRealXyz();
    std::vector<double> xyz = systems[0].GetXyz();

    ofs << "std::vector<double> coords = {";
    for (size_t i = 0; i < xyz.size() - 1; i++) ofs << xyz[i] << " , ";
    ofs << xyz[xyz.size() - 1] << "};\\\n";

    ofs << "std::vector<double> real_coords = {";
    for (size_t i = 0; i < real_xyz.size() - 1; i++) ofs << real_xyz[i] << " , ";
    ofs << real_xyz[real_xyz.size() - 1] << "};\\\n";

    std::vector<std::string> atom_names = systems[0].GetAtomNames();
    std::vector<std::string> real_atom_names = systems[0].GetRealAtomNames();
    std::vector<std::string> monomer_names = systems[0].GetMonId();

    ofs << "std::vector<std::string> atom_names = {";
    for (size_t i = 0; i < atom_names.size() - 1; i++) ofs << "\"" << atom_names[i] << "\" , ";
    ofs << "\"" << atom_names[atom_names.size() - 1] << "\"};\\\n";

    ofs << "std::vector<std::string> real_atom_names = {";
    for (size_t i = 0; i < real_atom_names.size() - 1; i++) ofs << "\"" << real_atom_names[i] << "\" , ";
    ofs << "\"" << real_atom_names[real_atom_names.size() - 1] << "\"};\\\n";

    ofs << "std::vector<std::string> monomer_names = {";
    for (size_t i = 0; i < monomer_names.size() - 1; i++) ofs << "\"" << monomer_names[i] << "\" , ";
    ofs << "\"" << monomer_names[monomer_names.size() - 1] << "\"};\\\n";

    std::vector<size_t> first_index = systems[0].GetFirstInd();
    std::vector<size_t> real_first_index = systems[0].GetFirstIndRealSites();

    ofs << "std::vector<size_t> first_index = {";
    for (size_t i = 0; i < first_index.size() - 1; i++) ofs << first_index[i] << " , ";
    ofs << first_index[first_index.size() - 1] << "};\\\n";

    ofs << "std::vector<size_t> real_first_index = {";
    for (size_t i = 0; i < real_first_index.size() - 1; i++) ofs << real_first_index[i] << " , ";
    ofs << real_first_index[real_first_index.size() - 1] << "};\\\n";

    std::vector<size_t> nsites = systems[0].GetSitesVector();
    std::vector<size_t> natoms = systems[0].GetAtomsVector();

    ofs << "std::vector<size_t> natoms = {";
    for (size_t i = 0; i < natoms.size() - 1; i++) ofs << natoms[i] << " , ";
    ofs << natoms[natoms.size() - 1] << "};\\\n";

    ofs << "std::vector<size_t> nsites = {";
    for (size_t i = 0; i < nsites.size() - 1; i++) ofs << nsites[i] << " , ";
    ofs << nsites[nsites.size() - 1] << "};\\\n";

    size_t tot_sites = systems[0].GetNumSites();
    size_t tot_atoms = systems[0].GetNumRealSites();

    ofs << "size_t tot_sites = " << tot_sites << ";\\\n";
    ofs << "size_t tot_atoms = " << tot_atoms << ";\n";

    ofs << "#endif \n";
}