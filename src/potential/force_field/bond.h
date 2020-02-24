#ifndef BOND_H
#define BOND_H

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include "topology.h"
#include "tools/custom_exceptions.h"

/**
 * @file bond.h
 * @brief Function definitions for bond class
 */

/**
 * @brief Bond class constructs bond objects and calculates the
 * potential energy and gradients
 *
 * The bond class considers three functional forms: harmonic, morse, and quartic
 * Their potentials are as follows:
 * Harmonic: 0.5 * k * ( rij - r0 ) * ( rij - r0 )
 * Morse: E0[{1-e^(-k(rij - r0))}^2]
 * Quartic: k' / 2 * ( rij - r0 ) * ( rij - r0 ) +
 *          k'' / 3 * ( rij - r0 ) * ( rij - r0 ) * ( rij - r0 )
 *          k''' / 4 * ( rij - r0 ) * ( rij - r0 ) * ( rij - r0 ) * ( rij - r0 )
 *
 * Further information on the potentials can be found at:
 * ftp://ftp.dl.ac.uk/ccp5/DL_POLY/DL_POLY_CLASSIC/DOCUMENTS/USRMAN2.19.pdf
 *
 *
 * Parameter dictionary:
 * Harmonic:
 * linear_param[0] -> constant k
 * nonlinear_param[0] -> constant r0
 *
 * Morse:
 * linear_param[0] -> constant E0
 * nonlinear_param[0] -> constant k
 * nonlinear_param[1] -> constant r0
 *
 * Quartic:
 * linear_param[0] -> constant k
 * nonlinear_param[0] -> constant r0
 * linear_param[1] -> constant k'
 * linear_param[2] -> constant k''
 *
 * The above parameter dictionary also shows how you should enter the parameters
 * in the connectivity file. Ie:
 * Bond 1 2 1 morse 1.0 2.0 3.0
 * will set:
 * E0 -> 1.0
 * k -> 2.0
 * r0 -> 3.0
 *
 */

class Bond : public Topology {
   public:
    /**
     * Default constructor
     */
    Bond();

    /**
     * @brief Overloaded constructor, setting the respective topology, bond_type
     * indexes, and functional_form.
     *
     * This constructor sets the field variables. It also puts the respective
     * number of 0's onto the vectors nonlinear_parameters_ and
     * linear_parameters_ .
     * @param[in] topology This is the topology, which will be bond
     * @param[in] bond_type This is the bond_type of the given bond
     * @param[in] indexes The indexes of the the atoms in the bond
     * @param[in] functional_form The functional form that is used to evaluate
     *                            the energy
     */
    Bond(std::string topology, size_t bond_type, std::vector<size_t> indexes, std::string functional_form);

    /**
     * Default deconstructor
     */
    ~Bond();

    /**
     * @brief Calculates the potential energy using the nonlinear and linear
     *        parameters
     * @param[in] x Represents the distance rij,
     * @return The potential energy for a given bond length rij
     */
    double GetEnergy(double x);

    /**
     * @brief gets the gradient for this particular topology for a given
     *        functional form
     * @param  x the bond distance rij
     * @return   the gradient
     *
     * Note. this is not the entire gradient. You still need to back propagate
     * this gradient to each of the individual x,y,z components
     */
    double GetTopologyGradient(double x);

    /**
     * @brief Checks if two bonds are the same by inspecting
     * all of the field variables.
     * @param[in] bond Is the other bond object that we are comparing
     * against
     * @return True if the bond objects are the same. False otherwise
     */
    bool operator==(Bond const &bond) const;

   private:
};

#endif  // BOND_H