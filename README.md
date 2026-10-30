# Bayesian Brain Mapping EM Optimization

This project reimplements one expectation-maximization (EM) parameter-update
function for Bayesian brain mapping from R in C++ using RcppArmadillo. It compares
the outputs and execution time of the two implementations.

## Results

On synthetic inputs, seven returned outputs matched the R implementation within
a numerical tolerance of 1e-8. A 100-run microbenchmark reported:

| Implementation | Median runtime |
| --- | ---: |
| R | 10.77 ms |
| RcppArmadillo | 2.73 ms |

That is approximately a 4× median speedup for the tested function and inputs.
It is not a measured speedup for a complete neuroimaging analysis.

## Files

- `UpdateTheta_BrainMap.independent.R` — R implementation
- `updateTheta_BrainMap_independent.cpp` — C++ implementation, required to run the comparisons
- `replicate_output.R` — numerical output comparisons
- `benchmarking.R` — runtime comparison

## Requirements

R packages: `Rcpp`, `RcppArmadillo`, and `microbenchmark`.

After adding the C++ source file, run the scripts from the repository root:

    Rscript replicate_output.R
    Rscript benchmarking.R

## Scope

The reported benchmark uses synthetic inputs. The supplied scripts do not fix
a random seed, so reruns may produce different timings. Performance on the Human
Connectome Project data has not been established by this benchmark.
