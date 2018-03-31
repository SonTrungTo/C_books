/* The majority function theorem:
*  Let n be the number of Boolean variables. Of all 2^n different inputs,
* there are 2^{n - 1} ones that have majority value 1.
*
*  PROOF:
*  The proof is by induction. Let n = 1, then only one (x = 1) has majority value 1.
* Suppose the statement holds true for n = k. Then for n = k + 1, note we have
* 2^{k + 1} = 2^k + 2^k inputs, which corresponds to 2^{k - 1} + 2^{k - 1}, or 2^{k}, inputs
* that have majority value of 1.                                            Q.E.D
*/
